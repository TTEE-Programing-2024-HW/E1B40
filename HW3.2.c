#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define MAX 20

void menu(); // �ŧi�Ƶ{��
void afunction(char main[10][10]);
char bfunction(char main[10][10]);
char cfunction(char main[10][10]);
int main()
{

    int password, count = 0, i, j, x, y;
    char ch, ch2;

    printf("�]�p�ۤv���ʭ�\n");
    // ��ܫʭ��A�o�̬ٲ����Ƴ���
    // ... (�ٲ������ʭ��N�X)
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
    puts("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
    
    ch = getch();
    char seat[10][10] = // �y���]�p
        {
            {'\\', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
            {'9', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'8', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'7', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'6', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'5', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'4', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'3', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'2', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'1', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};
    srand(time(NULL)); // �H�����l
    for (i = 0; i < 10; i++)
    {
        x = rand() % 9 + 1;
        y = rand() % 9 + 1;
        for (;;)
        {
            if (seat[x][y] == '*')
            {
                srand(time(NULL));
                x = rand() % 9 + 1;
                y = rand() % 9 + 1;
            }
            else
            {
                break;
            }
        }
        seat[x][y] = '*';
    }
    system("cls");
    printf("�п�J�|��K�X:\n"); // �K�X2024
    fflush(stdin);
    scanf("%d", &password);
    for (;;)
    {
        if (password == 2024)
        {
            system("cls");
            printf("�w��!�I�����N���~��");
            ch = getch();
            for (;;)
            {
                system("cls");
                     printf("===========================\n");
    	      	     printf("|| a. Available seats    ||\n");
    	      	     printf("|| b. Arrange for you    ||\n");
			         printf("|| c. Choose by yourself ||\n");
			         printf("|| d. Exit               ||\n");
    	             printf("===========================\n");   	
                ch = getch();
                switch (ch)
                {
                case 'a':
                case 'A':
                    afunction(seat);
                    break;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
