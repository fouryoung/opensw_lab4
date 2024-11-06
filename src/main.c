#include <stdio.h>
#include "func1.h"
#include "func2.h"


int main(){

    foo();
    printf("good\n");
    
    goo();
    printf("bad\n");

    printf("I made it");
    
    return 0;
}