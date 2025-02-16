// Your code here...
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'){
        printf("vowel");
    }
    else if(ch>='0'&& ch<'9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }


    }
    
    
