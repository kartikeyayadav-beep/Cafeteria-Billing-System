#include <stdio.h>
#include "menu.h"

extern struct Item items[50];
extern int count;

void generateBill() {
    int id, qty;
    float total = 0;

    printf("Enter item ID: ");
    scanf("%d", &id);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    for(int i = 0; i < count; i++) {
        if(items[i].id == id) {
            total = items[i].price * qty;
            printf("Item: %s\n", items[i].name);
        }
    }

    if(total == 0) {
        printf("Item not found\n");
        return;
    }

    if(total > 500) {
        total *= 0.9;
    }

    printf("Final Bill: %.2f\n", total);
}