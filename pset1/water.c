#include <stdio.h>
#include <cs50.h>

int main (void) {

    printf("Minutes: ");

    int min = get_int();
    int bottles = min * 192 / 16;

    printf("Bottles: %i\n", bottles);
}
