#include<stdio.h>
#include<stdlib.h>
int no[9],count,a,i=0;
char xo[9];
void printemptybox();
void printbox();
void printline();
void printrow();
void printcol();
int countin();
void printemptybox(){
    printline();
    printf("| 1 || 2 || 3 |\n");
    printline();
    printf("| 4 || 5 || 6 |\n");
    printline();
    printf("| 7 || 8 || 9 |\n");
    printline();
}
void printempty(){
    printline();
    printf("|   ||   ||   |\n");
    printline();
    printf("|   ||   ||   |\n");
    printline();
    printf("|   ||   ||   |\n");
    printline();
}
void printbox(){
    no[i++]=a;
    count=1;
    for(int i=0;i<3;i++){
        printline();
        printrow();
    }
    printline();
}
void printline(){
    for(int i=0;i<15;i++){
        printf("=");
    }
    printf("\n");
}
void printrow(){
    for(int i=0;i<3;i++){
        printcol();
    }
    printf("\n");
}
void printcol(){
    if(countin()){
        printf("| %c |",xo[count]);
    }
    else
        printf("|   |");
    count++;
}
int countin(){
    for(int i=0;i<9;i++){
        if(count==no[i])
            return 1;
    }
    return 0;
}
void main(){
    int j=0;
    printempty();
    for(int i=0;i<9;i++){
        printemptybox();
        if(j==0)
            printf("X's choice:\n");
        else
            printf("O's choice:\n");
        scanf("%d",&a);
        if(j==0){
            xo[a]='x';
            j=1;
        }
        else{
            xo[a]='o';
            j=0;
        }
        system("CLS");
        if(a>9){
            printf("Invalid number. Please enter a valid number!\n");
            i--;
            continue;
        }
        printbox();
    }
}