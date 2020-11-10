/*
My name : Telal Almubarak Abdualgbar ALhussian
Class : second
Department:computer */
#include <iostream>
#include <cstring>
using namespace std;
struct student
{
    char name[20];
    char dep[20];
    int id;
    float grade;
};
int main()
{
    student s;
    cout << "Insert Information:\n" << endl;
    cout << "\nEnter Your Name: ";
    cin >> s.name;
    cout << "Your Section: ";
    cin >> s.dep;
    cout << "ID: ";
    cin >> s.id;
    cout << "Grade: ";
    cin >> s.grade;
    cout << "\n" << endl;
    cout << "Name: " << s.name << endl;
	if (strcmp(s.dep, "A") == 0) {
		cout << "Section: Control Engineering";
	}
	if (strcmp(s.dep, "T") == 0) {
		cout << "Section: Telecomunication Engineering";
	}
	if (strcmp(s.dep, "C") == 0) {
		cout << "Section: Computer Engineering";
	}
    cout << "\nID " << s.id << endl;
    if (s.grede < 100)
    cout << "Student grade: A";
    if (s.grade < 90)
    cout << "Student grade: B";
    if (s.grade < 80)
    cout << "Student grade: C";
    if (s.grade < 70)
    cout << "Student grade: D";
    if (s.grede < 60)
    cout << "Student grade: F";
    return 0;
}
