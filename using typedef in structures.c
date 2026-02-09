//using typedef in structures
#include<stdio.h>
typedef struct{
int emp_ID;
char Name[10];
float Salary;
}Employee;
int main(){
Employee e1={1001,"Naveen",45000.50};
printf("Employee ID:%d\n",e1.emp_ID);
printf("Name:%s\n",e1.Name);
printf("Salary:%.2f\n",e1.Salary);
return 0;
}
