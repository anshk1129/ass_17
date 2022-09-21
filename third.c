#include<stdio.h>
int main(){
char str[10]={'a','b','C','A','E','u','D'};
int i=0,count=0;
while(str[i]!='\0'){
    if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
    count++;
    i++;
}
printf("The number of vowels are %d",count);
return 0;
}