#include <stdio.h>
#include <math.h>

int convert(long long);

int main() {

  int n, dec = 0;
  printf("Enter a binary number: ");
  scanf("%d", &n);
  
  int temp = n;
  for (int i = 0; n > 0; i++) {
    int rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
  } printf("%d in binary = %d in decimal\n", temp, dec);

return 0;
}

