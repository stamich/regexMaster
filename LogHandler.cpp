//
// Created by Michal S. on 2019-04-11.
//

#include <string>
#include <ctime>
#include <list>
#include <fstream>
#include <iostream>
#include "LogHandler.h"

using namespace std;

LogHandler::LogHandler() {
}

list<string> LogHandler::loadLogFile(string absolutePath) {

    charset = "UTF-8";

    list<string> result;
    string path = absolutePath;
    long lineCounter;
    const long totalLineCount = lineCounter -1;

    try {
        while (totalLineCount > 0){
            lineCounter--;

            if (lineCounter == 0){
                newFile = "Liczba rekordow;" + totalLineCount;
                break;
            }
            result.push_back(line);
        }
    } catch (const exception e){
        makeWarningMessage(absolutePath);
    }
    return result;
}

void LogHandler::makeLogHeader() {
    time_t now;
    time(&now);
    struct tm* timeInfo = localtime(&now);
    ofstream file;
    file.open(logFilePath);

    if (file.is_open()){
        file << "*** BEGINNING-OF-LOG FROM " << asctime(timeInfo) << endl;
        file.close();
    } else cout << "Unable to open file.";
}

void LogHandler::makeLogFooter() {
    time_t now;
    time(&now);
    struct tm* timeInfo = localtime(&now);
    ofstream file;
    file.open(logFilePath);

    if (file.is_open()){
        file << "*** END-OF-LOG FROM " << asctime(timeInfo) << endl;
        file.close();
    } else cout << "Unable to open file.";
}

void LogHandler::searchLastFiles(string fileName) {

    ofstream file;
    file.open(logFilePath);

    if (file.is_open()){
        file << "Last file: " << fileName << endl;
        file.close();
    } else cout << "Unable to open file.";
}

void LogHandler::makeInfoMessage(string fileName) {

    ofstream file;
    file.open(logFilePath);

    if (file.is_open()){
        file << "File: " << fileName << " [INFO]: Proceeded successfully!" << endl;
        file.close();
    } else cout << "Unable to open file.";
}

void LogHandler::makeWarningMessage(string fileName) {

    ofstream file;
    file.open(logFilePath);

    if (file.is_open()){
        file << "File: " << fileName << "[WARN]: File was previously proceeded! Now it's not necessary." << endl;
        file.close();
    } else cout << "Unable to open file.";
}

void LogHandler::makeEmptyMessage(string fileName) {

    ofstream file;
    file.open(logFilePath);

    if (file.is_open()){
        file << "File: " << fileName << "[EMP!]: Error - any log file was found!" << endl;
        file << "Making the first empty log message." << endl;
        file.close();
    } else cout << "Unable to open file.";
}

void LogHandler::makeErrorMessage(string fileName) {

    ofstream file;
    file.open(logFilePath);

    if (file.is_open()){
        file << "File: " << fileName << "[ERR!]: Error - file was not proceeded because of error!" << endl;
        file.close();
    } else cout << "Unable to open file.";
}

LogHandler::~LogHandler() {
}