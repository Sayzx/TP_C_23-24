#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "myassert.h"


int main()
{
    int tmp_a = 42;
    int tmp_b = 1337;
    int first_prime_numbers[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    const char* hello = "Hello world, toto is speaking leet";
    char *before_leet = (char*)malloc(strlen(hello) + 1);
    char *after_vls = NULL;

    strcpy(before_leet, hello);

    // factorial
    assert(factorial(5) == 120);
    printf("factorial : success\n");

    // swap
    swap(&tmp_a, &tmp_b);
    assert(tmp_a == 1337);
    assert(tmp_b == 42);
    printf("swap : success\n");

    // sum_array
    assert(sum_array(first_prime_numbers, 10) == 129);
    printf("sum_array : success\n");

    // leet
    leet(before_leet);
    assert(strcmp(before_leet, "H3110 W0R1D, 7070 !5 5P34K!NG 1337") == 0);
    printf("leet : success\n");

    // vls
    after_vls = vls(hello);
    assert(strcmp(after_vls, "Hll wrld, tt s spkng lt") == 0);
    printf("vls : success\n");

    free(after_vls);
    printf("Bravo, tout fonctionne !\n");
    return 0;
}
