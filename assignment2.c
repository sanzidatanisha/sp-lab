#include <stdio.h>

int main() {
    int month, year, days;
    printf("Enter the month number and year : ");
    scanf("%d %d", &month, &year);

    int daysInMonth[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

   days=daysInMonth[month-1];

    printf("%s %d has %d days\n",
           (month == 1) ? "January" :
           (month == 2) ? "February" :
           (month == 3) ? "March" :
           (month == 4) ? "April" :
           (month == 5) ? "May" :
           (month == 6) ? "June" :
           (month == 7) ? "July" :
           (month == 8 )  ? "August" :
           (month == 9) ? "September" :
           (month == 10) ? "October" :
           (month == 11) ? "November" : "December", year, days);

    return 0;
}
