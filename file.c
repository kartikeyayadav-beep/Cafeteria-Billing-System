#include <stdio.h>
#include "menu.h"

extern struct Item items[50];
extern int count;

void saveToFile() {
    FILE *fp = fopen("data.txt", "w");

    for(int i = 0; i < count; i++) {
        fprintf(fp, "%d %s %.2f\n", items[i].id, items[i].name, items[i].price);
    }

    fclose(fp);
}

void loadFromFile() {
    FILE *fp = fopen("data.txt", "r");

    if(fp == NULL) return;

    while(fscanf(fp, "%d %s %f", &items[count].id, items[count].name, &items[count].price) != EOF) {
        count++;
    }

    fclose(fp);
}