#include <stdio.h>
int main() {

  int i, j;
  for(i=1;i<=4;i++) {
    for(j=1;j<=4-i;j++) {
      printf("\t");
    } int k;
    for(k=1;k<=i;k++) {
      printf("%d\t",k);
    } int z=k-2;
    for(int l=0;l<i-1;l++){
      printf("%d\t",z);
      z--;
    } printf("\n");
  }

return 0;
}
