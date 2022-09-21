#include<stdio.h>
int main(){
char str[]="yashu";
char str1[100];
int i=0;
while(str[i]){
     str1[i]=str[i];
     i++;
}
str1[i]='\0';
printf("The string is copied %s",str1);
return 0;
}