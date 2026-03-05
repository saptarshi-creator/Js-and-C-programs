#include<stdio.h>
int main(){
    char s[20];
    int n,i;

    printf("Enter the size of the string");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%c",&s[i]);
    }
    s[i++]='\0';
    
    for (i=0;i<n;i++){
        printf("%c",s[i]);
    }
}