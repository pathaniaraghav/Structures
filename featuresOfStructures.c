#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    pokemon a,b,c;
    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name,"Blastois");
    // b.attack = a.attack;
    // b.hp = a.hp
    // b.speed = a.speed;
    // b.tier = a.tier;
    // strcpy(b.name,a.name);
    b=a;
    c=b;
    c.attack=200;
    
    printf("%d",c.attack);
    return 0;
    
}