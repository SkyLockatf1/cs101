#include <stdio.h>

int main(){
    double PI = 0;
    int sign = 1; // 1=+ -1=-
    int x = 261315;
    for(int i=1;i<=x;i+=2){
        if(sign==1){
            PI +=4.0/i*sign;
            sign = -1;
        }else{
            PI += 4.0/i*sign;
            sign = 1;
        }
        // printf("i:%d || %.5f\n",i,PI);
        if((int)(PI*100000+0.5)/100000.0 ==3.14159){
            printf("i:%d || %.5f\n",i,PI);
            break;
        }
    }
    printf("%.5f\n",PI);
    return 0;
}