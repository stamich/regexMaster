//
// Created by Michal S. on 2019-04-11.
//

#ifndef REGEXMASTER_LOGHANDLER_H
#define REGEXMASTER_LOGHANDLER_H

#include <string>
#include <ctime>
#include <list>

class LogHandler {

    std::string line;
    std::string charset;
    std::string newFile;
    struct tm* today;
    struct tm* formatter;
    std::string logFilePath;

public:
    LogHandler();
    std::list<std::string> loadLogFile(std::string absolutePath);
    void makeLogHeader();
    void makeLogFooter();
    void searchLastFiles(std::string fileName);
    void makeInfoMessage(std::string fileName);
    void makeWarningMessage(std::string fileName);
    void makeEmptyMessage(std::string fileName);
    void makeErrorMessage(std::string fileName);
    ~LogHandler();
};

#endif //REGEXMASTER_LOGHANDLER_H
