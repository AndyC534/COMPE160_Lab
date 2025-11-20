/* 
Name: Andy Chen
Course: COMPE 160
Week: 12 Question: [1]
Brief: Implement a structure to hold global date and time information.
*/

#include <iostream>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

struct Time {
    int hour;
    int minute; 
    int second;
};

struct GlobalDateTime {
    Date Date;
    Time Time;
    double timezoneOffset; 
};

int main() {
    GlobalDateTime gdt;
    gdt.Date.year = 2025;
    gdt.Date.month = 03;
    gdt.Date.day = 14;
    gdt.Time.hour = 9;
    gdt.Time.minute = 26;
    gdt.Time.second = 53;
    double tz = 5.5;
    if (tz < -12.0 || tz > 12.0) {
        cout << "Invalid timezone offset. Must be between -12.0 and +12.0\n";
        return 1;
    }
    gdt.timezoneOffset = tz;

    printf("%04d-%02d-%02d %02d:%02d:%02d UTC%+.1f\n",
           gdt.Date.year, gdt.Date.month, gdt.Date.day,
           gdt.Time.hour, gdt.Time.minute, gdt.Time.second,
           gdt.timezoneOffset);

    return 0;
}
