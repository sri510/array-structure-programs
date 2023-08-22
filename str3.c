/*
Modify Values in a Structure:
Values before modification:
First name: Rosa
Last name: Rowe
Social security number: 123
Grade point average: 88.89

Values after modification:
First name: Ryan
Last name: Preston
Social security number: 130
Grade point average: 87.00
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

struct Student S1 = {"Rosa", "Rowe", 123, 88.89};
printf("Values before modification:");
printf("\nFirst name: %s", S1.f_name);
printf("\nLast name: %s", S1.l_name);
printf("\nSocial security number: %d", S1.id_number);
printf("\nGrade point average: %5.2f", S1.grade_point);

strcpy(S1.f_name, "Ryan");
strcpy(S1.l_name, "Preston");
  S1.id_number = 130;
  S1.grade_point = 87.00;

printf("\n\nValues after modification:");
printf("\nFirst name: %s", S1.f_name);
printf("\nLast name: %s", S1.l_name);
printf("\nSocial security number: %d", S1.id_number);
printf("\nGrade point average: %5.2f", S1.grade_point);

return 0;
}
