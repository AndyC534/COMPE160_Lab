/* 
Name: Andy Chen
Course: COMPE 160
Week: 11 Question: [1]
Brief: 
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char arr[] = "The cat chased another cat because the cat was playful.";
    char search[] = "cat";
    char *word;
    char *current = arr;

    while (true) {
        word = strstr(current, search);
        if (!word) break;
        cout << word - arr << endl;
        current = word + 1;
    }
    return 0;
}
