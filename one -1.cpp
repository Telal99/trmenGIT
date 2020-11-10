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
    int roll;
    float marks;
} s[5];
int main()
{
	cout << "Enter information: " << endl;
	// using for grade  it so clear
    for(int i = 0; i < 5; ++i)
    {
		cout << "\nEnter name: ";
		cin >> s[i].name;
		cout << "Enter section: ";
		cin >> s[i].dep;
		cout << "Enter University ID number: ";
		cin >> s[i].roll;
		cout << "Enter marks: ";
		cin >> s[i].marks;
	}
		cout << "\nDisplaying Information: " << endl;
		for(int i = 0; i < 5; ++i)
		{
			cout << "\nName: " << s[i].name << endl;
			if (strcmp(s[i].dep, "A") == 0) {
			cout << "Section: Control Engineering";
			}
			if (strcmp(s[i].dep, "T") == 0) {
			cout << "Section: Telecomunication Engineering";
			}
			if (strcmp(s[i].dep, "C") == 0) {
			cout << "Section: Computer Engineering";
			}
			cout << "\nUniversity ID Number: " << s[i].roll << endl;
			// using if condition to bind entered marks with the grade
			if (s[i].marks >= 90 && s[i].marks <= 100) {
			cout << "Your Grade is A";
			}
			// using && to check a number between two ranges
			if (s[i].marks >= 80 && s[i].marks <= 89) {
			cout << "Your Grade is B";
			}
			if (s[i].marks >= 70 && s[i].marks <= 79) {
			cout << "Your Grade is C";
			}
			if (s[i].marks >= 60 && s[i].marks <= 69) {
			cout << "Your Grade is D";
			}
			if (s[i].marks >= 50 && s[i].marks <= 59) {
			cout << "Your Grade is F";
			}
		}
    return 0;
}
