#include<stdio.h>
struct Department{
char courses[30];
};
struct college{
char name [30];
char city [30];
struct Department courses;
};
int main(){
struct college C1={"Garden city university","TC palya",("cse,IT,AIML,Data science")};
printf("name:%s\n",C1.name);
printf("city:%s\n",C1.city);
printf("courses:%s\n",C1.courses.courses);
return 0;
}
