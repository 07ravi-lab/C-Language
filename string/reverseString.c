#include<stdio.h>
#include<string.h>
int main (){
    char str[50];
    puts("Enter the string :");
    // scanf("%[^\n]s",str);   
    gets(str);
    puts("the size of is :");
    //size
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    //reverse
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The Reverse String IS :");
    puts(str);
     return 0;
}
