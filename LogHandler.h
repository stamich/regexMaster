//
// Created by Michal S. on 2019-04-11.
//

#ifndef REGEXMASTER_LOGHANDLER_H
#define REGEXMASTER_LOGHANDLER_H

#include <string>
#include <ctime>
#include <list>

using namespace std;

class LogHandler {

    string line;
    string charset;
    string newFile;
    struct tm* today;
    struct tm* formatter;
    string logFilePath;

public:
    LogHandler();
    list<string> loadLogFile(string absolutePath);
    void makeLogHeader();
    void makeLogFooter();
    void searchLastFiles(string fileName);
    void makeInfoMessage(string fileName);
    void makeWarningMessage(string fileName);
    void makeEmptyMessage(string fileName);
    void makeErrorMessage(string fileName);
    ~LogHandler();
};

#endif //REGEXMASTER_LOGHANDLER_H
