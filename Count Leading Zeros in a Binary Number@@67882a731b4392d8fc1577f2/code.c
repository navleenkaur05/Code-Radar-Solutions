// Your code here...
#include <stdio.h>
int countingzeros(unsigned int  n){
    int count= 0;
    for(int i=31; i>=0; i--){
        if((n>>i)&1){
            break;
        }
        count++;
    }
    return 0;
}
int main (){
    unsigned int num;
    scanf("%u",&num);
    printf("%d",countingzeros(num));
}