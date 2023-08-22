/*
Nested Structs
Student details:

Name: Rosa Rowe
Student ID: 123
Marks in Science: 92
Marks in Math: 97
Marks in Language: 89
*/
#include <stdio.h>
#include <string.h>

struct Marks {
int science;
int math;
int language;
};

struct Student {
	char name[40]; 
int id_number;	
struct Marks marks;  
} student;

int main() {

  // initialize student Marks
  student.marks.science = 92;
  student.marks.math = 97;
  student.marks.language = 89;

  // initialize student details
strcpy(student.name, "Rosa Rowe");
  student.id_number = 123;

  // Print the values the members student 	
printf("Student details:\n");
printf("\nName: %s", student.name);
printf("\nStudent ID: %d", student.id_number);
printf("\nMarks in Science: %d", student.marks.science);
printf("\nMarks in Math: %d", student.marks.math);
printf("\nMarks in Language: %d", student.marks.language);
return 0;
}
