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

    string incomeFilesFormula;
    string lastFileFormula;
    string outcomeFilesFormula;
    string cardFormula;
    string fileMask1;
    string fileMask2;
    string fileMask3;
    string fileMask4;
    string fileMask5;

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

    const string &getIncomeFilesFormula() const;

    void setIncomeFilesFormula(const string &incomeFilesFormula);

    const string &getLastFileFormula() const;

    void setLastFileFormula(const string &lastFileFormula);

    const string &getOutcomeFilesFormula() const;

    void setOutcomeFilesFormula(const string &outcomeFilesFormula);

    const string &getCardFormula() const;

    void setCardFormula(const string &cardFormula);

    const string &getFileMask1() const;

    void setFileMask1(const string &fileMask1);

    const string &getFileMask2() const;

    void setFileMask2(const string &fileMask2);

    const string &getFileMask3() const;

    void setFileMask3(const string &fileMask3);

    const string &getFileMask4() const;

    void setFileMask4(const string &fileMask4);

    const string &getFileMask5() const;

    void setFileMask5(const string &fileMask5);

    ~RegexMasterProperties();
};
#endif //REGEXMASTER_REGEXMASTERPROPERTIES_H
