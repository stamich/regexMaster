//
// Created by Michal S. on 2019-04-11.
//

#include <exception>
#include <string>

#ifndef REGEXMASTER_FILELOADER_H
#define REGEXMASTER_FILELOADER_H

typedef double number;

class StackTrace : std::exception{
    const char* what() const noexcept {
        return "The exception was thrown!\n";
    }
};

class FileLoader{
    std::string line;
    std::string newFile;

    std::string name1;
    std::string name2;
    std::string name3;

    std::string regexCard;
    std::string charset;

public:
    FileLoader();

    std::string handleInputFile(std::string absolutePath);
    std::string getTheNewestFile(std::string absolutePath);
    std::string getTheNewestFileByExtension(std::string path, std::string extension);
    std::string getTheNewestFileByName(std::string path, std::string name);
    ~FileLoader();
};

#endif //REGEXMASTER_FILELOADER_H