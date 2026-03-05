#include<stdio.h>
int fact (int n){
    if(n==1){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}

int main(){
    int p,q;
    scanf ("%d",&p);
    q= fact(p);
    printf ("s=%d",q);
    return 0;
}