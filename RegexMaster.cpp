//
// Created by Michal S. on 2019-04-11.
//

#include <iostream>
#include <algorithm>
#include "TimeMachine.h"
#include "FileCreator.h"
#include "RegexMasterProperties.h"

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

    cout << "\r\n" << "SETTINGS:" << "\r\n";
    cout << "Version:      " << properties.getVersion() << endl;
    cout << "Threads:      " << properties.getThreadNumber() << endl;
    cout << "Instnce:      " << properties.getInstanceNumber() << endl;
    cout << "Scalability:  " << properties.getScalability() << endl;
    cout << "Date:         " << properties.getDefaultDate() << endl;
    cout << "Time zone:    " << properties.getTimeZone() << endl;
    cout << "Charset:      " << properties.getCharset() << endl;
    cout << "Income files: " << properties.getIncomeDataPath() << endl;
    cout << "Out files:    " << properties.getOutcomeDataPath() << endl;
    cout << "Log files:    " << properties.getLogFilePath() << endl;

    FileCreator fileCreator;
    fileCreator.createOutputFile("ABCDEFGHIJKLMNOPQRSTUVWXYZ", "pierwszy.txt");
    string a = "Zakopane na pokaz";
    string b;
    //reverse(a.begin(), a.end()); // from <algorithm>
    b.assign(a.rbegin(), a.rend()); // from <string>

    fileCreator.createOutputFile(a, "drugi.txt");
    return 0;
}