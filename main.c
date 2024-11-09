#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char str[50], bigram[50];
    int i;

    printf("entre la chaine: ");
    scanf("%s", str);
    i=0;
    while(i<5){
        i++;
    printf("\nentre le bigramme rechercher: ");
    scanf("%s", bigram);
    bigramme(str, bigram);
    }
    return 0;
}



void bigramme(char nom[], char bigram[]){
int i, nbr;
char tab[strlen(nom)-1][2];
for(i=0; i < strlen(nom); i++){
        tab[i][0] = nom[i];
        tab[i][1] = nom[i+1];

}

nbr = 0;
for(i=0; i <= strlen(nom); i++){

if(tab[i][0]==bigram[0] && tab[i][1]==bigram[1]){
    nbr++;
}
}

printf("\nil ya %d  occurence du bigramme %s dans %s ", nbr,bigram ,nom);
}