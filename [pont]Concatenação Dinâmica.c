#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * concatena(char *s1,char  *s2);

int main()
{
    char s1[100], s2[100], *sres;

    fgets(s1, 100, stdin);
    s1[strlen(s1)-1] = '\0';
    fgets(s2, 100, stdin);
    s2[strlen(s2)-1] = '\0';


    sres = concatena(s1, s2);

    printf("Concatenado dinamicamente: %s", sres);

    free(sres);

    return 0;
}

char * concatena(char *s1,char  *s2){
    int t1, t2, i;
    char *sres;

    t1 = strlen(s1);
    t2 = strlen(s2);

    sres = malloc((t1+t1+1)*sizeof(char));

    for(i=0;i<t1;i++)
        sres[i] = s1[i];

    for(i=0;i<t2;i++)
        sres[t1+i] = s2[i];

    sres[t1+t2] = '\0';

    return sres;
}
