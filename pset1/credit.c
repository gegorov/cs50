#include <cs50.h>
#include <stdio.h>

int main(void) {
    //reading CC number
    printf("Please enter a credic card number: \n");
    long long ccNumber = get_long_long();
    //checking the input, if it is wrong reading again
    while (ccNumber < 1) {
        printf("Please enter a VALID credic card number: \n");
        ccNumber = get_long_long();
    }

    //calculating checksum and number length
    int sum = 0;
    int counter = 0;
    int firstDigit;
    int secondDigit;
    bool checkSum = false;
    //int interm;


    bool alternate = false;
    debur
    while (ccNumber > 0) {

        int tmp = ccNumber % 10;

        if (ccNumber > 10 ) {
            secondDigit = tmp;
            firstDigit = (ccNumber % 100 ) / 10;
            //(ccNumber / 10) % 10;
        }
        ccNumber = ccNumber / 10;

        if (alternate) {
            tmp *=2;
            if (tmp > 9) {
                tmp = (tmp % 10) + 1;
            }
        }

        sum += tmp;


        alternate = !alternate;
        counter++;
    }
    // if our check sum is not ending by 0, card is invalid by default
    if (sum % 10 == 0) {
        checkSum = !checkSum;
    }

    if (checkSum
        && (counter == 13 || counter == 16)
        && firstDigit == 4) {

        printf("VISA\n");

    } else if (checkSum
        && counter == 15
        && firstDigit == 3
        && (secondDigit == 4 || secondDigit == 7)) {

        printf("AMEX\n");

    } else if (checkSum
        && counter == 16
        && firstDigit == 5
        && (secondDigit == 1
            || secondDigit == 2
            || secondDigit == 3
            || secondDigit == 4
            || secondDigit == 5)
        ) {

        printf("MASTERCARD\n");

    } else {

        printf("INVALID\n");

    }


}
