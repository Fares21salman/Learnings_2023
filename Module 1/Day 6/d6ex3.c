//3
#include <stdio.h>

// Structure to represent a time period
typedef struct {
    int hours;
    int minutes;
    int seconds;
} TimePeriod;

// Function to calculate the difference between two time periods
TimePeriod calculateTimeDifference(TimePeriod startTime, TimePeriod endTime) {
    TimePeriod difference;

    // Convert start time and end time to seconds
    int startTimeInSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endTimeInSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;

    // Calculate the difference in seconds
    int differenceInSeconds = endTimeInSeconds - startTimeInSeconds;

    // Convert difference back to hours, minutes, and seconds
    difference.hours = differenceInSeconds / 3600;
    differenceInSeconds %= 3600;
    difference.minutes = differenceInSeconds / 60;
    difference.seconds = differenceInSeconds % 60;

    return difference;
}

int main() {
    TimePeriod startTime, endTime;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &(startTime.hours), &(startTime.minutes), &(startTime.seconds));

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &(endTime.hours), &(endTime.minutes), &(endTime.seconds));

    TimePeriod difference = calculateTimeDifference(startTime, endTime);

    printf("Time difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}