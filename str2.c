/*
Assign and access structure members
Output:
Student details:
First name: Rosa
Last name: Rowe
Social security number: 123
Grade point average: 88.89

First name: Kyla
Last name: Chavez
Social security number: 124
Grade point average: 91.56
*/
#include <stdio.h>
#include <string.h>
struct Student
  {
char f_name[20];     
char l_name[20];    
int id_number;	     
double grade_point;  
  };

int main() {
struct Student S1, S2;
  strcpy(S1.f_name, "Rosa");
strcpy(S1.l_name, "Rowe");
  S1.id_number = 123;
  S1.grade_point = 88.89;

  strcpy(S2.f_name, "Kyla");
strcpy(S2.l_name, "Chavez");
  S2.id_number = 124;
  S2.grade_point = 91.56;

printf("Student details:\n");
printf("\nFirst name: %s", S1.f_name);
printf("\nLast name: %s", S1.l_name);
printf("\nSocial security number: %d", S1.id_number);
printf("\nGrade point average: %5.2f", S1.grade_point);

printf("\n\nFirst name: %s", S2.f_name);
printf("\nLast name: %s", S2.l_name);
printf("\nSocial security number: %d", S2.id_number);
printf("\nGrade point average: %5.2f", S2.grade_point);
return 0;
}
