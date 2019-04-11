//
// Created by Michal S. on 2019-04-11.
//

#include <string>
#include <ctime>
#include "TimeMachine.h"

TimeMachine::TimeMachine() {

    time(&now);
    timeInfo = localtime(&now);
    asctime(timeInfo);
}

struct tm* TimeMachine::returnDayOfWeek(int periodBackwards) {
    switch (periodBackwards){
        case 1:
            dayOfWeek = timeInfo - (24 * 60 * 60);
            break;
        case 2:
            dayOfWeek = timeInfo - (48 * 60 * 60);
            break;
        case 3:
            dayOfWeek = timeInfo - (72 * 60 * 60);
            break;
        case 4:
            dayOfWeek = timeInfo - (96 * 60 * 60);
            break;
        case 5:
            dayOfWeek = timeInfo - (120 * 60 * 60);
            break;
        case 6:
            dayOfWeek = timeInfo - (144 * 60 * 60);
    }
    return dayOfWeek;
}

struct tm* TimeMachine::returnWeek(int periodBackwards) {
    switch (periodBackwards){
        case 1:
            week = timeInfo - (168 * 60 * 60);
            break;
        case 2:
            week = timeInfo - (336 * 60 * 60);
            break;
        case 3:
            week = timeInfo - (504 * 60 * 60);
            break;
        case 4:
            week = timeInfo - (672 * 60 * 60);
    }
    return week;
}

struct tm* TimeMachine::returnMonth(int periodBackwards) {
    switch (periodBackwards){
        case 1:
            month = timeInfo - (720 * 60 * 60);
            break;
        case 2:
            month = timeInfo - (1440 * 60 * 60);
            break;
        case 3:
            month = timeInfo - (2160 * 60 * 60);
            break;
    }
    return month;
}

struct tm* TimeMachine::returnYear(int periodBackwards) {
    switch (periodBackwards){
        case 1:
            year = timeInfo - (8640 * 60 * 60);
            break;
        case 2:
            year = timeInfo - (17280 * 60 * 60);
            break;
        case 3:
            year = timeInfo - (25920 * 60 * 60);
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