//Problem 5

#include <stdio.h>
#include <stdlib.h>

int main(){

  int i = 20;
  long ans = 20;

  while (i > 0){
    if (ans % i != 0){
      ans++;
      i = 20;
    }
    else (i--);
  }


  printf("%ld\n", ans);

  return 0;
}
