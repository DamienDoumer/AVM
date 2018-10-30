//
// Created by dtohi on 10/20/2018.
//

#include "Headers/Parser.h"
#include "../AVMException.cpp"
#include <algorithm>
#include <regex>
using namespace std::regex_constants;

/// Parse a command and return its interpretation
/// \param command The command passed by the user
/// \return A tuple containing the 3 command sections.
std::tuple<string, string, string> Parser::parseCommand(string command)
{
    string commandExtracted;
    std::tuple<string, string> typeValTuple;

    if(!commandHasValidArgCount(command))
        throw AVMException("Invalid arguement count, please "
                           "format your commands properly");
    commandExtracted = findMatchingCommand(command);
    if(commandExtracted == "Push" || commandExtracted == "Assert")
    {
        typeValTuple = findMatchingTypeAndValue(command);
    }
    else if (commandExtracted == "Load" || commandExtracted == "Store")
    {
        typeValTuple = std::make_tuple(commandExtracted, std::to_string(getRegisterIndex(command)));
    }
    return std::make_tuple(commandExtracted, std::get<0>(typeValTuple), std::get<1>(typeValTuple));
}

/// Get the index of the register.
/// \param command User's command passed.
/// \return The index passed.
int Parser::getRegisterIndex(string command)
{
    int index = command.find_first_of(' ');
    string buffer;
    int val = 0;

    for(int i = index; i < command.length(); i++)
    {
        buffer += command[i];
    }
    try
    {
        val = std::stoi(buffer);
        if(val > 15 || val < 0)
            throw AVMException("You have input a wrong index for the register."
                               " Please try with an index between 0 and 15");
    }
    catch (exception& e)
    {
        throw AVMException("The index you passed is not valid, for this action.,");
    }
    return val;
}

/// Find matching command
/// \param cmd Command passed by user
/// \return The matching command
string Parser::findMatchingCommand(string cmd)
{
    string commands[] = { "Push", "Pop", "Clear", "Dup", "Swap", "Dump",
                          "Assert", "Add", "Sub", "Mul", "Div", "Mod",
                           "Load", "Store", "Print", "Exit"};
    std::regex caseInsensitiveRegex(commands[0], ECMAScript | icase );
    std::smatch cmdMatch;
    int index = 0;

    for(int i = 0; i < 16; i++)
    {
        std::regex caseInsensitiveRegex(commands[i], ECMAScript | icase );
        if (std::regex_search(cmd, cmdMatch, caseInsensitiveRegex))
        {
            return commands[i];
        }
    }
    throw AVMException("Invalid Command passed.");
}

/*
 * Find the type and value which the user sends.
 * Case sensitive matching
 */
std::tuple<string, string>  Parser::findMatchingTypeAndValue(string command)
{
    string types[] = { "Int8", "Int16", "Int32", "Float",
                       "Double", "BigDecimal" };
    string type = "";
    string value;
    std::smatch cmdMatch;
    size_t  n1 = 0, n2 = 0;

    n1 = std::count(command.begin(), command.end(), '(');
    n2 = std::count(command.begin(), command.end(), ')');
    if(n1 != 1 && n2 != 1)
        throw AVMException("Invalid Command passed.");
    for(int i = 0; i < 6; i++)
    {
        if (command.find(types[i]) != string::npos)
        {
            type = types[i];
            break;
        }
    }
    if(type.length() < 3)
        throw AVMException("Invalid Command passed.");
    value = extractContentFromBrackets(command);
    if(value.length() < 1)
        throw AVMException("Invalid Command passed.");
    return std::make_tuple(type, value);
}

/*
 * Extract the content of brackets
 * and returns it
 */
string Parser::extractContentFromBrackets(string command)
{
    int n1 = command.find('(');
    int n2 = command.find(')');
    string value;

    for(int i = n1 + 1; i<n2; i++)
    {
        value += command[i];
    }
    return value;
}

/*
 * Check if a command has the valid number of arguement counts
 */
bool Parser::commandHasValidArgCount(string command)
{
    size_t n = 0;

    if (command.length() < 3)
        return false;
    n = std::count(command.begin(), command.end(), ' ');
    if (n > 2)
        return false;
    if (n == 2)
    {
        return !stringHasCharAfterIndex(findStringLastIndex(command, ' '), command);
    }
    if (n == 1 || n == 0)
        return true;
}

/*
 * Find the last index of a char in a string
 */
int Parser::findStringLastIndex(string& str, char x)
{
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] == x)
            return i;
    }
    return -1;
}

/*
 * Check if a string has characters
 * after a given index.
 */
bool Parser::stringHasCharAfterIndex(int index, string& str)
{
    if(index == str.length())
        return false;
    for(int i = index; i < str.length(); i++)
    {
        if(str[i] != ' ')
            return true;
    }
}