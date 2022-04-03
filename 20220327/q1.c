#include <stdio.h>

int main(){
    int sum=0;
    char c;

    /**
     * 이 코드는 숫자가 아닌 문자가 들어오는 한 무한히 반복하며
     * sum에 값을 더하는 코드입니다.
     */

    while(1){
        scanf("%c", &c);
        getchar(); // 문자 버퍼 관리를 위해 작성

        if(!('0' <= c && c <= '9'))break; // 숫자가 아닌 문자가 들어올 때 break
        sum += c-'0';

    }
    printf("sum: %d\n", sum);
}