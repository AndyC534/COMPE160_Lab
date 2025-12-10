#include <iostream>
using namespace std;

void ReversePath(char path[]) {
    int n;

    // Find length
    for (n = 0; path[n] != '\0'; n++);

    // Reverse entire string
    for (int j = 0; j < n / 2; j++) {
        char temp = path[j];
        path[j] = path[n - j - 1];
        path[n - j - 1] = temp;
    }

    // Now reverse each segment between '/'
    int i = 0;
    while (i < n) {
        if (path[i] == '/') {
            i++;                // skip slash
            continue;
        }

        int start = i;
        // move i to end of this folder name or end of string
        while (i < n && path[i] != '/') {
            i++;
        }
        int end = i - 1;

        // reverse characters from start to end
        while (start < end) {
            char temp = path[start];
            path[start] = path[end];
            path[end] = temp;
            start++;
            end--;
        }
    }
}

int main() {
    char somepath[128] = "/usr/local/bin/env/";
    ReversePath(somepath);
    cout << somepath << endl;   // should print: /env/bin/local/usr/
    return 0;
}
