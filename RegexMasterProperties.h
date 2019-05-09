//
// Created by EB79OJ on 2019-04-23.
//

#ifndef REGEXMASTER_REGEXMASTERPROPERTIES_H
#define REGEXMASTER_REGEXMASTERPROPERTIES_H

#include <string>
#include <iostream>


class RegexMasterProperties {
    std::string version_;
    std::string threadNumber_;
    std::string instanceNumber_;
    std::string scalability_;
    std::string defaultDate_;
    std::string timeZone_;
    std::string charset_;
    std::string incomeDataPath_;
    std::string outcomeDataPath_;
    std::string logFilePath_;

    std::string incomeFilesFormula;
    std::string lastFileFormula;
    std::string outcomeFilesFormula;
    std::string cardFormula;
    std::string fileMask1;
    std::string fileMask2;
    std::string fileMask3;
    std::string fileMask4;
    std::string fileMask5;

public:

    RegexMasterProperties();

    const std::string &getVersion() const;

    void setVersion(const std::string &version);

    const std::string &getThreadNumber() const;

    void setThreadNumber(const std::string &threadNumber);

    const std::string &getInstanceNumber() const;

    void setInstanceNumber(const std::string &instanceNumber);

    const std::string &getScalability() const;

    void setScalability(const std::string &scalability);

    const std::string &getDefaultDate() const;

    void setDefaultDate(const std::string &defaultDate);

    const std::string &getTimeZone() const;

    void setTimeZone(const std::string &timeZone);

    const std::string &getCharset() const;

    void setCharset(const std::string &charset);

    const std::string &getIncomeDataPath() const;

    void setIncomeDataPath(const std::string &incomeDataPath);

    const std::string &getOutcomeDataPath() const;

    void setOutcomeDataPath(const std::string &outcomeDataPath);

    const std::string &getLogFilePath() const;

    void setLogFilePath(const std::string &logFilePath);

    const std::string &getIncomeFilesFormula() const;

    void setIncomeFilesFormula(const std::string &incomeFilesFormula);

    const std::string &getLastFileFormula() const;

    void setLastFileFormula(const std::string &lastFileFormula);

    const std::string &getOutcomeFilesFormula() const;

    void setOutcomeFilesFormula(const std::string &outcomeFilesFormula);

    const std::string &getCardFormula() const;

    void setCardFormula(const std::string &cardFormula);

    const std::string &getFileMask1() const;

    void setFileMask1(const std::string &fileMask1);

    const std::string &getFileMask2() const;

    void setFileMask2(const std::string &fileMask2);

    const std::string &getFileMask3() const;

    void setFileMask3(const std::string &fileMask3);

    const std::string &getFileMask4() const;

    void setFileMask4(const std::string &fileMask4);

    const std::string &getFileMask5() const;

    void setFileMask5(const std::string &fileMask5);

    ~RegexMasterProperties();
};
#endif //REGEXMASTER_REGEXMASTERPROPERTIES_H
