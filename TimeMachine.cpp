//
// Created by Michal S. on 2019-04-11.
//

#include <string>
#include <ctime>
#include "TimeMachine.h"

TimeMachine::TimeMachine() {
}

char* TimeMachine::returnDayOfWeek(int periodBackwards) {

    time(&now);
    struct tm* timeInfo;

    switch (periodBackwards){
        case 1:
            now = now - (24 * 60 * 60);
            timeInfo = localtime(&now);
            dayOfWeek = asctime(timeInfo);
            break;
        case 2:
            now = now - (48 * 60 * 60);
            timeInfo = localtime(&now);
            dayOfWeek = asctime(timeInfo);
            break;
        case 3:
            now = now - (72 * 60 * 60);
            timeInfo = localtime(&now);
            dayOfWeek = asctime(timeInfo);
            break;
        case 4:
            now = now - (96 * 60 * 60);
            timeInfo = localtime(&now);
            dayOfWeek = asctime(timeInfo);
            break;
        case 5:
            now = now - (120 * 60 * 60);
            timeInfo = localtime(&now);
            dayOfWeek = asctime(timeInfo);
            break;
        case 6:
            now = now - (144 * 60 * 60);
            timeInfo = localtime(&now);
            dayOfWeek = asctime(timeInfo);
            break;
    }
    return dayOfWeek;
}

char* TimeMachine::returnWeek(int periodBackwards) {

    time(&now);
    struct tm* timeInfo;

    switch (periodBackwards){
        case 1:
            now = now - (168 * 60 * 60);
            timeInfo = localtime(&now);
            week = asctime(timeInfo);
            break;
        case 2:
            now = now - (336 * 60 * 60);
            timeInfo = localtime(&now);
            week = asctime(timeInfo);
            break;
        case 3:
            now = now - (504 * 60 * 60);
            timeInfo = localtime(&now);
            week = asctime(timeInfo);
            break;
        case 4:
            now = now - (672 * 60 * 60);
            timeInfo = localtime(&now);
            week = asctime(timeInfo);
    }
    return week;
}

char* TimeMachine::returnMonth(int periodBackwards) {
    time(&now);
    struct tm* timeInfo;

    switch (periodBackwards){
        case 1:
            now = now - (744 * 60 * 60);
            timeInfo = localtime(&now);
            month = asctime(timeInfo);
            break;
        case 2:
            now = now - (1440 * 60 * 60);
            timeInfo = localtime(&now);
            month = asctime(timeInfo);
            break;
        case 3:
            now = now - (2160 * 60 * 60);
            timeInfo = localtime(&now);
            month = asctime(timeInfo);
            break;
        case 4:
            now = now - (2880 * 60 * 60);
            timeInfo = localtime(&now);
            month = asctime(timeInfo);
            break;
        case 5:
            now = now - (3600 * 60 * 60);
            timeInfo = localtime(&now);
            month = asctime(timeInfo);
            break;
        case 6:
            now = now - (4320 * 60 * 60);
            timeInfo = localtime(&now);
            month = asctime(timeInfo);
            break;
        case 7:
            now = now - (5040 * 60 * 60);
            timeInfo = localtime(&now);
            month = asctime(timeInfo);
            break;
        case 8:
            now = now - (5760 * 60 * 60);
            timeInfo = localtime(&now);
            month = asctime(timeInfo);
            break;
        case 9:
            now = now - (6480 * 60 * 60);
            timeInfo = localtime(&now);
            month = asctime(timeInfo);
            break;
        case 10:
            now = now - (7200 * 60 * 60);
            timeInfo = localtime(&now);
            month = asctime(timeInfo);
            break;
        case 11:
            now = now - (7920 * 60 * 60);
            timeInfo = localtime(&now);
            month = asctime(timeInfo);
            break;
    }
    return month;
}

char* TimeMachine::returnYear(int periodBackwards) {
    time(&now);
    struct tm* timeInfo;

    switch (periodBackwards){
        case 1:
            now = now  - (8760 * 60 * 60);
            timeInfo = localtime(&now);
            year = asctime(timeInfo);
            break;
        case 2:
            now = now - (17520 * 60 * 60);
            timeInfo = localtime(&now);
            year = asctime(timeInfo);
            break;
        case 3:
            now = now - (26280 * 60 * 60);
            timeInfo = localtime(&now);
            year = asctime(timeInfo);
            break;
    }
    return year;
}

TimeMachine::~TimeMachine() {
    delete(dayOfWeek);
    delete(week);
    delete(month);
    delete(year);
}