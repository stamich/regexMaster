//
// Created by Michal S. on 2019-04-11.
//

#ifndef REGEXMASTER_FILECREATOR_H
#define REGEXMASTER_FILECREATOR_H

#include <exception>
#include <string>
#include <ctime>
#include <iostream>

using namespace std;

class StackTrace : exception{
    const char* what() const noexcept {
        return "The exception was thrown!\n";
    }
};

class FileCreator{
    time_t now = time(0); // current date/time based on system
    time_t today;
    time_t yesterday;
    char* dt = ctime(&now); // converts to string form

    tm *gmtm = gmtime(&now); // converts to time struct for UTC
    //dt = asctime(gmtm);

    string outPath;

public:
    FileCreator();

    void createOutputFile(string input, string fileName);
    ~FileCreator();
};

#endif //REGEXMASTER_FILECREATOR_H
