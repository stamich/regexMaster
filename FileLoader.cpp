//
// Created by Michal S. on 2019-04-11.
//

#include <iostream>
#include <fstream>
#include <regex>
#include "FileLoader.h"

using namespace std;

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
    } catch (const exception e){
        cout << "Exception thrown: "  << endl;
    }
    return newFile;
}

string FileLoader::getTheNewestFile(string absolutePath) {

}

string FileLoader::getTheNewestFileByExtension(string path, string extension) {

}

string FileLoader::getTheNewestFileByName(string path, string name) {

}

FileLoader::~FileLoader() {

}


