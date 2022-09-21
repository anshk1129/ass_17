#include<stdio.h>
#include<string.h>
void cal_freq(char arr[], int n);
void b_sort(char array[],int n);
int main(){
char str[100];
char str1[100];
printf("Input the string\n");
fgets(str,100,stdin);
int n=strlen(str);
strcpy(str1,str);
b_sort(str1,n);
return 0;
}
void b_sort(char array[],int n){
    int swap;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }
    cal_freq(array, n);
}


void cal_freq(char arr[], int n)
{
    int i = 1, j = 2, count=1;

    while (i < n)
    {
        if (arr[i] == arr[j]&&j<n)
            count++;
        else{
            if(arr[i]!='\0')
            printf("%c  occurs => %d times\n", arr[i], count);
        count=1;
        }i++;
        j++;
    }
}