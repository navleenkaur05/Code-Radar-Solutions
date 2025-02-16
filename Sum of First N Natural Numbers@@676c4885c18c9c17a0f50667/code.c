// Your code here...
#include<stdio.h>
int main(){
    int num,j;
    scanf("%d",&num);
    int sum;
    sum=0;
    for(j=num;j>=1;j--){
        sum=sum+j;
        printf("%d",sum);
       
    }
    return 0;
}