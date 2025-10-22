/* Name: Andy Chen
Course: COMPE 160
Week: 9 Question: [2]
Brief: Write a type-agnostic function that swaps the contents of two variables using pointers and byte-level access.

*/

#include <iostream>
using namespace std;

int procedureExchange(void *p, void *q, int n) {
    unsigned char *hp, *hq, buf;
    hp = (unsigned char*) p;
    hq = (unsigned char*) q;

    for (int j = 0; j < n-1; j++) {
        buf = *(hp + j);
        *(hp + j) = *(hq + j);
        *(hq + j) = buf;
    }
    return 0;
}

int main(){
    double u = 2000.235;
    double z = 3000.357;
    procedureExchange(&u, &z, sizeof(double));
    cout << u << " " << z << endl;
}
