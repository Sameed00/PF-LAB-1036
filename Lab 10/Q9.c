#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int isValidDate(Date date) {
    if (date.year < 1 || date.month < 1 || date.month > 12 || date.day < 1)
        return 0;

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (isLeapYear(date.year) && date.month == 2)
        return date.day <= 29;

    return date.day <= daysInMonth[date.month - 1];
}

int daysBetweenDates(Date d1, Date d2) {
    int countDays(Date date) {
        int days = date.year * 365 + date.day;
        for (int i = 1; i < date.year; i++) 
            days += isLeapYear(i);
        
        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        for (int i = 0; i < date.month - 1; i++) 
            days += daysInMonth[i];

        if (isLeapYear(date.year) && date.month > 2) 
            days++;

        return days;
    }

    return countDays(d2) - countDays(d1);
}

int dayOfWeek(Date date) {
    if (date.month < 3) {
        date.month += 12;
        date.year--;
    }
    int k = date.year % 100;
    int j = date.year / 100;
    int day = (date.day + (13 * (date.month + 1)) / 5 + k + k / 4 + j / 4 - 2 * j) % 7;
    return (day + 7) % 7;
}

int main() {
    Date d1 = {9, 2, 2005};
    Date d2 = {11, 9, 2024};
    Date testDate = {29, 2, 2012};

    printf("Valid date (29/2/2024): %s\n", isValidDate(testDate) ? "Yes" : "No");
    printf("Days between 9/2/2005 and 11/9/2024: %d\n", daysBetweenDates(d1, d2));

    const char* days[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    printf("Day of the week for 29/2/2012: %s\n", days[dayOfWeek(testDate)]);

    return 0;
}
