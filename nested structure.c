#include<stdio.h>
struct date{
int day;
int mont;
int year;
};
struct student{
int id;
char name[20];
struct date dob;
};
int main(){
struct student s1={101,"kiran",{15,8,2000}};
printf("name.%s\n",s1,name);
}
