# include<stdio.h>
# include<ctype.h>
# include<string.h>

int main() {

    char st1[100];
    printf("Enter any sentence: ");
    scanf("%s",st1);
    char *ptr=st1;
    int n=strlen(st1);

    for (int i = 0; st1[i]!='\0'; i++) {
      if(st1[i] >= 'a' && st1[i] <= 'z') {
         st1[i] = st1[i] -32;
      }
   } int t=0;
    for(int j=0;j<(n/2);j++) {
        if(st1[j]==st1[n-j-1]) {
            t++;
        }
    }
    if((n/2)==t)
        printf("Entered string is a palindrome\n");
    else
        printf("Entered string is not a palindrome\n");

return 0;
}
