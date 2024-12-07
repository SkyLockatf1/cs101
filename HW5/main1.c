#include <stdio.h>
int main(){
    int n=7;
    int space_length=n;
    for(int i=1;i <= n; i++){
        printf("%*s",space_length," ");
        for (int j = 1; j <= i; j++){
            printf("%d",i);
            printf(" ");
        }
        printf("\n");
        space_length--;
    }
    return 0;
}