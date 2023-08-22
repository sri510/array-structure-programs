/*
Create a student management system that uses arrays to store student records. Implement functionalities like adding, updating, and deleting student information.
Explanation:
This program uses an array of Student structures to store student records.
The main menu is displayed using a loop that continues until the user chooses to exit (option 4).
Depending on the selected option, the program performs actions such as adding, updating, or deleting student records.
scanf is used for input, and while (getchar() != '\n'); is used to clear the input buffer after reading integers or floats.
The program doesn't use functions for the sake of simplicity, but using functions would make the code more modular and readable.
Input/Output:-
Student Management System
1. Add Student
2. Update Student
3. Delete Student
4. Display Students
5. Exit
Enter your choice: 1
Enter student ID: 101
Enter student name: John
Enter student age: 20
Student added successfully!
Student Management System
1. Add Student
2. Update Student
3. Delete Student
4. Display Students
5. Exit
Enter your choice: 4
Student List:
ID      Name    Age
101     John    20
Student Management System
1. Add Student
2. Update Student
3. Delete Student
4. Display Students
5. Exit
Enter your choice: 2
Enter student ID to update: 101
Enter updated student name: John Smith
Enter updated student age: 21
Student information updated!
Student Management System
1. Add Student
2. Update Student
3. Delete Student
4. Display Students
5. Exit
Enter your choice: 4
Student List:
ID      Name        Age
101     John Smith  21
Student Management System
1. Add Student
2. Update Student
3. Delete Student
4. Display Students
5. Exit
Enter your choice: 3
Enter student ID to delete: 101
Student deleted!
Student Management System
1. Add Student
2. Update Student
3. Delete Student
4. Display Students
5. Exit
Enter your choice: 4
Student List:
ID      Name        Age
Student Management System
1. Add Student
2. Update Student
3. Delete Student
4. Display Students
5. Exit
Enter your choice: 5
Exiting...
*/
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int id;
    char name[100];
    int age;
    float gpa;
} Student;

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0;

    while (1) {
        printf("Options:\n");
        printf("1. Add Student\n");
        printf("2. Update Student\n");
        printf("3. Delete Student\n");
        printf("4. Exit\n");
        printf("Enter option: ");

        int option;
        scanf("%d", &option);

        switch (option) {
            case 1: {
                if (studentCount < MAX_STUDENTS) {
                    printf("Enter student ID: ");
                    scanf("%d", &students[studentCount].id);

                    printf("Enter student name: ");
                    scanf("%s", students[studentCount].name);

                    printf("Enter student age: ");
                    scanf("%d", &students[studentCount].age);

                    printf("Enter student GPA: ");
                    scanf("%f", &students[studentCount].gpa);

                    studentCount++;
                } else {
                    printf("Student limit reached.\n");
                }
                break;
            }

            case 2: {
                if (studentCount > 0) {
                    printf("Enter student ID to update: ");
                    int updateID;
                    scanf("%d", &updateID);

                    for (int i = 0; i < studentCount; i++) {
                        if (students[i].id == updateID) {
                            printf("Enter new student name: ");
                            scanf("%s", students[i].name);

                            printf("Enter new student age: ");
                            scanf("%d", &students[i].age);

                            printf("Enter new student GPA: ");
                            scanf("%f", &students[i].gpa);

                            printf("Student information updated.\n");
                            break;
                        }
                    }
                } else {
                    printf("No students to update.\n");
                }
                break;
            }

            case 3: {
                if (studentCount > 0) {
                    printf("Enter student ID to delete: ");
                    int deleteID;
                    scanf("%d", &deleteID);

                    int found = 0;
                    for (int i = 0; i < studentCount; i++) {
                        if (students[i].id == deleteID) {
                            for (int j = i; j < studentCount - 1; j++) {
                                students[j] = students[j + 1];
                            }
                            studentCount--;
                            found = 1;
                            printf("Student deleted.\n");
                            break;
                        }
                    }
                    if (!found) {
                        printf("Student not found.\n");
                    }
                } else {
                    printf("No students to delete.\n");
                }
                break;
            }

            case 4:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid option. Please enter a valid option.\n");
        }

        while (getchar() != '\n'); // Clear input buffer
    }

    return 0;
}
