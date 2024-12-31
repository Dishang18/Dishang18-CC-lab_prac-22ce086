#include<stdio.h>
//#include<conio.h>
void checkRegularExpression(char str[]){
 int i=0;
    while (str[i]=='a' )
    {
        i++; 
    }
    if(str[i+1]=='b' && str[i]=='b' && str[i+2]=='\0'){
        printf("Valid String\n");
    }
    else{
        printf("Invalid String\n");
    }
}
int main(){
    int t=5;
    while (t--)
    {
    char str[30];
    printf("Enter the String : ");
    gets(str);
    checkRegularExpression(str);
    }
    
}


//aaabb

