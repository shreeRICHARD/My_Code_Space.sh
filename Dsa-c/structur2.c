#include <stdio.h>
#include<string.h>
struct students
{
    int student_regno;
    int roll_no; /* data */
    char name[50];
};

int main()
{
    struct students detail;

    strcpy(detail.name,"maalik");
    detail.roll_no= 307;
    detail.student_regno = 786262753;

    printf("the Name no is : %s \n",detail.name);
    printf("the Student roll no is : %d \n",detail.roll_no);
    printf("the Reg no is : %d \n",detail.student_regno);

}
