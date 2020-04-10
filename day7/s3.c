#include <stdio.h>
#include <string.h>
typedef struct weapon {
    char name[20];
    int atk;
    int price;
} wp;

void test1(void) {
    wp a;
    a.atk = 12;
    a.price = 355;
    strcpy(a.name,"泥巴吧");
    printf("A atk: %d A price: %d A name: %s \n",a.atk,a.price,a.name);

    printf("============ \n");
    wp b = {"你大爷",12,22};
    printf("B atk: %d  price: %d  name: %s \n",b.atk,b.price,b.name);
}

void stP(struct weapon *a) {
    (*a).atk = 12;
    (*a).price = 111;
    strcpy((*a).name,"泥巴吧");
}

void stP2(struct weapon *a) {
    a->atk = 8;
    a->price = 888;
    strcpy(a->name,"泥巴吧11");
}

void test2(void) {
    wp b = {"你大爷",12,22};
    stP(&b);
    printf("B atk: %d  price: %d  name: %s \n",b.atk,b.price,b.name);
    stP2(&b);
    printf("B atk: %d  price: %d  name: %s \n",b.atk,b.price,b.name);
}



void test3(void) {
    wp aa[2] = {
        {"你大爷",12,22},
        {"你爸爸",88,82},
    };
    static wp *b;
    b = aa;
    printf("B atk: %d  price: %d  name: %s \n",b->atk,b->price,b->name);
    b++;
    printf("B atk: %d  price: %d  name: %s \n",b->atk,b->price,b->name);
}

int main(void) 
{
    test1();
    printf("tEST2 \n");
    test2();
    printf("tEST3 \n");
    test3();
    return 0;
}