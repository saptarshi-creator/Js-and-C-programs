#include<stdio.h>
struct book {
    char title[60];
    char name[60];
    char subject[60];
    int id;
    float price;
};
int main(){
    struct book b;

    printf("Book's Title");
    scanf("%s",b.title);

    printf("Author's Name");
    scanf("%s",b.name);

    printf("Subject Name");
    scanf("%s",b.subject);

    printf("Book ID");
    scanf("%d",&b.id);

    printf("Price");
    scanf("%f",&b.price);

    printf("\n Book Details \n");
    printf("Book's Title :%s\n",b.title);
    printf("Author's Name :%s\n",b.name);
    printf("Subject :%s\n",b.subject);
    printf("Book's Id :%d\n",b.id);
    printf("Price :%f\n",b.price);

    return 0;

}