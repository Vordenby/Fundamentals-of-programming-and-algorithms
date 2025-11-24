#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int Robot_Figure(void) {
    return 1 + rand() % 3;
}

int main(void) {
    setlocale(LC_ALL, ".UTF-8");
    
    short int ISSTARTED = 0, Score_User = 0, Score_Robot = 0;

    char scissors[] = "ножницы";
    char paper[] = "бумагу";
    char rock[] = "камень";

    while (1) {
        if (ISSTARTED == 0) {
            printf("КАМЕНЬ-НОЖНИЦЫ-БУМАГА\n");
            printf("Начать игру - 1 \t\t Выйти - e\n> ");
            
            char c;
            scanf(" %c", &c);
            
            if (c == '1') {
                printf("ИГРА НАЧИНАЕТСЯ!\nДля выхода, введите ( 0 )\n");
                ISSTARTED = 1;
                Score_User = 0;
                Score_Robot = 0;
            } else if (c == 'e') {
                break;
            } else {
                printf("Вы выбрали не тот символ!\n");
            }
            continue;
        }

        printf("\nТЕКУЩИЙ СЧЁТ ИГРЫ\n\tЧеловек %d | Робот %d\n", Score_User, Score_Robot);

        int user;
        int robot = Robot_Figure();
        
        char user_c[30] = "";
        char robot_c[30] = "";

        printf("Робот выбрал свой вариант!\nВыберите:\n1 - камень\n2 - ножницы\n3 - бумага\n> ");
        scanf("%d", &user);

        switch (user) {
            case 1:
                strcpy(user_c, rock);
                break;
            case 2:
                strcpy(user_c, scissors);
                break;
            case 3:
                strcpy(user_c, paper);
                break;
            case 0:
                ISSTARTED = 0;
                Score_Robot = 0;
                Score_User = 0;
                printf("Выход из игры.\n");
                continue;
            default:
                printf("Вы выдали не тот жест рукой!\n");
                continue;
        }

        switch (robot) {
            case 1:
                strcpy(robot_c, rock);
                break;
            case 2:
                strcpy(robot_c, scissors);
                break;
            case 3:
                strcpy(robot_c, paper);
                break;
        }

        _Bool win_of_user = (user == 1 && robot == 2) || (user == 2 && robot == 3) || (user == 3 && robot == 1);
        _Bool win_of_robot = (robot == 1 && user == 2) || (robot == 2 && user == 3) || (robot == 3 && user == 1);

        printf("Вы показали: %s \t робот показал: %s\n", user_c, robot_c);

        if (win_of_user) {
            printf("Вы победили!\n");
            Score_User += 1;
        } else if (win_of_robot) {
            printf("Победил робот.\n");
            Score_Robot += 1;
        } else {
            printf("Ничья!\n");
        }
    }

    return 0;
}
