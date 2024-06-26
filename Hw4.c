#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD 2024
#define MAX_STUDENTS 10

typedef struct {
    char name[50];
    int id;
    int math;
    int physics;
    int english;
    float average;
} Student;

void displayWelcomeScreen();
int verifyPassword();
void displayMainMenu();
void enterStudentGrades(Student students[], int* studentCount);
void displayStudentGrades(const Student students[], int studentCount);
void searchStudentGrades(const Student students[], int studentCount);
void gradeRanking(Student students[], int studentCount);
int exitSystem();

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0;

    displayWelcomeScreen();
    if (!verifyPassword()) {
        printf("You have entered the wrong password three times. Program will terminate.\n");
        return 1;
    }

    while (1) {
        displayMainMenu();
        char choice;
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                enterStudentGrades(students, &studentCount);
                break;
            case 'b':
                displayStudentGrades(students, studentCount);
                break;
            case 'c':
                searchStudentGrades(students, studentCount);
                break;
            case 'd':
                gradeRanking(students, studentCount);
                break;
            case 'e':
                if (exitSystem()) return 0;
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}

void displayWelcomeScreen() {
    printf("設計個人化風格\n");
    puts("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
    puts("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
    puts("EE                                                        EE");
    puts("EE               eeeeeeeeeeeeeeeee                        EE");
    puts("EE               e                                        EE");
    puts("EE               e                                        EE");
    puts("EE               e                                        EE");
    puts("EE               eeeeeeeeeeeeeeeee                        EE");
    puts("EE               e                                        EE");
    puts("EE               e                                        EE");
    puts("EE               e                                        EE");
    puts("EE               eeeeeeeeeeeeeeeee                        EE");
    puts("EE                                                        EE");
    puts("EE                        11                              EE");
    puts("EE                       111                              EE");
    puts("EE                     11111                              EE");
    puts("EE                        11                              EE");
    puts("EE                        11                              EE");
    puts("EE                        11                              EE");
    puts("EE                        11                              EE");
    puts("EE                 1111111111111111                       EE");
    puts("EE                                                        EE");
    puts("EE              bbbbbbbbbbbbbbbbbb                        EE");
    puts("EE              b                 b                       EE");
    puts("EE              b                  b                      EE");
    puts("EE              b                 b                       EE");
    puts("EE              bbbbbbbbbbbbbbbbbb                        EE");
    puts("EE              b                 b                       EE");
    puts("EE              b                  b                      EE");
    puts("EE              b                 b                       EE");
    puts("EE              bbbbbbbbbbbbbbbbbb                        EE");
    puts("EE                                                        EE");
    puts("EE                                                        EE");
    puts("EE                       444                              EE");
    puts("EE                     44444                              EE");
    puts("EE                  44  4444                              EE");
    puts("EE                4444  4444                              EE");
    puts("EE              4444444444444444                          EE");
    puts("EE                       444                              EE");
    puts("EE                       444                              EE");
    puts("EE                       444                              EE");
    puts("EE                       444                              EE");
    puts("EE                                                        EE");
    puts("EE                                                        EE");
    puts("EE                0000000000000000                        EE");
    puts("EE                00            00                        EE");
    puts("EE                00            00                        EE");
    puts("EE                00            00                        EE");
    puts("EE                00            00                        EE");
    puts("EE                00            00                        EE");
    puts("EE                00            00                        EE");
    puts("EE                00            00                        EE");
    puts("EE                00            00                        EE");
    puts("EE                00            00                        EE");
    puts("EE                0000000000000000                        EE");
    puts("EE                                                        EE");
    puts("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
    puts("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE\n");
    
    

    printf("==========================================\n");
    printf("||                                      ||\n");
    printf("||     WELCOME TO SIMPLE GRADE SYSTEM   ||\n");
    printf("||                                      ||\n");
    printf("||   Please enter your password to      ||\n");
    printf("||   access the system.                 ||\n");
    printf("||                                      ||\n");
    printf("||   Default password is: 2024          ||\n");
    printf("||                                      ||\n");
    printf("==========================================\n");
}

int verifyPassword() {
    int attempts = 0, input;

    while (attempts < 3) {
        printf("Enter 4-digit password: ");
        scanf("%d", &input);

        if (input == PASSWORD) {
            printf("Password correct. Welcome!\n");
            return 1;
        } else {
            printf("Incorrect password. Try again.\n");
            attempts++;
        }
    }

    return 0;
}

void displayMainMenu() {
    printf("|-----------[Grade System]----------|\n");
    printf("|  a. Enter student grades          |\n");
    printf("|  b. Display student grades        |\n");
    printf("|  c. Search for student grades     |\n");
    printf("|  d. Grade ranking                 |\n");
    printf("|  e. Exit system                   |\n");
    printf("|-----------------------------------|\n");
    printf("Please choose an option: ");
}

void enterStudentGrades(Student students[], int* studentCount) {
    if (*studentCount >= MAX_STUDENTS) {
        printf("Cannot enter more students. Maximum number of students reached.\n");
        return;
    }

    int n,i;
    printf("Enter the number of students (5-10): ");
    scanf("%d", &n);

    while (n < 5 || n > 10 || n + *studentCount > MAX_STUDENTS) {
        printf("Invalid number of students. Please enter a number between 5 and 10: ");
        scanf("%d", &n);
    }

      for (i = 0; i < n; ++i) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[*studentCount].name);
        printf("Enter 6-digit student ID for %s: ", students[*studentCount].name);
        scanf("%d", &students[*studentCount].id);

        while (students[*studentCount].id < 100000 || students[*studentCount].id > 999999) {
            printf("Invalid ID. Please enter a 6-digit student ID: ");
            scanf("%d", &students[*studentCount].id);
        }

        printf("Enter math grade for %s: ", students[*studentCount].name);
        scanf("%d", &students[*studentCount].math);
        while (students[*studentCount].math < 0 || students[*studentCount].math > 100) {
            printf("Invalid grade. Please enter a number between 0 and 100: ");
            scanf("%d", &students[*studentCount].math);
        }

        printf("Enter physics grade for %s: ", students[*studentCount].name);
        scanf("%d", &students[*studentCount].physics);
        while (students[*studentCount].physics < 0 || students[*studentCount].physics > 100) {
            printf("Invalid grade. Please enter a number between 0 and 100: ");
            scanf("%d", &students[*studentCount].physics);
        }

        printf("Enter english grade for %s: ", students[*studentCount].name);
        scanf("%d", &students[*studentCount].english);
        while (students[*studentCount].english < 0 || students[*studentCount].english > 100) {
            printf("Invalid grade. Please enter a number between 0 and 100: ");
            scanf("%d", &students[*studentCount].english);
        }

        students[*studentCount].average = (students[*studentCount].math +
                                           students[*studentCount].physics +
                                           students[*studentCount].english) / 3.0f;
        (*studentCount)++;
    }
}

void displayStudentGrades(const Student students[], int studentCount) {
	int i;
    printf("------------------------------------------\n");
    printf("Name\tID\tMath\tPhysics\tEnglish\tAverage\n");
    printf("------------------------------------------\n");
    
    for (i = 0; i < studentCount; ++i) {
        printf("%s\t%d\t%d\t%d\t%d\t%.1f\n", students[i].name, students[i].id,
               students[i].math, students[i].physics, students[i].english, students[i].average);
    }
    printf("Press any key to return to the main menu...\n");
    getchar(); // Clear the buffer
    getchar(); // Wait for user input
}

void searchStudentGrades(const Student students[], int studentCount) {
	int i;
    char searchName[50];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

    for (i = 0; i < studentCount; ++i) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Name\tID\tMath\tPhysics\tEnglish\tAverage\n");
            printf("%s\t%d\t%d\t%d\t%d\t%.1f\n", students[i].name, students[i].id,
                   students[i].math, students[i].physics, students[i].english, students[i].average);
            printf("Press any key to return to the main menu...\n");
            getchar(); // Clear the buffer
            getchar(); // Wait for user input
            return;
        }
    }
    printf("Student not found. Press any key to return to the main menu...\n");
    getchar(); // Clear the buffer
    getchar(); // Wait for user input
}

