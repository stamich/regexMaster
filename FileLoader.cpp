//
// Created by Michal S. on 2019-04-11.
//

#include <exception>
#include <experimental/filesystem>
#include <python3.6m/pyconfig.h>
#include <iostream>
#include <fstream>
#include <regex>
#include "FileLoader.h"
#include "RegexMasterPropertiesHandler.h"

using namespace std;
namespace fs = std::experimental::filesystem;

FileLoader::FileLoader(){
    regexCard = "[|][0-9]{16}[|]";
    charset = "UTF-8";
}

string FileLoader::handleInputFile(string absolutePath) {

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
            //result.push_back(line);
        }
    } catch (exception& e){
        cout << e.what() << endl;
    }
    return newFile;
}

string FileLoader::getTheNewestFile(string absolutePath) {

    string path = "/home/michal/test_files/";
    for (const auto & entry : fs::directory_iterator(absolutePath)) {
        cout << entry.path() << endl;
    }

}

string FileLoader::getTheNewestFileByExtension(string path, string extension) {

}

string FileLoader::getTheNewestFileByName(string path, string name) {

}

FileLoader::~FileLoader() {

}


