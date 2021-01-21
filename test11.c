#include <stdio.h>
struct sample 
{
    int a;
    char b;
    float c;
};

int main()
{
    struct sample s;
    s.a=1;
    s.b='x';
    s.c=12.5;
    
    printf("%d, %c, %f", s.a, s.b, s.c);
    return 0;
}

