#include <stdio.h>

int main(){
     int math_score;
     int english_score;

     scanf("%d%d", &math_score, &english_score);
     printf("math_score is <%d>\n", math_score );
     printf("english_score is <%d>\n", english_score);
     printf("total score is <%d>,", math_score + english_score);
     printf("and mean score is <%d>\n", (math_score + english_score)/2);
}