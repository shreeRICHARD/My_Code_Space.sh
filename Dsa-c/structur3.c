#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int age;
    float marks;

};


int main(){
    struct student s1,s2 ;

    strcpy(s1.name,"garlic");
    s1.age = 19;
    s1.marks =87.6;

    printf("name : %s\n",s1.name);
    printf("age : %d\n",s1.age);
    printf("mark : %f\n",s1.marks);
//-------------//
    strcpy(s2.name,"jinger");
    s2.age = 19;
    s2.marks =88.3;

    printf("name : %s\n",s2.name);
    printf("age : %d\n",s2.age);
    printf("mark : %f\n",s2.marks);
    return 0;
}