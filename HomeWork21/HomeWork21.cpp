#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// 1
	/*ifstream in;
	in.open("test1.txt");
	ifstream in2;
	in2.open("test2.txt");
	string line;
	string line2;
	int count = 0;
	while(getline(in, line) && getline(in2, line2)) {
		if (line != line2) {
			cout << line << endl << line2 << endl;
		}
		count--;
	}
	in.close();
	in2.close();*/
	

	// 2
	/*ifstream in;
	in.open("task2.txt");
	ofstream out;
	out.open("out.txt");
	string line;
	int countStr = 0, countSym = 0, countSogl = 0, countGl = 0, countNums = 0;
	while (getline(in, line)) {
		countStr++;
		for (int i = 0; line[i] != '\0'; i++) {
			countSym++;
			if (int(line[i]) >= 48 && int(line[i]) <= 57) {
				countNums++;
			}
			else if (int(line[i]) >= 65 && int(line[i]) <= 90 || int(line[i]) >= 97 && int(line[i]) <= 122) {
				if (int(line[i]) == 65 || int(line[i]) == 69 || int(line[i]) == 73 || int(line[i]) == 79 || int(line[i]) == 85 || int(line[i]) == 89 ||
					int(line[i]) == 97 || int(line[i]) == 101 || int(line[i]) == 105 || int(line[i]) == 111 || int(line[i]) == 117 || int(line[i]) == 121) {
					countGl++;
				}
				else {
					countSogl++;
				}
			}
		}
	}
	out << "str: " << countStr << endl << "sym: " << countSym << endl << "sogl: " << countSogl << endl << "gl: " << countGl << endl << "nums: " << countNums;*/

	// 3
	ifstream in;
	in.open("task3.txt");
	ofstream out;
	out.open("out.txt");
	string line;
	int pos = 3;
	if (in.is_open()) {
		while (getline(in, line)) {
			for (int i = 0; line[i] != '\0'; i++) {
				if (line[i] >= 97 && line[i] <= 122) {
					if (line[i] > (122 - pos)) {
						line[i] = line[i] + pos - 26;
					}
					else {
						line[i] = line[i] + pos;
					}
				}
				if (line[i] >= 65 && line[i] <= 90) {
					if (line[i] > (90 - pos)) {
						line[i] = line[i] + pos - 26;
					}
					else {
						line[i] = line[i] + pos;
					}
				}
			}
			out << line << endl;
		}
	}
}