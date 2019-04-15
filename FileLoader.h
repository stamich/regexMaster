//
// Created by Michal S. on 2019-04-11.
//

#include <exception>
#include <string>

#ifndef REGEXMASTER_FILELOADER_H
#define REGEXMASTER_FILELOADER_H

using namespace std;

typedef double number;

class StackTrace : exception{
    const char* what() const noexcept {
        return "The exception was thrown!\n";
    }
};

class FileLoader{
    string line;
    string newFile;

    string name1;
    string name2;
    string name3;

    string regexCard;
    string charset;

public:
    FileLoader();

    string handleInputFile(string absolutePath);
    string getTheNewestFile(string absolutePath);
    string getTheNewestFileByExtension(string path, string extension);
    string getTheNewestFileByName(string path, string name);
    ~FileLoader();
};

#endif //REGEXMASTER_FILELOADER_H