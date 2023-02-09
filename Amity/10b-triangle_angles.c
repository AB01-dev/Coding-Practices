#include <stdio.h>

int main(int argc, char *argv[]) {

    int x,y,z;

    printf("Enter the three angles of the triangle:\n");
    scanf("%d %d %d", &x, &y, &z);
    if((x<=0) || (y<=0) || (z<=0)) {
      printf("This is not a triangle.\n");
    } else {
        if((x + y <= z) || (x + z <= y) || (y + z <= x)) {
        printf("This is not a triangle.\n");
        } else {

            if( ((x * x) + (y * y) == (z * z)) || ((x * x) + (z * z) == (y * y)) || ((z * z) + (y * y) == (x * x)) ) {
                printf("This is a right-angled triangle.\n");
            } else if( ( ((x * x) + (y * y) < (z * z)) || ((x * x) + (z * z) < (y * y)) || 
            ((z * z) + (y * y) < (x * x)) ) || ( ( x<=z && y<=z ) || ( x<=y && z<=y ) || ( y<=x && z<=x ) ) ) {
                printf("This is an acute-angled triangle.\n");
            } else if( ( ((x * x) + (y * y) > (z * z)) || ((x * x) + (z * z) > (y * y)) || 
            ((z * z) + (y * y) > (x * x)) ) || ( ( x>z && y>z ) || ( x>y && z>y ) || ( y>x && z>x ) ) ) {
                printf("This is an obtuse-angled triangle.\n");
            } else {
                printf("Not a triangle\n");
            }

        }
  }

  return 0;
}