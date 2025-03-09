// Your code here...
#include <stdio.h>
int togglenbit(int num , int n){
    return num ^ (1<< n);
}
int main (){
    int num , n;
    scanf("%d %d",&num , &n);
    printf("%d\n",togglenbit(num,n));
    return 0;
}