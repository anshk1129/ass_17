#include<stdio.h>
int main(){
char str[10]="hello";
int i=0,val=0;
char b='l';
while(str[i]!='\0'){
     if(str[i]==b)
     val++;
     i++;
}
printf("The occurence of %c is %d",b,val);
return 0;
}