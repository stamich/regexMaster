//
// Created by Michal S. on 2019-04-11.
//

#include <iostream>
#include <algorithm>
#include "TimeMachine.h"
#include "FileCreator.h"
#include "RegexMasterProperties.h"
//#include <Python.h>
//#include <boost/python.hpp>

using namespace std;

int main() {
    TimeMachine timeMachine;

//    cout << "Day of week:" << endl;
//
//    for (int i = 1; i <= 6; ++i) {
//        cout << "Regex master-wizard. " << i << " : " << timeMachine.returnDayOfWeek(i) << endl;
//    }
//
//    cout << "Week of month:" << endl;
//
//    for (int i = 1; i <=4 ; ++i) {
//        cout << "Regex master-wizard. " << i << " : " << timeMachine.returnWeek(i) << endl;
//    }
//
//    cout << "Month of year:" << endl;
//
//    for (int i = 1; i <=11 ; ++i) {
//        cout << "Regex master-wizard. " << i << " : " << timeMachine.returnMonth(i) << endl;
//    }
//
//    cout << "Year: " << endl;
//    for (int i = 1; i <= 3 ; ++i) {
//        cout << "Regex master-wizard. " << i << " : " << timeMachine.returnYear(i) << endl;
//    }
//
//    char yesDt[23];
//    time_t now = time(NULL);
//    //struct tm* timeInfo;
//    time(&now);
//    struct tm* timeInfo = localtime(&now);
//
//    now = now - (24*60*60);
//    struct tm *t = localtime(&now);
//    sprintf(yesDt,"yesterdayDate_dt %02d%02d%02d", t->tm_mon+1, t->tm_mday, t->tm_year - 100);
//    cout << "Czas: " << asctime(timeInfo) << endl;
//    cout << "Czas -1: " << yesDt << endl;

    RegexMasterProperties properties;
    properties.setVersion("1.0");
    properties.setThreadNumber("2 threads");
    properties.setInstanceNumber("1");
    properties.setScalability("true");
    properties.setDefaultDate("today");
    properties.setTimeZone("UTC -1");
    properties.setCharset("UTF-8");
    properties.setIncomeDataPath("/home/michal/regex/income/");
    properties.setOutcomeDataPath("/home/michal/regex/outcome/");
    properties.setLogFilePath("/home/michal/regex/log/");
    properties.setIncomeFilesFormula("([A-Z]{5}[_][A-Z]{6}([_]?|[0-9])(([_][A-Z]{3}[_])|[A-Z]{4}[_]|[A-Z]{3}[_]|[_]))");
    properties.setOutcomeFilesFormula("([^\\]]+)$");
    properties.setLastFileFormula("[0-9]{8}");
    properties.setCardFormula("[|][0-9]{16}[|]");
    properties.setFileMask1("TRANS_PLANET4_");
    properties.setFileMask2("TRANS_PLANET4_REC_");
    properties.setFileMask3("TRANS_PLANET_");
    properties.setFileMask4("TRANS_PLANET_REC_");
    properties.setFileMask5("TRANS_PLANET_WING_");

    cout << "\r\n" << "APPLICATION SETTINGS:" << "\r\n";
    cout << "Version:           " << properties.getVersion() << endl;
    cout << "Threads:           " << properties.getThreadNumber() << endl;
    cout << "Instnce:           " << properties.getInstanceNumber() << endl;
    cout << "Scalability:       " << properties.getScalability() << endl;
    cout << "Date:              " << properties.getDefaultDate() << endl;
    cout << "Time zone:         " << properties.getTimeZone() << endl;
    cout << "Charset:           " << properties.getCharset() << endl;
    cout << "Income files:      " << properties.getIncomeDataPath() << endl;
    cout << "Out files:         " << properties.getOutcomeDataPath() << endl;
    cout << "Log files:         " << properties.getLogFilePath() << endl;
    cout << "Source file regex: " << properties.getIncomeFilesFormula() << endl;
    cout << "Result file regex: " << properties.getOutcomeFilesFormula() << endl;
    cout << "Last file regex:   " << properties.getLastFileFormula() << endl;
    cout << "Card find regex:   " << properties.getCardFormula() << endl;
    cout << "File 1 mask:       " << properties.getFileMask1() << endl;
    cout << "File 2 mask:       " << properties.getFileMask2() << endl;
    cout << "File 3 mask:       " << properties.getFileMask3() << endl;
    cout << "File 4 mask:       " << properties.getFileMask4() << endl;
    cout << "File 5 mask:       " << properties.getFileMask5() << endl;

    FileCreator fileCreator;
    fileCreator.createOutputFile("ABCDEFGHIJKLMNOPQRSTUVWXYZ", "pierwszy.txt");
    string a = "Zakopane na pokaz";
    string b;
    //reverse(a.begin(), a.end()); // from <algorithm>
    b.assign(a.rbegin(), a.rend()); // from <string>

    fileCreator.createOutputFile(a, "drugi.txt");
    return 0;
}