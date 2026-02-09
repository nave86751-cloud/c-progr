#include<stdio.h>
struct Student {
 int id;
 char name [30];
 int sem;
 char branch[10];
 char Dep[20];

};
int main(){
 struct Student s[5];
 int i;
 for(i=0;i<5;i++);{
 printf("Enter details for Student %d\n",i+1);
   printf("ID:");
   scanf("%d",&s[i].id);

   printf("name:");
   scanf("%[^\n]s",s[i].name);

   printf("semester:");
   scanf("%s",s[i].sem);

   printf("Branch:");
   scanf("%s",s[i].branch);

   printf("Department:");
   scanf("%[^\n]s",s[i].Dep);

  printf("............................\n");

  printf("\n%-10s %-20s %-5s %-10s %-20s\n","ID","Name","Sem","Branch","Department");
  printf("............................\n");

 for(i=0;i<5;i++){
  printf("%-10s %-20s %-5s %-10s %-20s\n",s[i].id,s[i].name,s[i].sem,s[i].branch,s[i].Dep);
 }
 return 0;
}
}
