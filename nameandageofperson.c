//Create a structure type Person with name, salary and age as its attributes. Print the anme of first person and age of other.
#include<stdio.h>
#include<string.h>

int main(){
    struct Person{
        char name[50];
        int salary;
        int age;
    };

    struct Person a;
    a.salary = 500;
    strcpy(a.name,"Rahul");
    printf("%s\n",a.name);
 
    struct Person b;
    b.age = 34;
    printf("%d",b.age);

}
