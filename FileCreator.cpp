//
// Created by Michal S. on 2019-04-11.
//

#include <string>
#include <ctime>
#include <iostream>
#include <fstream>
#include "FileCreator.h"

using namespace std;

FileCreator::FileCreator() {

}

void FileCreator::createOutputFile(string input, string fileName) {

    long fileLength = input.length();

    ofstream outputFile;
    outputFile.open(fileName);
    while (fileLength>0){
        outputFile << input << endl;
        outputFile << "END-OF-FILE";
        fileLength--;
    }

    outputFile.close();
}

FileCreator::~FileCreator() {

}