/*
My name : Telal Almubarak Abdualgbar ALhussian
Class : second
Department:computer */
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int id, sec, grade;
	string name, name2, speciality, con;
	int i=1;
	do {
		i=i+1;
		cout<<"  Enter Your First Name: ";
		cin>>name;
		cout<<"  Enter Your Second Name: ";
		cin>>name2;
		cout<<"  Enter Your Department: ";
		cin>>speciality;
		cout<<"  Enter Your University ID: ";
		cin>>id;
		cout<<"  Enter Your Class: ";
		cin>>sec;
		cout << "  Enter Your Grade: ";
		cin >> grade;

		cout<<"\n  Your Name: "<<name<<" "<<name2<<"\n";
		cout<<"  Your University ID: "<<id;
		cout<<"\n  Your Grade: ";
		if ((grade>=90)&&(grade<=100)) {
			cout<<"A";
		}
		else if ((grade>=80)&&(grade<=89)) {
			cout<<"B";
		}
		else if ((grade>=70)&&(grade<=79)) {
			cout<<"C";
		}

		else if ((grade>=60)&&(grade<=69)) {
			cout<<"D";
		}
		else if ((grade>=0)&&(grade<60)) {
			cout<<"F";
		}
		else {
			cout<<"Wrong Values";
		}
		cout<<"\n  Your Department: ";
		switch (sec)
		{
		case 1:{
			cout<<"First Year";
			break;
		}
		case 2:{
			cout<<"Second Year";
			break;
		}
		case 3:{
			cout<<"Third Year";
			break;
		}
		case 4:{
			cout<<"Fourth Year";
			break;
		}
		case 5:{
			cout<<"Fifth Year";
			break;
		}
		default :{cout<<"Unknown Year";break;}
		}
	 	if (speciality=="T") {
			cout<<" Communication ";
		}
	 	else if (speciality=="A") {
			cout<<" Control ";
		}
	 	else if (speciality=="C") {
			cout<<" Computer ";
		}
		else {
			cout<<"\n  Section: " << speciality << endl;
		}
	 	break;
 		}
	while (i>=1);
	return 0;
}
