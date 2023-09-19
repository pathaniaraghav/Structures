 #include<stdio.h>
 int main(){
    int x;
    struct pokemon{ // user defined datatype
        int hp;
        int speed;
        int attack;
        char tier; // S, A, B, C, D
    };
    struct pokemon pikachu;
    printf("Enter attack of pikachu :");
    scanf("%d",&pikachu.attack);
    //pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

   // printf("%d",pikachu.attack);

    struct pokemon charizard;
    // printf("Enter attack of pikachu : ");
    // scanf("%d",&pikachu.attack);
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';
   

    struct pokemon mewtwo;
    mewtwo.attack = 170;
    mewtwo.hp = 150;
    mewtwo.speed = 200 ; 
    mewtwo.tier = 'G';

     printf("%d",pikachu.attack);
    
    return 0;
 }