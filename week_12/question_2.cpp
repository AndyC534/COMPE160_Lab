/* 
Name: Andy Chen
Course: COMPE 160
Week: 12 Question: [2]
Brief: Implement a singly linked list and print its elements.
*/

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};


int main() {

    Node n0, n1, n2, n3, n4, n5, n6;

    n0.data = 0;
    n1.data = 1;
    n2.data = 2;
    n3.data = 3;
    n4.data = 4;
    n5.data = 5;
    n6.data = 6;

    n0.next = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = nullptr;

    Node* current = &n0;
    while(current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}