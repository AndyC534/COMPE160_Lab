#include <iostream>
using namespace std;

int main() {
    const char arr[] = "The cat chased another cat because the cat was playful.";
    const char search[] = "cat";

    int pos = -1;

    for (int i = 0; arr[i] != '\0'; ++i) {
        int j = 0;
        while (arr[i + j] != '\0' && search[j] != '\0' &&
               arr[i + j] == search[j]) {
            ++j;
        }
        if (search[j] == '\0') {
            pos = i;
            break;
        }
        if (arr[i + j] == '\0') break;
    }

    if (pos != -1) cout << pos << endl;
    else cout << "Not found" << endl;

    return 0;
}
