//Problem 1

#include <stdio.h>
#include <stdlib.h>

int main(){

  int i = 0;
  int ans = 0;
  while (i < 1000){
    if (i % 3 == 0 || i % 5 == 0)
      ans += i;
    i++;
  }

  printf("%d\n", ans);

  return 0;
}
