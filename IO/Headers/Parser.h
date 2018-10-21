//
// Created by dtohin on 10/20/2018.
//

#ifndef SOURCECODE_PARSER_H
#define SOURCECODE_PARSER_H

#include "../../Headers/includer.h"
#include <list>

class Parser {

    int findStringLastIndex(string &str, char c);
    bool stringHasCharAfterIndex(int index, string& str);
    string findMatchingCommand(string command);
    std::tuple<string, string> findMatchingTypeAndValue(string command);
    string extractContentFromBrackets(string command);
public:
    std::tuple<string, string, string> parseCommand(string command);
    std::list<std::tuple<string, string, string>> parseFromFile(string path);
    bool commandHasValidArgCount(string command);
};


#endif //SOURCECODE_PARSER_H
