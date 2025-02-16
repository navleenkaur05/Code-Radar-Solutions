// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b==c){
        printf("Equilateral");
    }
    else if(((a==b)&&(a!=c)||(b==c)&&(b!=a)||(c==a)&&(c!=b))){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}