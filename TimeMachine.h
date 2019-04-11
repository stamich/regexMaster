//
// Created by Michal S. on 2019-04-11.
//

#ifndef REGEXMASTER_TIMEMACHINE_H
#define REGEXMASTER_TIMEMACHINE_H

#include <string>
#include <ctime>

using namespace std;

class TimeMachine {

    time_t now;
    struct tm* timeInfo;
    struct tm* dayOfWeek;
    struct tm* week;
    struct tm* month;
    struct tm* year;

public:
    TimeMachine();

    struct tm* returnDayOfWeek(int periodBackwards);
    struct tm* returnWeek(int periodBackwards);
    struct tm* returnMonth(int periodBackwards);
    struct tm* returnYear(int periodBackwards);

    ~TimeMachine();
};
#endif //REGEXMASTER_TIMEMACHINE_H