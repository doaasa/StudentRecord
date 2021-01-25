#include <iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
using namespace std;

class student
{
private:
	string name;
	int num;
	int physics;
	int chemistry;
	int maths;
	int english;
	int computer_science;
	float percentage;
	string grade;
public:

	static int counter;
public:
	student();
	void set_num();
	void set_name();
	void set_marks();
	void calculate_percentage();
	void calculate_grade();
	void modify();
	void display();
	void getall();
	int return_num();
};
int student::counter = 0;
student::student()
{
	counter++;
}
void  student::set_num()
{
	int n;
	cout << "Enter The roll Number of Student : ";
	cin >> n;
	num = n;
}
void student::set_name()
{
	string n;
	cout << "Enter The Name of Student : ";
	cin >> n;
	name = n;
}
void student::set_marks()
{
	int num;
	cout << "Enter The Mark of Physics out of 100 : ";
	cin >> num;
	physics = num;
	cout << endl;
	cout << "Enter The Mark of Chemistery out of 100 : ";
	cin >> num;
	chemistry = num;
	cout << endl;
	cout << "Enter The Mark of Maths out of 100 : ";
	cin >> num;
	maths = num;
	cout << endl;
	cout << "Enter The Mark of English out of 100 : ";
	cin >> num;
	english = num;
	cout << endl;
	cout << "Enter The Mark of Computer Science out of 100 : ";
	cin >> num;
	computer_science = num;
	cout << endl;
	cout << "Student record Has Been Created" << endl;
}
void student::calculate_percentage()
{
	percentage = (physics + chemistry + maths + english + computer_science) / 5;
}
void student::calculate_grade()
{
	if (percentage >= 50 && percentage < 55)
		grade = "D";
	else if (percentage >= 55 && percentage < 60)
		grade = "C-";
	else if (percentage >= 60 && percentage < 65)
		grade = "C";
	else if (percentage >= 65 && percentage < 70)
		grade = "C+";
	else if (percentage >= 70 && percentage < 75)
		grade = "B-";
	else if (percentage >= 75 && percentage < 80)
		grade = "B";
	else if (percentage >= 80 && percentage < 85)
		grade = "B+";
	else if (percentage >= 85 && percentage < 90)
		grade = "A-";
	else if (percentage >= 90 && percentage < 95)
		grade = "A";
	else if (percentage >= 95 && percentage <= 100)
		grade = "A+";
	else
		grade = "F";
}
void student::modify()
{
	set_num();
	set_name();
	set_marks();
	cout << "Record Updated" << endl;
}
void student::display()
{
	cout << "Roll Number of Student : " << num << endl;
	cout << "Name of Student : " << name << endl;
	cout << "Marks in Physics " << physics << endl;
	cout << "Marks in  Chemistery " << chemistry << endl;
	cout << "Marks in Maths " << maths << endl;
	cout << "Marks in English " << english << endl;
	cout << "Marks in  Computer Science " << computer_science << endl;
	calculate_percentage();
	cout << "Percentage of student is :" << fixed << setprecision(2) << percentage << endl;
	calculate_grade();
	cout << "Grade of student is " << grade << endl;
}
void student::getall()
{

	cout << num << "       " << name << "       " << physics << "       " << chemistry << "       " << maths << "       " << english << "       " << computer_science << "       ";
	calculate_percentage();
	cout << fixed << setprecision(2) << percentage;
	calculate_grade();
	cout << "       " << grade << endl;
}
int student::return_num()
{
	return num;
}int main()
{
	int size = 0;
	student p[300];
	cout << "                       STUDENT" << endl;
	cout << endl;
	cout << "                    REPORT CARD" << endl;
	cout << endl;
	cout << "                       PROJECT" << endl;
	cout << endl;
	cout << endl;
	cout << "		MADE BY ARD TEAM" << endl;
	system("pause");
	system("cls");
	int number;
let:
	system("cls");
	cout << "MAIN MENU" << endl;
	cout << endl;
	cout << "01. RESULT MENU" << endl;
	cout << endl;
	cout << "02. ENTRY/EDIT MENU" << endl;
	cout << endl;
	cout << "03. EXIT" << endl;
	cout << endl;
	cout << "Please Select Your Option (1-3) ";
	cin >> number;
	for (int k = 1; true; k++)
	{
		switch (number)
		{
		case 1:
			system("cls");
			int num;
			cout << "RESULT MENU" << endl;
			cout << endl;
			cout << "01.Class Result" << endl;
			cout << endl;
			cout << "02. Student Report Card" << endl;
			cout << endl;
			cout << "03. Back to Main Menu" << endl;
			cout << endl;
			cout << "Enter Choice (1/2/3)?" << endl;
			cin >> num;
			switch (num)
			{
			case 1:
				system("cls");
				cout << "================================================================================================" << endl;
				cout << "R.NO      Name       P         C         M         E         CS         %GPA         Grade" << endl;
				cout << "================================================================================================" << endl;
				for (int j = 1; j <= size; j++)
				{
					p[j].getall();
				}
				system("pause");
				goto let;
				system("pause");
				goto let;
			case 2:
				system("cls");
				int dis;
				cout << "Enter The Roll Number Of student : ";
				cin >> dis;
				for (int i = 1; i <= size; i++)
				{
					int num = p[i].return_num();
					if (num == dis)
						p[i].display();
					else
						cout << "This Record Is Not Exist" << endl;
				}
				system("pause");
				goto let;
			case 3:
				system("cls");
				goto let;
			}
		case 2:
			system("cls");
			int num1;
			cout << "ENTRY MENU" << endl;
			cout << endl;
			cout << "1.CREATE STUDENT RECORD" << endl;
			cout << endl;
			cout << "2.DISPLAY ALL STUDENTS RECORDS" << endl;
			cout << endl;
			cout << "3.SEARCH STUDENT RECORD" << endl;
			cout << endl;
			cout << "4.MODIFY STUDENT RECORD" << endl;
			cout << endl;
			cout << "5.DELETE STUDENT RECORD" << endl;
			cout << endl;
			cout << "6.BACK TO MAIN MENU" << endl;
			cout << endl;
			cout << "Please Enter Your Choice (1-6)? ";
			cin >> num1;
			switch (num1)
			{
			case 1:
				size++;
				system("cls");
				p[size].set_num();
				cout << endl;
				p[size].set_name();
				cout << endl;
				p[size].set_marks();
				cout << endl;
				system("pause");
				goto let;
			case 2:
				system("cls");
				cout << "               DISPLAY ALL RECORD !!!" << endl;
				cout << endl;
				cout << endl;
				for (int l = 1; l <= size; l++)
				{
					p[l].display();
					cout << endl;
					cout << "======================================================" << endl;
					cout << endl;
				}
				system("pause");
				goto let;
			case 3:
				system("cls");
				int sear;
				cout << "Please Enter The roll number ";
				cin >> sear;
				for (int i = 1; i <= size; i++)
				{
					if (p[i].return_num() == sear)
						p[i].display();

				}
				system("pause");
				goto let;
			case 4:
				system("cls");
				int mod;
				cout << "Please Enter The roll number ";
				cin >> mod;
				for (int i = 1; i <= size; i++)
				{
					if (p[i].return_num() == mod)
						p[i].modify();
					;
				}
				system("pause");
				goto let;
			case 5:
				system("cls");
				int del;
				cout << "Please Enter The roll number ";
				cin >> del;
				for (int i = 1; i <= size; i++)
				{
					if (p[i].return_num() == del)
					{
						for (int j = i; j <= size; j++)
						{
							p[j] = p[j + 1];
							size--;

						}
					}
				}
				system("pause");
				goto let;
			case 6:
				system("cls");
				goto let;
			}
		case 3:
			exit(0);
		}
	}
	return 0;
}