#include <stdio.h>

//Only function part is coded by me
//Rest were already in the question ide
void update(int *a,int *b) {
    *a=*a+*b;
    *b=*a>2*(*b)?*a-2*(*b):2*(*b)-*a;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
