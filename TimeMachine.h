//
// Created by Michal S. on 2019-04-11.
//

#ifndef REGEXMASTER_TIMEMACHINE_H
#define REGEXMASTER_TIMEMACHINE_H

#include <string>
#include <ctime>

using namespace std;

class TimeMachine {

    time_t now = time(NULL);
    struct tm* timeInfo;
    char* dayOfWeek;
    char* week;
    char* month;
    char* year;

public:
    TimeMachine();

    char* returnDayOfWeek(int periodBackwards);
    char* returnWeek(int periodBackwards);
    char* returnMonth(int periodBackwards);
    char* returnYear(int periodBackwards);

    ~TimeMachine();
};
#endif //REGEXMASTER_TIMEMACHINE_H