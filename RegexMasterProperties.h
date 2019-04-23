//
// Created by EB79OJ on 2019-04-23.
//

#ifndef REGEXMASTER_REGEXMASTERPROPERTIES_H
#define REGEXMASTER_REGEXMASTERPROPERTIES_H

#include <string>
#include <iostream>

using namespace std;

class RegexMasterProperties {
    static string version;
    static string threadNumber;
    static string instanceNumber;
    static string scalability;
    static string defaultDate;
    static string timeZone;
    static string charset;
    static string incomeDataPath;
    static string outcomeDataPath;
    static string logFilePath;

    static string incomeFilesFormula;
    static string lastFileFormula;
    static string outcomeFilesFormula;
    static string cardFormula;
    static string fileMask1;
    static string fileMask2;
    static string fileMask3;
    static string fileMask4;
    static string fileMask5;

public:

    RegexMasterProperties();

    static const string &getVersion();

    static void setVersion(const string &version);

    static const string &getThreadNumber();

    static void setThreadNumber(const string &threadNumber);

    static const string &getInstanceNumber();

    static void setInstanceNumber(const string &instanceNumber);

    static const string &getScalability();

    static void setScalability(const string &scalability);

    static const string &getDefaultDate();

    static void setDefaultDate(const string &defaultDate);

    static const string &getTimeZone();

    static void setTimeZone(const string &timeZone);

    static const string &getCharset();

    static void setCharset(const string &charset);

    static const string &getIncomeDataPath();

    static void setIncomeDataPath(const string &incomeDataPath);

    static const string &getOutcomeDataPath();

    static void setOutcomeDataPath(const string &outcomeDataPath);

    static const string &getLogFilePath();

    static void setLogFilePath(const string &logFilePath);

    static const string &getIncomeFilesFormula();

    static void setIncomeFilesFormula(const string &incomeFilesFormula);

    static const string &getLastFileFormula();

    static void setLastFileFormula(const string &lastFileFormula);

    static const string &getOutcomeFilesFormula();

    static void setOutcomeFilesFormula(const string &outcomeFilesFormula);

    static const string &getCardFormula();

    static void setCardFormula(const string &cardFormula);

    static const string &getFileMask1();

    static void setFileMask1(const string &fileMask1);

    static const string &getFileMask2();

    static void setFileMask2(const string &fileMask2);

    static const string &getFileMask3();

    static void setFileMask3(const string &fileMask3);

    static const string &getFileMask4();

    static void setFileMask4(const string &fileMask4);

    static const string &getFileMask5();

    static void setFileMask5(const string &fileMask5);

    ~RegexMasterProperties();
};
#endif //REGEXMASTER_REGEXMASTERPROPERTIES_H
