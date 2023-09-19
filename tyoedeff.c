// #include<stdio.h>
// typedef float realNumber;
// typedef int Integer;
// int main(){

//     Integer x = 5;
//     realNumber y = 3.1415;
//     printf("%d",x); 
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
   typedef struct book{
        char name[50];
        int noOfPages;
        int price;
    } PW;

  PW d;
  PW a;
  PW b;
  PW c;
 
 a.noOfPages = 100;
 a.price = 413;

 printf("%d",a.price);
    return 0;
}