void gradeRanking(Student students[], int studentCount) {
    Student temp;
    int i,j;

    for (i = 0; i < studentCount - 1; ++i) {
    	
        for (j = 0; j < studentCount - 1 - i; ++j) {
            if (students[j].average < students[j + 1].average) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("Ranking by average grade:\n");
    printf("Name\tID\tAverage\n");
    for (i = 0; i < studentCount; ++i) {
        printf("%s\t%d\t%.1f\n", students[i].name, students[i].id, students[i].average);
    }
    printf("Press any key to return to the main menu...\n");
    getchar(); // Clear the buffer
    getchar(); // Wait for user input
}

int exitSystem() {
    char confirm;
    printf("Are you sure you want to exit? (y/n): ");
    while (1) {
        scanf(" %c", &confirm);
        if (confirm == 'y' || confirm == 'Y') {
            return 1;
        } else if (confirm == 'n' || confirm == 'N') {
            return 0;
        } else {
            printf("Invalid input. Are you sure you want to exit? (y/n): ");
        }
    }
}

//心得:這次成績系統作業，增進了我對於迴圈的熟悉度並且再次訓練自己解決問題的能力。這次因為有前幾次的經驗過程中進行都算順利，但在最後所有程式完成時我發現了一個很大的問題程式執行不出來。在費盡千辛萬苦後，在網路上查到.c與cpp編寫上有哪些不同，最後也從中發現自己的錯誤在for迴圈中使用int，更改後程式就正確了。也透過經驗這樣的累積，讓我在下次編寫程式時會更印象深刻不讓自己再次犯同樣的問題。最後，這學期的課程很高興有這麼好的老師與助教帶領我們學習讓我獲益良多，本人也知道自己有哪些地方不足所以以有空時會多練習寫不同的程式。  


