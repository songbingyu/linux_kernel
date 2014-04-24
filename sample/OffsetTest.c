#include<stdio.h>

struct  test
{
    int m;
    int n;
    int l;
};


int main()
{
    struct test  a;

    printf("&a:%p\n" ,   &a );
    printf("&a.n:%p\n" , &a.n );

    struct test* p = (struct test*)0;
    printf("p: :%p\n" , p);
    printf("p->n:%p\n" , &p->n );

}
