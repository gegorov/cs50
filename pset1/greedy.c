#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {

    int changeAmount = 0;

    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int count = 0;

    float dollars  = -1;

    printf("O hai! How much change is owed? \n");
    dollars = get_float();

    while (dollars <= 0) {
        printf("How much change is owed? \n");
        dollars = get_float();

    }

    changeAmount = (int)round(dollars * 100);

    while (changeAmount != 0) {

        if (changeAmount >= quarter) {
            changeAmount -= quarter;
            count++;

        } else if (changeAmount >= dime) {
            changeAmount -= dime;

            count++;

        } else if (changeAmount >= nickel) {
            changeAmount -= nickel;

            count++;

        } else if (changeAmount >= penny) {
            changeAmount -= penny;

            count++;

        }
    }
    printf("%i\n", count);
}
