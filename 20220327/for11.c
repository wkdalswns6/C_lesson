#include <stdio.h>

int main(){
    int i,n;
    int a;
    
    printf("input number:  ");
    scanf("%d", &n);

    for(i=0; i < n; i++){
        scanf("%d",&a);
        printf("number is:  %d\n", a);
    }
}