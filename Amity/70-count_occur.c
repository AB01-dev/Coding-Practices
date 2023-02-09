# include <stdio.h>

int main() {

    char string[100];
    char character;
    int limit;

    printf("Enter any string: ");
    scanf("%[^\n]c", string);
    fflush(stdin);
    printf("Enter the number of characters whose occurrence you want to read: ");
    scanf("%d", &limit);
    fflush(stdin);
	printf("\n");
	
    for(int i=0; i<limit; i++){
        printf("Enter any character for the %d term\n", i+1);
        printf("Enter any character to count its occurrence: ");
        scanf("%c", &character);
        int count = 0;
        char * ptr = string;
        while((*ptr) != '\0') {
            if((int)*ptr == (int)character)
                count++;
            ptr++;
        } printf("Number of occurrence of %c is %d\n",character,count);
        fflush(stdin);
		printf("\n");
    }
return 0;
}
