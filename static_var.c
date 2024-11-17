#include <stdio.h>
int a=110;

void f(){
    ++a;
}

int main() {
    static int a = 1;

    f(a);
    f(a);
    f(a);
    f(a);
    f(a);
    f(a);
    f(a);
    

    printf("%d\n",a);

    return 0;
}