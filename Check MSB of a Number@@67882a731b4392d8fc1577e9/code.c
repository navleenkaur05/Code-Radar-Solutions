// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num&(1<<31)){
        printf("Output\nSet\n");
    }
    else{
        printf("Output\nNot Set\n");
    }
    return 0;
}