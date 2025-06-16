#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    string contact;
    string email;
};

int main() {
    const int NUM_STUDENTS = 10;

    Student students[NUM_STUDENTS];
    for (int i = 0; i < NUM_STUDENTS; i++) {
        students[i].name = "Mahmuda Tasfia";
        students[i].id = 24000152;
        students[i].contact = "601161603162";
        students[i].email = "mahmuda_24000152@utp.edu.my";
    }

    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "\n--- Student " << i + 1 << " ---\n";
        cout << "Name    : " << students[i].name << endl;
        cout << "ID      : " << students[i].id << endl;
        cout << "Contact : " << students[i].contact << endl;
        cout << "Email   : " << students[i].email << endl;
    }

    return 0;
}