
//Create a structure type 'book' with name, price and number of pages as its attributes
#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int noOfPages;
        float price;
    } a,b,c;

    a.noOfPages = 200;
    a.price = 100.4;
    strcpy(a.name,"Famuous Five");

    printf("%d\n",b.noOfPages);
    printf("%f\n",a.price);
    printf("%s\n",b.name);

    return 0;
}