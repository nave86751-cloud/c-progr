#include<stdio.h>
int main(){
FILE*fp;
fp=fopen("data.txt","w");//Opens file for writing(creates/overwrites)
if(fp==NULL){
 printf("File cannot be opened!\n");
 return 1;
}

fprintf(fp,"welcome\n");
fprintf(fp,"welcome\n");
fclose(fp);
printf("Data written successfully.\n");
return 0;
}
