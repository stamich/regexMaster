//
// Created by Michal S. on 2019-04-11.
//

#include <string>

#ifndef REGEXMASTER_FILELOADER_H
#define REGEXMASTER_FILELOADER_H

using namespace std;

typedef double number;

class FileLoader{
    string line;
    string newFile;
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