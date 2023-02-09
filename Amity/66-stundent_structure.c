#include <stdio.h>
#include <string.h>

typedef struct Student {
    char name[25];
    int Roll;
    int marks;
} Stud;

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    Stud s[n];
    for(int i=0; i<n; i++) {
        printf("Enter values for %d term:\n",i+1);
        char t[25];
        printf("Enter Name: ");
        fgets(t,16,stdin);
        scanf("%[^\n]s",t);
        strcpy(s[i].name,t);
        fflush(stdin);
        printf("Enter Roll Number: ");
        scanf("%d",&s[i].Roll);
        fflush(stdin);
        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
    } printf("\nNAMES \t ROLLS \t MARKS\n");
    for(int j=0;j<n;j++){
        printf("%s \t %d \t %d \n",s[j].name,s[j].Roll,s[j].marks);
    }
return 0;
}
