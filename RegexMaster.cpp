//
// Created by Michal S. on 2019-04-11.
//

#include <iostream>
#include "TimeMachine.h"

using namespace std;

int main() {
    TimeMachine timeMachine;

    cout << "Day of week:" << endl;

    for (int i = 1; i <= 6; ++i) {
        cout << "Regex master-wizard. " << i << " : " << timeMachine.returnDayOfWeek(i) << endl;
    }

    cout << "Week of month:" << endl;

    for (int i = 1; i <=4 ; ++i) {
        cout << "Regex master-wizard. " << i << " : " << timeMachine.returnWeek(i) << endl;
    }

    cout << "Month of year:" << endl;

    for (int i = 1; i <=11 ; ++i) {
        cout << "Regex master-wizard. " << i << " : " << timeMachine.returnMonth(i) << endl;
    }

    cout << "Year: " << endl;
    for (int i = 1; i <= 3 ; ++i) {
        cout << "Regex master-wizard. " << i << " : " << timeMachine.returnYear(i) << endl;
    }

    char yesDt[23];
    time_t now = time(NULL);
    //struct tm* timeInfo;
    time(&now);
    struct tm* timeInfo = localtime(&now);

    now = now - (24*60*60);
    struct tm *t = localtime(&now);
    sprintf(yesDt,"yesterdayDate_dt %02d%02d%02d", t->tm_mon+1, t->tm_mday, t->tm_year - 100);
    cout << "Czas: " << asctime(timeInfo) << endl;
    cout << "Czas -1: " << yesDt << endl;

    return 0;
}