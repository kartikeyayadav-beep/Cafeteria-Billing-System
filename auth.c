#include <stdio.h>
#include <string.h>

int login() {
    char user[20], pass[20];

    printf("Username: ");
    scanf("%s", user);
    printf("Password: ");
    scanf("%s", pass);

    if(strcmp(user, "GEU") == 0 && strcmp(pass, "geu123@") == 0) {
        printf("Login Successful\n");
        return 1;
    }
    printf("Invalid Credentials\n");
    return 0;
}