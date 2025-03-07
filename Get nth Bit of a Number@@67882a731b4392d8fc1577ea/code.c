// Your code here...
#include<stdio.h>
int get_nth_bit(int num, int n){
    return (num>>n) & 1;
}
int main(){
    int num,n;
    scanf("%d %d",&num ,&n);
    printf("%d\n",get_nth_bit(num,n));
    return 0;
}