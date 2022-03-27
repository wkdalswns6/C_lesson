#include <stdio.h>

int main(){
   int true_value = 1;
   int false_value = 0;

   if(true_value || true_value){
       printf("true_value || true_value\n");
   }
   if(true_value || false_value){
       printf("true_value || false_value\n");
   }
   if(false_value || true_value){
       printf("false_value || true_value\n");
   }
   if(false_value || false_value){
       printf("false_value || false_value\n");
   }
}