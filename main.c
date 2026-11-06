#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main () {

    // This a Shopping Program.

    char item[50] = "";
    char currency = '$';
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;



    printf("Enter Your item Name: ");
    fgets(item, sizeof(item), stdin);

    printf("Enter The Price of each: ");
    scanf("%f", &price);

    printf("Enter The quanitiy: ");
    scanf("%d", &quantity);

    total = price * quantity;


    printf("\nYou've Bought %dx From %s", quantity, item);

    printf("The Total is %c%.2f.", currency, total);


    

    return 0;
}