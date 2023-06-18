//Compute total seconds
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long computeTotalSeconds(const char* timeString) {
    char* token;
    char* rest;
    unsigned long hours, minutes, seconds;

    // Split the time string using strtok
    rest = strdup(timeString);
    token = strtok(rest, ":");
    hours = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    minutes = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    seconds = strtoul(token, NULL, 10);

    free(rest);

    // Compute the total seconds
    unsigned long totalSeconds = hours * 3600 + minutes * 60 + seconds;
    return totalSeconds;
}

int main() {
    const char* timeString = "10:12:50";
    unsigned long totalSeconds = computeTotalSeconds(timeString);

    printf("Time String: %s\n", timeString);
    printf("Total Seconds: %lu\n", totalSeconds);

    return 0;
}
