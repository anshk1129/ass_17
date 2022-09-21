#include<stdio.h>
int main(){
char str[]="123ancCCbHJHHHe@$*";
int c_alpha=0,c_digit=0,c_special=0;
for(int i=0;str[i];i++){
    if(str[i]>='A'&&str[i]<='z'){
        c_alpha+=1;
    }
    else if (str[i]<='9'&&str[i]>='0')
    {
        c_digit+=1;
    }
    else{
        c_special+=1;
    }
}
    printf("The alphabets are %d and digits are %d and special symbols are %d",c_alpha,c_digit,c_special);
    


return 0;
}