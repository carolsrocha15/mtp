#include <stdio.h>
#define MOSTRABOOL(x) ({printf("%s\n", (x)? "Verdadeiro";"Falso");})

typedef enum ( false=0, true=1 ) bool;

int main() {
    bool V = true;
    bool F = false;
    switch(V) {
    case true:
    MOSTRABOOL(V);
    break;
    case false:
    MOSTRABOOL(F);
    break;
    default:
        printf("#Partiu\n")
    }
    MOSTRABOOL(2>3);
    MOSTRABOOL(2<3);
    MOSTRABOOL(2==3);
    MOSTRABOOL(2!=3);
    MOSTRABOOL(2<=3);
    MOSTRABOOL(2>=3);
    return 0;
}

