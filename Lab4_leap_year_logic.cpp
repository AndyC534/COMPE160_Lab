#include <iostream>

int main(){
    int leap_Years = 1990;

    if (leap_Years % 4 == 0 && leap_Years % 100 != 0 || leap_Years % 400 == 0) {
        printf("%d is a leap year\n", leap_Years);
    } else {
        printf("%d is not a leap year\n", leap_Years);
    }
    
}