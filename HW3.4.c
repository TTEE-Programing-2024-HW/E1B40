#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define MAX 20

void menu(); // 宣告副程式
void afunction(char main[10][10]);
char bfunction(char main[10][10]);
char cfunction(char main[10][10]);
int main()
{

    int password, count = 0, i, j, x, y;
    char ch, ch2;

    printf("設計自己的封面\n");
    // 顯示封面，這裡省略重複部分
    // ... (省略長的封面代碼)
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
    char seat[10][10] = // 座位表設計
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
    srand(time(NULL)); // 隨機選位子
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
    printf("請輸入四位密碼:\n"); // 密碼2024
    fflush(stdin);
    scanf("%d", &password);
    for (;;)
    {
        if (password == 2024)
        {
            system("cls");
            printf("歡迎!點擊任意鍵繼續");
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
                case 'b':
                case 'B':
                    bfunction(seat);

                    break;
                case 'c':
                case 'C':
                    cfunction(seat);
                    break;
                case 'd':
                case 'D':
                    printf("Continue? (y/n)");
                     for (;;)
                    {
                        ch = getche();
                        if (ch == 89 || ch == 121)
                        {
                            break;
                        }
                        else if (ch == 78 || ch == 110)
                        {
                            system("pause");
                            return 0;
                        }
                        printf("請輸入正確格式!(y/n):");
                    }
                    break;
                default:
                    printf("enter correct format!");
                    ch = getch();
                    break;     
               }
            }
        }
        else
         {
             system("cls");
             count++;
             if (count == 3)
             {
                printf("錯誤密碼--%d 連續錯誤三次 程式結束", count);
                system("pause");
                return 0;
             }
             printf("錯誤密碼--%d 再次輸入:", count);
             fflush(stdin);
             scanf("%d", &password);
              }
         }
    }
    
    void afunction(char main[10][10]) // 顯示座位表
{
    system("cls");
    int i, j;
    char ch;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c", main[i][j]);
        }
        printf("\n");
    }
    ch = getch();
}
char bfunction(char main[10][10]) // 選坐位1~4 
{
    int x, y, i, j;
    char ch;
    system("cls");
    printf("座位(1~4):");
    for (;;)
    {
        ch = getche();
        if ('1' <= ch && ch <= '4')
        {
            system("cls");
            printf("%c 座位:\n", ch);
            break;
        }

        printf("\n請輸入正確格式!(1~4)");
    }
    
     switch (ch)
    {
    case '1':
        for (;;)
        {
            srand(time(NULL));
            x = rand() % 9 + 1;
            y = rand() % 9 + 1;
            if (main[x][y] == '-')
            {
                main[x][y] = '@';
                break;
            }
        }
        break;
    case '2':
        for (;;)
        {
            srand(time(NULL));
            x = rand() % 9 + 1;
            y = rand() % 9 + 1;
            if ((main[x][y] == '-') && (main[x][y + 1] == '-'))
            {
                main[x][y] = '@';
                main[x][y + 1] = '@';
                break;
            }
            else if ((main[x][y] == '-') && (main[x][y - 1] == '-'))
            {
                main[x][y] = '@';
                main[x][y - 1] = '@';
                break;
            }
        }
        break;
        
         case '3':
        for (;;)
        {
            srand(time(NULL));
            x = rand() % 9 + 1;
            y = rand() % 9 + 1;
            if ((main[x][y] == '-') && (main[x][y + 1] == '-') && (main[x][y + 2] == '-'))
            {
                main[x][y] = '@';
                main[x][y + 1] = '@';
                main[x][y + 2] = '@';
                break;
            }
            else if ((main[x][y] == '-') && (main[x][y - 1] == '-') && (main[x][y - 2] == '-'))
            {
                main[x][y] = '@';
                main[x][y - 1] = '@';
                main[x][y - 2] = '@';
                break;
            }
        }
        break;
    case '4':
        for (;;)
        {
            srand(time(NULL));
            x = rand() % 9 + 1;
            y = rand() % 9 + 1;
            if ((main[x][y] == '-') && (main[x][y + 1] == '-') && (main[x][y + 2] == '-') && (main[x][y + 3] == '-'))
            {
                main[x][y] = '@';
                main[x][y + 1] = '@';
                main[x][y + 2] = '@';
                main[x][y + 3] = '@';
                break;
            }
            else if ((main[x][y] == '-') && (main[x][y - 1] == '-') && (main[x][y - 2] == '-') && (main[x][y - 3] == '-'))
            {
                main[x][y] = '@';
                main[x][y - 1] = '@';
                main[x][y - 2] = '@';
                main[x][y - 3] = '@';
                break;
            }
            else if ((main[x][y] == '-') && (main[x][y + 1] == '-') && (main[x + 1][y] == '-') && (main[x + 1][y + 1] == '-'))
            {
                main[x][y] = '@';
                main[x][y + 1] = '@';
                main[x + 1][y] = '@';
                main[x + 1][y + 1] = '@';
                break;
            }
        }
        break;
    default:
    	break;
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c", main[i][j]);
        }
        printf("\n");
    }
    printf("同意嗎?(y/n)");
    ch = getch();
    for (;;)
    {
        if (ch == 'n' || ch == 'N') // 將@改成-
        {
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    if (main[i][j] == '@')
                    {
                        main[i][j] = '-';
                    }
                }
            }
            system("cls");
            break;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
