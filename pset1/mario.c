#include <stdio.h>
#include <cs50.h>

void printRightSide(int n);
void printLeftSide(int n, int size);
void printSpace();


int main (void) {

    int size;
    do {
        printf("Enter a non-negative integer < 24: ");
        size = get_int();
    } while (size < 0 || size > 23);

    for (int i = 0; i < size; i++) {
         printLeftSide(i, size);
         printSpace();
         printRightSide(i);
    }

}

void printLeftSide(int n, int size){
    for (int i = 0; i < size - n - 1; i++ ) {
        printf(" ");
    }

    for (int i = size - n - 1; i < size; i++ ) {
        printf("#");
    }
}

void printRightSide(int n){

   for (int i = 0; i <= n; i++) {
       printf("#");
   }
   printf("\n");
}

void printSpace(){
    printf("  ");
}
