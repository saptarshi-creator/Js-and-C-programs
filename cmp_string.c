#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char s[]="abc";
    char d[]="def";

    printf ("Length of the dtring s =%llu", strlen(s));
    printf ("Length of the string d =%llu", strlen(d));

    strcpy(d,s);
    printf ("%s,%s",d,s);

    strrev(s);
    printf("%s",s);

    i= strcmp(s,d);
    if (i!=0){
        printf("Same");
    }

    else{
        printf("Different");
    }
    strcat(d,s);
    printf("%s",d);
}