//
// Created by Michal S. on 2019-04-11.
//

#include <exception>
#include <string>
#include <ctime>
#include <iostream>
#include <fstream>
#include "FileCreator.h"
#include "RegexMasterPropertiesHandler.h"

using namespace std;

FileCreator::FileCreator() {

}

void FileCreator::createOutputFile(string input, string fileName) {

    long fileLength = input.length();

    RegexMasterPropertiesHandler properties;

    string version = properties.getProperties("VERSION");
    //cout << "Version" << version << endl;

    ofstream outputFile;
    try {
        outputFile.open(fileName);

        while (fileLength>=0){

            outputFile << fileLength << " " << input << " " << "\r\n";
            if (fileLength == 0)
                outputFile << "THE-END-OF-FILE";
            fileLength--;
        }
    }catch (exception& e){
        cout << e.what() << endl;
    }
    outputFile.close();
}

FileCreator::~FileCreator() {

}