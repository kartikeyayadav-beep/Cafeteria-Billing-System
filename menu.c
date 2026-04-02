#include <stdio.h>
#include "menu.h"

struct Item items[50];
int count = 0;

void addItem() {
    printf("Enter ID: ");
    scanf("%d", &items[count].id);

    printf("Enter Name: ");
    scanf("%s", items[count].name);

    printf("Enter Price: ");
    scanf("%f", &items[count].price);

    count++;
}

void displayMenu() {
    printf("\n--- MENU ---\n");
    for(int i = 0; i < count; i++) {
        printf("%d  %s  %.2f\n", items[i].id, items[i].name, items[i].price);
    }
}