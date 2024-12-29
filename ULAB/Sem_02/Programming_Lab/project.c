#include <stdio.h>

// Define structure for shopping items
struct Item {
    int tea;
    int coffee;
    int water;
    int juice;
} cart = {0,0,0,0};


int priceList[] = {10, 20, 15, 30};

// Function prototypes
void addItem(){
    int choice;

    printf("Item Options:\n");
    printf("1: Tea - [10 BDT]\n");
    printf("2: Coffee - [20 BDT]\n");
    printf("3: Water - [15 BDT]\n");
    printf("4: Juice - [30 BDT]\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {
        case 1:
            cart.tea = cart.tea + 1;
            printf("Item successfully added!\n");
            break;
        case 2:
            cart.coffee = cart.coffee + 1;
            printf("Item successfully added!\n");
            break;
        case 3:
            cart.water = cart.water + 1;
            printf("Item successfully added!\n");
            break;
        case 4:
            cart.juice = cart.juice + 1;
            printf("Item successfully added!\n");
            break;
        default:
            printf("Invalid Choice!\n");
        }

}
void removeItem(){
    int choice;

    printf("Item Options:\n");
    printf("1: Tea - [10 BDT]\n");
    printf("2: Coffee - [20 BDT]\n");
    printf("3: Water - [15 BDT]\n");
    printf("4: Juice - [30 BDT]\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {
        case 1:
            if(cart.tea>0){
                cart.tea = cart.tea - 1;
                printf("Item successfully removed!\n");
            }
            else{
                printf("You don't have this item in the cart!\n");
            }
            break;
        case 2:
            if(cart.coffee>0){
                cart.coffee = cart.coffee - 1;
                printf("Item successfully removed!\n");
            }
            else{
                printf("You don't have this item in the cart!\n");
            }
            break;
        case 3:
            if(cart.water>0){
                cart.water = cart.water - 1;
                printf("Item successfully removed!\n");
            }
            else{
                printf("You don't have this item in the cart!\n");
            }
            break;
        case 4:
            if(cart.juice>0){
                cart.juice = cart.juice - 1;
                printf("Item successfully removed!\n");
            }
            else{
                printf("You don't have this item in the cart!\n");
            }
            break;
        default:
            printf("Invalid Choice!\n");
        }

}
void viewCart(){
    if(cart.tea==0 && cart.coffee==0 && cart.water==0 && cart.juice==0){
        printf("Your cart is empty!\n");
    }
    else{
        printf("Cart Details:\n");
        printf("-------------------------------------------------------------\n");
        printf("Item Type    |    Price    |    Quantity    |    Total Price    \n");
        printf("-------------------------------------------------------------\n");
        printf("Tea          |    %d       |    %d          |    %d\n", priceList[0],cart.tea, priceList[0]*cart.tea);
        printf("Coffee       |    %d       |    %d          |    %d\n", priceList[1],cart.coffee, priceList[1]*cart.coffee);
        printf("Water        |    %d       |    %d          |    %d\n", priceList[2],cart.water, priceList[2]*cart.water);
        printf("Juice        |    %d       |    %d          |    %d\n", priceList[3],cart.juice, priceList[3]*cart.juice);
        printf("-------------------------------------------------------------\n");
        printf("Total Bill : %d\n",priceList[0]*cart.tea+priceList[1]*cart.coffee+priceList[2]*cart.water+priceList[3]*cart.juice);
    }
}

void clearCart(){
    cart.tea = 0;
    cart.coffee = 0;
    cart.water = 0;
    cart.juice = 0;
    printf("Cart has been cleared!\n");
}

void displayMenu(){
    printf("Shopping Cart Management System\n");
    printf("1. Add Item to Cart\n");
    printf("2. Remove Item from Cart\n");
    printf("3. View Cart\n");
    printf("4. Clear Cart\n");
    printf("5. Exit\n");
}

int main() {
    int choice;

    while (1) {

        displayMenu();
        // Perform operations based on user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        // Perform operations based on user choice
        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                removeItem();
                break;
            case 3:
                viewCart();
                break;
            case 4:
                clearCart();
                break;
            case 5:
                printf("Exiting program. Thank you for shopping!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}