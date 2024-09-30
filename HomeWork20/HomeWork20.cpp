#include <iostream>
#include <string>;
using namespace std;


struct FIO
{
	string name;
	string surname;
	string patronymic;
};
struct GroupInfo {
	string unName;
	string faqName;
	int course;
	int groupNum;
};
struct Date {
	int day;
	int month;
	int year;
};
struct Student {
	FIO fullName;
	GroupInfo group;
	Date birthday;
};
void enter_studentFIO(FIO& fio)
{
	cout << "Enter student name: " ;
	cin >> fio.name;
	cout << "Enter student surname: ";
	cin >> fio.surname;
	cout << "Enter student patronymic: ";
	cin >> fio.patronymic;
}
void enter_groupInfo(GroupInfo& group)
{
	cout << "Enter university name: ";
	cin >> group.unName;
	cout << "Enter faqulty name: ";
	cin >> group.faqName;
	cout << "Enter course number: ";
	cin >> group.course;
	cout << "Enter group number: ";
	cin >> group.groupNum;
}
void enter_date(Date& date)
{
	cout << "Enter student birth day: ";
	cin >> date.day;
	cout << "Enter student birth month: ";
	cin >> date.month;
	cout << "Enter student birth year: ";
	cin >> date.year;
}
void enter_student(Student& student) {
	enter_studentFIO(student.fullName);
	enter_groupInfo(student.group);
	enter_date(student.birthday);
}

void print_studentFIO(FIO& fio)
{
	cout << "Student fullname: " << fio.name << " " << fio.surname << " " << fio.patronymic << endl;
}
void print_groupInfo(GroupInfo& group)
{
	cout << "University name: " << group.unName << endl;
	cout << "Faqulty name: " << group.faqName << endl;
	cout << "Course number: " << group.course << endl;
	cout << "Group number: " << group.groupNum << endl;
}
void print_date(Date date)
{
	cout << "Date: ";
	cout << date.day << '.' <<
		date.month << '.' << date.year << endl;
}
void print_student(Student& student) {
	print_studentFIO(student.fullName);
	print_groupInfo(student.group);
	print_date(student.birthday);
}

int dateDiffNum(Student& student1, Student& student2) {
	int date1 = (student1.birthday.year * 360) + (student1.birthday.month * 30) + student1.birthday.day;
	int date2 = (student2.birthday.year * 360) + (student2.birthday.month * 30) + student2.birthday.day;
	if (date1 < date2) swap(date1, date2);
	return date1 - date2;
}

Date dateDiffDate(Student student1, Student student2) {
	int date1 = (student1.birthday.year * 360) + (student1.birthday.month * 30) + student1.birthday.day;
	int date2 = (student2.birthday.year * 360) + (student2.birthday.month * 30) + student2.birthday.day;
	if (date1 < date2) swap(date1, date2);
	int diff = date1 - date2;
	Date differenceDate;
	differenceDate.day = diff % 30;
	differenceDate.month = diff % 360 / 30;
	differenceDate.year = diff / 360;
	return differenceDate;
}

Date datePlusDate(Date date, int days) {
	int date1 = (date.year * 360) + (date.month * 30) + date.day + days;
	Date finalDate;
	finalDate.day = date1 % 30;
	finalDate.month = date1 % 360 / 30;
	finalDate.year = date1 / 360;
	return finalDate;
}
bool biggerDate(Date date1, Date date2) {
	int date1Num = (date1.year * 360) + (date1.month * 30) + date1.day;
	int date2Num = (date2.year * 360) + (date2.month * 30) + date2.day;
	if (date1Num < date2Num) {
		return 1;
	}
	else {
		return 0;
	}
}
void print_student2(Student student) {
	int date1 = (student.birthday.year * 360) + (student.birthday.month * 30) + student.birthday.day;
	int finalDate = (2024 * 360 + 9 * 30 + 30) - date1;
	int finalDay = finalDate % 30;
	int finalMonth = finalDate % 360 / 30;
	int finalYear = finalDate / 360;
	cout << "Student " << student.fullName.name << " " << student.fullName.surname << " " << student.fullName.patronymic << " is " << finalYear <<" year(s) " 
		<< finalMonth << " month(s) " << finalDay << " day(s) old";
}
void studentsSurnamesSort(Student students[], int size) {
	for (int i = 0; i < size; i++) {
		bool flag = true;
		for (int j = 0; j < size - 1; j++) {
			if (int(students[j].fullName.surname[0]) > int(students[j + 1].fullName.surname[0]))
			{
				swap(students[j], students[j + 1]);
				flag = true;
			}
		}
		if (flag = false) {
			break;
		}
	}
}
void studentsAgeSort(Student students[], int size) {
	for (int i = 0; i < size; i++) {
		bool flag = true;
		for (int j = 0; j < size - 1; j++) {
			if (biggerDate(students[j].birthday, students[j + 1].birthday) == 0)
			{
				swap(students[j], students[j + 1]);
				flag = true;
			}
		}
		if (flag = false) {
			break;
		}
	}
}
int main()
{
	Student student1;
	enter_student(student1);
	cout << endl;
	print_student(student1);
	Student student2;
	enter_student(student2);
	cout << endl;
	print_student(student2);
	cout << endl;
	cout << "Difference: ";
	cout << dateDiffNum(student1, student2);
	cout << endl;
	cout << " days" << endl;
	cout << "Difference ";
	print_date(dateDiffDate(student1, student2));
	cout << endl << "New ";
	print_date(datePlusDate(student1.birthday, 500));
	cout << endl << biggerDate(student1.birthday, student2.birthday) << endl;
	print_student2(student1);
	cout << endl;
	const int SIZE = 3;
	Student students[SIZE];
	for (int i = 0; i < SIZE; i++) {
		enter_student(students[i]);
		cout << endl;
		print_student(students[i]);
		cout << endl;
	}
	cout << endl << "Sorted surnames" << endl;
	studentsSurnamesSort(students, SIZE);
	for (int i = 0; i < SIZE; i++) {
		print_student(students[i]);
		cout << endl;
	}
	cout << endl << "Sorted ages" << endl;
	studentsAgeSort(students, SIZE);
	for (int i = 0; i < SIZE; i++) {
		print_student(students[i]);
		cout << endl;
	}
	cout << endl << "Only 3 course" << endl;
	for (int i = 0; i < SIZE; i++) {
		if (students[i].group.course == 3) {
			print_student(students[i]);
			cout << endl;
		}
	}
	
}
