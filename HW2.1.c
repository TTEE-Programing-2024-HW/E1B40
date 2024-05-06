#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int a = 0, b = 0, pass, i, j, f, g;
    char ch, h;
    
    printf("設計自己的封面\n");
    puts("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
puts("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
puts("EE                                                        EE");
puts("EE               eeeeeeeeeeeeeeeee                        EE");
puts("EE               e                                        EE");
puts("EE               e                                        EE");
puts("E                e                                        EE");
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
printf("請輸入四位password:");
    scanf("%d", &pass);
    while (1) {
        switch (a) {
            case 0:
                if (pass == 2024) {
                    printf("密碼正確\n");
                    system("CLS");
                    a = 1;
                    break;
                } else if (pass != 2024 && b < 3) {
                    b = b + 1;
                    printf("重新輸入\n");
                    scanf("%d", &pass);
                    break;
                } else if (b == 3) {
                    return 0;
                }
           case 1:
                system("CLS");
                printf("| a.劃出n階直角三角形 |\n");
                printf("| b.顯示九九乘法表    |\n");
                printf("| c.結束              |\n");
                printf("請輸入一個字元\n");
                scanf(" %c", &ch);
                switch (ch) {
                    case 'a':
                    case 'A':
                        a = 2;
                        break;
                    case 'b':
                    case 'B':
                        a = 3;
                        break;
                    case 'c':
                    case 'C':
                        a = 4;
                        break;
                }
                system("CLS");
                break;
            case 2:
                printf("請輸入一個'a'到'n'的字元\n");
                scanf(" %c", &ch);
                
                for (i = 0; i <= ch - 'a'; i++) {
                    for (j = 0; j < ch - 'a' - i; j++) {
                        printf(" ");
                    }
                    for (j = 0; j <= i; j++) {
                        printf("%c", ch - j);
                    }
                    printf("\n");
                }
                
                system("pause");
                system("CLS");
                a = 1;
                break;
            case 3:
                printf("請輸入一個1~9的整數\n");
                scanf("%d", &f);
                if (f >= 1 && f <= 9) {
                    for (g = 1; g <= f; g++) {
                        for (i = 1; i <= f; i++) {
                            printf("%d*%d=%2d ", g, i, g * i);
                        }
                        printf("\n");
                    }
                } else {
                    printf("警告: 數字必須在1到9之間\n");
                }
                system("pause");
                a = 1;
                break;
            case 4:
                printf("Continue? (y/n)\n");
                scanf(" %c", &h);
                switch (h) {
                    case 'y':
                    case 'Y':
                        a = 1;
                        break;
                    case 'n':
                    case 'N':
                        return 0;
                    default:
                        printf("錯誤: 請重新輸入\n");
                        break;
                        
                        
                    }
                }
        }
    }




