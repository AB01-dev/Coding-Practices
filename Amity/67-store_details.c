# include<stdio.h>
#include <string.h>

struct Database {
    char Name[25];
    char DOB[12];
    char Address[100];
    char Phone[15];
};

void info(char N[25],char D[12],char A[100],char P[15]){
    printf("Information of %s :-\n",N);
    printf("\tDate of Birth: %s\n",D);
    printf("\tAddress: %s\n",A);
    printf("\tPhone Number: %s\n",P);
    printf("\n");
}

int main() {
    int n;
    printf("Enter the numbers of students: ");
    scanf("%d",&n);
    fflush(stdin);
    struct Database db[n];
    for(int i=0; i<n; i++) {
        printf("Enter values for %d term:-\n",i+1);
        char N[25],D[12],A[100],P[15];
        printf("Enter your name: ");
        scanf("%[^\n]s",N);
        strcpy(db[i].Name,N);
        fflush(stdin);
        printf("Enter Date of Birth: ");
        scanf("%[^\n]s",D);
        strcpy(db[i].DOB,D);
        fflush(stdin);
        printf("Enter you Address: ");
        scanf("%[^\n]s",A);
        strcpy(db[i].Address,A);
        fflush(stdin);
        printf("Enter Phonne Number: ");
        scanf("%[^\n]s",P);
        strcpy(db[i].Phone,P);
        fflush(stdin);
    }
    for(int j=0;j<n;j++) {
        info(db[j].Name,db[j].DOB,db[j].Address,db[j].Phone);
    }
return 0;
}
