//
// Created by EB79OJ on 2019-04-23.
//

#ifndef REGEXMASTER_REGEXMASTERPROPERTIES_H
#define REGEXMASTER_REGEXMASTERPROPERTIES_H

#include <string>
#include <iostream>

using namespace std;

class RegexMasterProperties {
    string version_;
    string threadNumber_;
    string instanceNumber_;
    string scalability_;
    string defaultDate_;
    string timeZone_;
    string charset_;
    string incomeDataPath_;
    string outcomeDataPath_;
    string logFilePath_;
//
//    static string incomeFilesFormula;
//    static string lastFileFormula;
//    static string outcomeFilesFormula;
//    static string cardFormula;
//    static string fileMask1;
//    static string fileMask2;
//    static string fileMask3;
//    static string fileMask4;
//    static string fileMask5;

public:

    RegexMasterProperties();

    const string &getVersion() const;

    void setVersion(const string &version);

    const string &getThreadNumber() const;

    void setThreadNumber(const string &threadNumber);

    const string &getInstanceNumber() const;

    void setInstanceNumber(const string &instanceNumber);

    const string &getScalability() const;

    void setScalability(const string &scalability);

    const string &getDefaultDate() const;

    void setDefaultDate(const string &defaultDate);

    const string &getTimeZone() const;

    void setTimeZone(const string &timeZone);

    const string &getCharset() const;

    void setCharset(const string &charset);

    const string &getIncomeDataPath() const;

    void setIncomeDataPath(const string &incomeDataPath);

    const string &getOutcomeDataPath() const;

    void setOutcomeDataPath(const string &outcomeDataPath);

    const string &getLogFilePath() const;

    void setLogFilePath(const string &logFilePath);

    ~RegexMasterProperties();
};
#endif //REGEXMASTER_REGEXMASTERPROPERTIES_H
