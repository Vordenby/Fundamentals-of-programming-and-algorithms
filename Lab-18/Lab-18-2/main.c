/*int main() {

    setlocale(LC_ALL, ".UTF-8");

    struct tm *mytime;

    time_t t;

    t = time(NULL);
    mytime = localtime(&t);

    printf("\nМосковское время %02d:%02d:%02d \n", mytime ->tm_hour, mytime ->tm_min, mytime ->tm_sec);
    printf("Сегодня %d-й день %d года", mytime ->tm_mday, 1900 + mytime ->tm_year);

    return 0;

} */

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

/* ------------------------------------------------------------------ */
/*  Функция: вывод строки внутри рамки из '*' (80 символов)            */
/* ------------------------------------------------------------------ */
static void print_centered(const char *msg)
{
    const int frame_width = 80;               /* общая ширина рамки */
    const int inner_w     = frame_width - 2;  /* пространство между звёздочками */

    size_t msg_len = strlen(msg);

    /* ---------- Верхняя строка ----------
       просто печатаем 80 звездочек                */
    for (int i = 0; i < frame_width; ++i) putchar('*');
    putchar('\n');

    /* ---------- Текст в рамке ----------
       Если сообщение слишком длинное – выводим без выравнивания,
       чтобы не «порвать» рамку.                          */
    if (msg_len > (size_t)inner_w)
    {
        printf("*%s*\n", msg);
    }
    else
    {
        /* Вычисляем левый и правый отступы.
           При нечётной разнице левый отступ на 1 больше правого. */
        int diff      = inner_w - (int)msg_len;
        int left_pad  = diff / 2 + (diff % 2);   /* +1, если diff нечетно */
        int right_pad = diff / 2;

        printf("*%*s%s%*s*\n",
               left_pad, "",          /* левый отступ */
               msg,
               right_pad, "");         /* правый отступ */
    }

    /* ---------- Нижняя строка ----------
       опять 80 звездочек                        */
    for (int i = 0; i < frame_width; ++i) putchar('*');
    putchar('\n');
}

/* ------------------------------------------------------------------ */
/*  Основная функция                                                   */
/* ------------------------------------------------------------------ */
int main(void)
{
    setlocale(LC_ALL, ".UTF-8");

    /* Получаем текущее время */
    time_t t = time(NULL);
    struct tm *mytime = localtime(&t);

    /* Формируем строки времени и даты */
    char time_str[100];
    char date_str[100];

    snprintf(time_str, sizeof time_str,
             "Московское время %02d:%02d:%02d",
             mytime->tm_hour, mytime->tm_min, mytime->tm_sec);

    snprintf(date_str, sizeof date_str,
             "Сегодня %d-й день %d года",
             mytime->tm_mday, 1900 + mytime->tm_year);

    /* Полное сообщение: две строки, разделённые переводом \n */
    char full_msg[200];
    snprintf(full_msg, sizeof full_msg, "%s\n%s", time_str, date_str);

    /* Выводим рамку с выравниванием */
    print_centered(full_msg);
    
    system("pause");
    return 0;
}
