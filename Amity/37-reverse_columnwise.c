#include <stdio.h>
int main()
{

    for (int i = 3; i > 0; i--) {
            for (int j = 3; j > 0; j--)
                printf("%d\t", j);
            printf("\n");
        }

return 0;
}