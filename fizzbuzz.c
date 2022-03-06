/* fizz buzz works */
/* Junji Nishino */

#include<stdio.h>

void printfizzbuzz(int n);

int main(){
  int n;

  for(n=1; n<100; n++){
    printfizzbuzz(n);
    printf(",");
  }
}
   

void printfizzbuzz(int n){
  if(n%15 == 0) {
    printf("fizzbuzz");
  }else if(n%3 == 0){
    printf("fizz");
  }else if(n%5 == 0){
    printf("buzz");
  }else{
    printf("%d", n);
  }
}
