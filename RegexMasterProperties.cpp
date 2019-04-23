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

RegexMasterProperties::~RegexMasterProperties(){

}