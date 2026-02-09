#include<stdio.h>
struct student{
int Id;
char name[20];
};
int main(){
struct student s={101,"Anu"};
struct student*ptr=&s;
printf("Id:%d\n",ptr->Id);
printf("name:%s\n",ptr->name);
return 0;
}
