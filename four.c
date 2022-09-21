#include<stdio.h>
int main(){
char str[10]="Ramesh";
int i=0;
while(str[i]!='\0')
{
    if(str[i]>=97&&str[i]<=122){
        str[i]=str[i]-32;
    }
    i++;
}
printf("the given string in upper case is %s",str);
return 0;
}