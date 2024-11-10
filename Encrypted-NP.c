#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

FILE *fp;
char passcode[11];
char text[MAX_LEN];
int passwordSet = 0;
char title[20];
int id;

void createFile() {
    printf("\n\t\t\t\tEnter title for the file: ");
    scanf("%s", title);
    printf("\n\t\t\t\tEnter ID for the file: ");
    scanf("%d", &id);
    printf("\n\t\t\t\tEnter text to add in the file: ");
    getchar(); // To clear the newline character left by scanf
    fgets(text, MAX_LEN, stdin);
    fp = fopen("Encrypted-NP.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "Title: %s\nID: %d\nText: %s", title, id, text);
        printf("\n\t\t\t\tFile has been created with the entered text.");
        fclose(fp);
    } else {
        printf("\n\t\t\t\tError creating the file.");
    }
}

void setPassword() {
    printf("\n\t\t\t\tEnter a new password: ");
    scanf("%s", passcode);
    printf("\n\t\t\t\tPassword has been set successfully.");
    passwordSet = 1;
}

void editFile() {
    char password[11];
    if (passwordSet == 0) {
        printf("\n\t\t\t\tPlease set a password first before editing the file.");
    } else {
        printf("\n\t\t\t\tEnter File Password: ");
        scanf("%s", password);
        if (strcmp(password, passcode) == 0) {
            printf("\n\t\t\t\tEnter new text to add in the file: ");
            getchar(); // Clear the newline
            fgets(text, MAX_LEN, stdin);
            fp = fopen("Encrypted-NP.txt", "a");
            if (fp == NULL) {
                printf("\n\t\t\t\tError opening the file.");
            } else {
                fprintf(fp, "\n%s", text);
                printf("\n\t\t\t\tText has been added to the file.");
                fclose(fp);
            }
        } else {
            printf("\n\t\t\t\tWrong Password... Access Denied.");
        }
    }
}

void resetPassword() {
    char password[11];
    printf("\n\t\t\t\tEnter old password: ");
    scanf("%s", password);
    if (strcmp(password, passcode) == 0) {
        setPassword();
    } else {
        printf("\n\t\t\t\tWrong Password... Access Denied.");
    }
}

void forgotPassword() {
    char securityQuestion[50];
    char securityAnswer[50];
    printf("\n\t\t\t\tEnter security question: ");
    getchar(); // To clear the newline character left by scanf
    fgets(securityQuestion, 50, stdin);
    printf("\n\t\t\t\tEnter security answer: ");
    fgets(securityAnswer, 50, stdin);
    printf("\n\t\t\t\tPlease contact the administrator to retrieve your password.");
}

void showFile() {
    char password[11];
    if (passwordSet == 0) {
        printf("\n\t\t\t\tPlease set a password first before viewing the file.");
    } else {
        printf("\n\t\t\t\tEnter File Password: ");
        scanf("%s", password);
        if (strcmp(password, passcode) == 0) {
            fp = fopen("Encrypted-NP.txt", "r");
            if (fp != NULL) {
                printf("\n\t\t\t\tThe File Content is:\n");
                while (fgets(text, MAX_LEN, fp) != NULL) {
                    printf("%s", text);
                }
                fclose(fp);
            } else {
                printf("\n\t\t\t\tError opening the file.");
            }
        } else {
            printf("\n\t\t\t\tWrong Password... Access Denied.");
        }
    }
}

void newcreateFile() {
    printf("\n\t\t\t\tEnter title for the new file: ");
    scanf("%s", title);
    printf("\n\t\t\t\tEnter ID for the new file: ");
    scanf("%d", &id);
    printf("\n\t\t\t\tEnter text to add in the new file: ");
    getchar(); // Clear the newline
    fgets(text, MAX_LEN, stdin);
    fp = fopen("Encrypted-NP.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "Title: %s\nID: %d\nText: %s", title, id, text);
        printf("\n\t\t\t\tFile has been created with the entered text.");
        fclose(fp);
        newsetPassword();
    } else {
        printf("\n\t\t\t\tError creating the file.");
    }
}

void newsetPassword() {
    printf("\n\t\t\t\tEnter a new password for the new file: ");
    scanf("%s", passcode);
    printf("\n\t\t\t\tPassword has been set successfully.");
    passwordSet = 1;
}

int main() {
    int choice;
    printf("\n\t\t\t\tWelcome to Secure Notepad by saithilak and naveen\n");
    createFile();
    setPassword();
    while (1) {
        printf("\n\t\t\t\t1. Edit File\n");
        printf("\t\t\t\t2. Reset Password\n");
        printf("\t\t\t\t3. Forgot Password\n");
        printf("\t\t\t\t4. Open File\n");
        printf("\t\t\t\t5. New File\n");
        printf("\t\t\t\t6. Exit\n");

        printf("\n\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: editFile(); break;
            case 2: resetPassword(); break;
            case 3: forgotPassword(); break;
            case 4: showFile(); break;
            case 5: newcreateFile(); break;
            case 6: exit(0);
            default: printf("\n\t\t\t\tInvalid choice. Please try again.");
        }
    }
    return 0;
}
