#include <stdio.h>
#include "auth.h"
#include "menu.h"

void generateBill();

int main() {
    int choice;

    if(!login()) return 0;

    loadFromFile();

    while(1) {
        printf("\n1.Add Item\n2.Show Menu\n3.Generate Bill\n4.Save\n5.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addItem(); break;
            case 2: displayMenu(); break;
            case 3: generateBill(); break;
            case 4: saveToFile(); break;
            case 5: return 0;
        }
    }
}