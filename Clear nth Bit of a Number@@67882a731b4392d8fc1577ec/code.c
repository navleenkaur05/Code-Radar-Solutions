// Your code here.
#include <stdio.h>
int clearnthbit(int num , int n){
    return num &~(1<< n);
}
int main (){
    int num , n;
    scanf("%d %d",&num , &n);
    printf("%d\n",clearnthbit(num,n));
    return 0;
}