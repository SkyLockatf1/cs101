#include <stdio.h>
int main(){
    int x = -9;
    int y = 9;
    int z = 1;
    int sum = 0;
    if(x <0){
        sum = (x*-1)*100 + y*10 + z;
        sum *=-1;
    }else{
        sum = x*100 + y*1 + z;
    }
    printf("%d",sum);
    return 0;
}