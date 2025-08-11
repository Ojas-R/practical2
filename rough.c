#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20],branch[10];
    float m1,m2,m3 ;

};


int main ()
{
struct student *ptr;
int i,n=2;
ptr= (struct student*)malloc(n*sizeof(struct student));

for(i=0;i<n;i++)
{
    printf("enter details");
    scanf("%s%s%f",&(ptr+i)->name,&(ptr+i)->branch,&(ptr+i)->name);
}

for(i=0;i<n;i++)
{
    printf("name=%s","branch=%s","m1=%f","m2=%f","m3=%f");
    (ptr+i)->name,(ptr+i)->branch,(ptr+i)->m1,(ptr+i)->m3,(ptr+i)->m3 ;

    float percentage= student.m1+student.m2+student.m3;

    printf("%f%f%f",m1m2m3)
}


}