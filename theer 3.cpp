// header for definintion of output and input operations
#include <iostream>
#include <string>
#include <cstring>
// making everything under std namespace available without the prefix
using namespace std;
// declare grouped list of variables
struct student

{
	int id;
	int grade;
	int per;
	char name[20];
	char name2[20];
	char speciality[20];
} s[10];

int main()
// define objects that we are going to use for input and output
{
	cout << "Enter information: \n" << endl;
	for(int i = 0; i < 10; ++i)
	{
		if (i < 10)
		{
			do {
				cout << "\n  Enter Your First Name: ";
				cin >> s[i].name;
				cout << "  Enter Your Second Name: ";
				cin >> s[i].name2;
				cout << "  Enter Your Department: ";
				cin >> s[i].speciality;
				cout << "  Enter Your University ID: ";
				cin >> s[i].id;
				cout << "  Enter Your marks out of 800: ";
				cin >> s[i].grade;
				i = i + 1;
				if (i > 10) {
					break;
				}
			} while (i < 10);
			cout << endl;
		}
	}
		cout << "\nDisplaying Information: " << endl;
		for(int i = 0; i < 10; ++i)
		{
			cout << "\n  Name: " << s[i].name << " " << s[i].name2 << endl;
			if (strcmp(s[i].speciality, "T") == 0) {
				cout<<" Communication ";
			}
			else if (strcmp(s[i].speciality, "A") == 0) {
				cout<<" Control ";
			}
			else if (strcmp(s[i].speciality, "C") == 0) {
				cout<<" Computer ";
			}
			else {
				cout<<"  Section: " << s[i].speciality << endl;
			}
			cout << "  University ID Number: " << s[i].id << endl;
			s[i].per = s[i].grade / 8;
			if ((s[i].per >= 90) && (s[i].per <= 100)) {
				cout<<"  Your marks: " << s[i].grade << "\nGrade: A";
			}
			else if ((s[i].per >= 80) && (s[i].per <= 89)) {
				cout<<"  Your marks: " << s[i].grade << "\nGrade: B";
			}
			else if ((s[i].per >= 70) && (s[i].per <= 79)) {
				cout << "- Your marks: " << s[i].grade << "\nGrade: C";
			}
			else if ((s[i].per >= 60) && (s[i].per <= 69)) {
				cout << "  Your marks: " << s[i].grade << "\nGrade: D";
			}
			else if ((s[i].per >= 0) && (s[i].per < 60)) {
				cout << "  Your marks: " << s[i].grade << "\nGrade: F";
			}
			else {
				cout << "  Grades: " << s[i].per << "	 out of range!";
			}
			cout<<"\n  Your Department: \n";
			}
			return 0;
		}
