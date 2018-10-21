//
// Created by dtohi on 10/20/2018.
//

#include "Headers/Parser.h"
#include "../AVMException.cpp"
#include <algorithm>

std::tuple<string, string, string> Parser::parseCommand(string command)
{
    if(!commandHasValidArgCount(command))
        throw AVMException("Invalid arguement count, please "
                           "format your commands properly");
    return std::make_tuple("", "", "");
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