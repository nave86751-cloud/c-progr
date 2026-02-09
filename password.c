#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char pass[50];
    int hasUpper=0,hasnumeric=0,hasSymbol=0;
    int i,length,score=0;
    printf("Enter the pass:");
    scanf("%s",pass);
    length=strlen(pass);
    if(length<8||length>15){
            printf("\nResult:INVALID\n");
    printf("pass must be between 8 to 15 characters.\n");
    printf("It should has one upper case,one numeric and one special character.\n");
    return 0;
    }
    for(i=0;i<length;i++){
            if(isupper(pass[i]))hasUpper=1;
            else if(isdigit(pass[i]))hasnumeric=1;
            else if(!isalnum(pass[i]))hasSymbol=1;
    }
    score=hasUpper+hasnumeric+hasSymbol;


    printf("\n***Analysis***\n");

    if(!hasUpper||!hasnumeric||!hasSymbol){
            printf("STATUS:INVALID");
    printf("MISSING:");
    if(!hasUpper)printf("[Uppercase]");
    if(!hasnumeric)printf("[numeric]");
    if(!hasSymbol)printf("[Symbol]");
    printf("\n");
    }else
    {
    printf("STATUS: VALID\n");
    printf("Result:pass accepted.\n");
}
if(score==3){
    printf("strong");

}
else if(score==2){
    printf("moderate");
}
else{
    printf("weak");
}

return 0;
}
