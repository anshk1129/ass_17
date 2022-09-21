#include<stdio.h>
int main(){
char str[10]="RaMeSh";
int i=0;
while(str[i]!='\0')
{
    if(str[i]>=65&&str[i]<=96){
        str[i]=str[i]+32;
    }
    i++;
}
printf("the given string in upper case is %s",str);
return 0;
}