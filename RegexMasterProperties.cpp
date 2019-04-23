//
// Created by EB79OJ on 2019-04-23.
//

#include "RegexMasterProperties.h"
#include <string>
#include <iostream>

using namespace std;

RegexMasterProperties::RegexMasterProperties() {
}

const string &RegexMasterProperties::getVersion() const {
    return version_;
}

void RegexMasterProperties::setVersion(const string &version) {
    version_ = version;
}

const string &RegexMasterProperties::getThreadNumber() const {
    return threadNumber_;
}

void RegexMasterProperties::setThreadNumber(const string &threadNumber) {
    threadNumber_ = threadNumber;
}

const string &RegexMasterProperties::getInstanceNumber() const {
    return instanceNumber_;
}

void RegexMasterProperties::setInstanceNumber(const string &instanceNumber) {
    instanceNumber_ = instanceNumber;
}

const string &RegexMasterProperties::getScalability() const {
    return scalability_;
}

void RegexMasterProperties::setScalability(const string &scalability) {
    scalability_ = scalability;
}

const string &RegexMasterProperties::getDefaultDate() const {
    return defaultDate_;
}

void RegexMasterProperties::setDefaultDate(const string &defaultDate) {
    defaultDate_ = defaultDate;
}

const string &RegexMasterProperties::getTimeZone() const {
    return timeZone_;
}

void RegexMasterProperties::setTimeZone(const string &timeZone) {
    timeZone_ = timeZone;
}

const string &RegexMasterProperties::getCharset() const {
    return charset_;
}

void RegexMasterProperties::setCharset(const string &charset) {
    charset_ = charset;
}

const string &RegexMasterProperties::getIncomeDataPath() const {
    return incomeDataPath_;
}

void RegexMasterProperties::setIncomeDataPath(const string &incomeDataPath) {
    incomeDataPath_ = incomeDataPath;
}

const string &RegexMasterProperties::getOutcomeDataPath() const {
    return outcomeDataPath_;
}

void RegexMasterProperties::setOutcomeDataPath(const string &outcomeDataPath) {
    outcomeDataPath_ = outcomeDataPath;
}

const string &RegexMasterProperties::getLogFilePath() const {
    return logFilePath_;
}

void RegexMasterProperties::setLogFilePath(const string &logFilePath) {
    logFilePath_ = logFilePath;
}

const string &RegexMasterProperties::getIncomeFilesFormula() const {
    return incomeFilesFormula;
}

void RegexMasterProperties::setIncomeFilesFormula(const string &incomeFilesFormula) {
    RegexMasterProperties::incomeFilesFormula = incomeFilesFormula;
}

const string &RegexMasterProperties::getLastFileFormula() const {
    return lastFileFormula;
}

void RegexMasterProperties::setLastFileFormula(const string &lastFileFormula) {
    RegexMasterProperties::lastFileFormula = lastFileFormula;
}

const string &RegexMasterProperties::getOutcomeFilesFormula() const {
    return outcomeFilesFormula;
}

void RegexMasterProperties::setOutcomeFilesFormula(const string &outcomeFilesFormula) {
    RegexMasterProperties::outcomeFilesFormula = outcomeFilesFormula;
}

const string &RegexMasterProperties::getCardFormula() const {
    return cardFormula;
}

void RegexMasterProperties::setCardFormula(const string &cardFormula) {
    RegexMasterProperties::cardFormula = cardFormula;
}

const string &RegexMasterProperties::getFileMask1() const {
    return fileMask1;
}

void RegexMasterProperties::setFileMask1(const string &fileMask1) {
    RegexMasterProperties::fileMask1 = fileMask1;
}

const string &RegexMasterProperties::getFileMask2() const {
    return fileMask2;
}

void RegexMasterProperties::setFileMask2(const string &fileMask2) {
    RegexMasterProperties::fileMask2 = fileMask2;
}

const string &RegexMasterProperties::getFileMask3() const {
    return fileMask3;
}

void RegexMasterProperties::setFileMask3(const string &fileMask3) {
    RegexMasterProperties::fileMask3 = fileMask3;
}

const string &RegexMasterProperties::getFileMask4() const {
    return fileMask4;
}

void RegexMasterProperties::setFileMask4(const string &fileMask4) {
    RegexMasterProperties::fileMask4 = fileMask4;
}

const string &RegexMasterProperties::getFileMask5() const {
    return fileMask5;
}

void RegexMasterProperties::setFileMask5(const string &fileMask5) {
    RegexMasterProperties::fileMask5 = fileMask5;
}

RegexMasterProperties::~RegexMasterProperties(){

}