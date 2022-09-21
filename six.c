#include<stdio.h>
#include<string.h>
int main(){
char str[10]="hello";
int i,j;
j=strlen(str);
char temp;
for(i=0;i<j/2;i++){
    temp=str[i];
    str[i]=str[j-i-1];
    str[j-1-i]=temp;

}
printf("The Reverse String is %s",str);
return 0;
}