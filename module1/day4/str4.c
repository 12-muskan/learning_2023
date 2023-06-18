//Program to count number of days
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0) {
            return 1;
        }
    }
    return 0;
}

int countDays(const char* startDate, const char* endDate) {
    char* token;
    char* rest;
    int startDay, startMonth, startYear;
    int endDay, endMonth, endYear;

    // Split the start date string
    rest = strdup(startDate);
    token = strtok(rest, "/");
    startDay = atoi(token);

    token = strtok(NULL, "/");
    startMonth = atoi(token);

    token = strtok(NULL, "/");
    startYear = atoi(token);

    free(rest);

    // Split the end date string
    rest = strdup(endDate);
    token = strtok(rest, "/");
    endDay = atoi(token);

    token = strtok(NULL, "/");
    endMonth = atoi(token);

    token = strtok(NULL, "/");
    endYear = atoi(token);

    free(rest);

    // Calculate the total days
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int totalDays = 0;
    int i;

    for (i = startYear; i < endYear; i++) {
        totalDays += 365 + isLeapYear(i);
    }

    for (i = 1; i < startMonth; i++) {
        totalDays -= daysInMonth[i];
        if (i == 2 && isLeapYear(startYear))
            totalDays--;
    }

    totalDays -= startDay - 1;

    for (i = 1; i < endMonth; i++) {
        totalDays += daysInMonth[i];
        if (i == 2 && isLeapYear(endYear))
            totalDays++;
    }

    totalDays += endDay;

    return totalDays;
}

int main() {
    const char* startDate = "10/04/2020";
    const char* endDate = "18/06/2023";

    int daysElapsed = countDays(startDate, endDate);

    printf("Start Date: %s\n", startDate);
    printf("End Date: %s\n", endDate);
    printf("Number of Days Elapsed: %d\n", daysElapsed);

    return 0;
}
