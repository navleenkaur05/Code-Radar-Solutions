// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=18 && b==1){
        printf("Eligible");
    }
    else if(a<18 && b==1){
        printf("Not Eligible");
    }
    else{
        printf("Not Eligible");
    }

}