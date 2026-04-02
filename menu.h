#ifndef MENU_H
#define MENU_H

struct Item {
    int id;
    char name[30];
    float price;
};

void addItem();
void displayMenu();
void saveToFile();
void loadFromFile();

#endif