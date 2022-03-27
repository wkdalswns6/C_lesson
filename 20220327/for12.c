#include <stdio.h>

int main(){
    int i,n;
    int a;
    int sum=0;
    
    printf("input number:  ");
    scanf("%d", &n);

    for(i=0; i < n; i++){
        scanf("%d",&a);
        sum += a;
    }

    printf("sum: %d\n", sum);
}