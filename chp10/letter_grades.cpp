// letter_grades.cpp
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>



#include "grade.h"
#include "Student_info.h"

using namespace std;

string letter_grade(double grade) {
	static const double numbers[] = {
		97,94,90,87,84,80,77,74,70,60,0

	};
	static const char* const letters[] = {
		"A+","A","A-"
		"B+","B","B-"
		"C+","C","C-"
		"D","F"
	};

	// 배열 크기와 요소 하나의 크기를 사용하여
	// 각 범위를 구분하는 점수 개수를 구함
	static const size_t ngrades =
		sizeof(numbers) / sizeof(*numbers);

	//주어진 최종 점수에 해당하는 문자 등급을
	// 찾아서 반환
	for (size_t i = 0; i < ngrades; i++) {
		if (grade >= numbers[i])
			return letters[i];
	}
	return "?\ ?\ ?";
}
int main() {

	vector<Student_info>  students;
	Student_info record;
	string::size_type maxlen = 0;

	ifstream student_file("grades.txt");
	
	//학생 이름과 모든 점수를 읽어 저장하기 
	while (read(student_file, record)) {
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);

	}

	sort(students.begin(), students.end(), compare);

	for (vector<Student_info>::size_type i = 0;
		i != studnets.size(); ++i{
		cout << students[i].getName()
			<< string(maxlen + 1 - students[i].name.size(),' ');
		try {
		double final_grade = studnets[i].grade();
		streamsize prec = cout.precision();

		cout << setpreci

	}
	catch (domain_error e) {
	cout << e.what() << endl; 
	}
		
		
	return 0;

}