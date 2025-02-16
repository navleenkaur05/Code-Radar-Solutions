// Your code here...
#include<stdio.h>
int main(){
    int num,j;
    scanf("%d",&num);
    int sum=0;
    for(j=1;j<=num;j++){
        sum = sum+j;
       
    }
    printf("%d",sum);
    return 0;
}