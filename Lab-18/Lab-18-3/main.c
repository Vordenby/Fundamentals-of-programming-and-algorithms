#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef enum {
    MALE,
    FEMALE
} Gender;

typedef enum {
    ENGINEER,
    PROGRAMMER,
    DESIGNER,
    OTHER
} Position;

struct Employee {
    char surname[50];      
    char name[50];         
    char patronymic[50];   
    Gender gender;         
    Position position;
    int day;               
    int month;             
    int year;              
};

int isRetirementAge(struct Employee emp, int currentYear) {
    int age = currentYear - emp.year;
    
    if (emp.position == ENGINEER) {
        if (emp.gender == MALE) {
            return age >= 65;
        } else if (emp.gender == FEMALE) {
            return age >= 60;
        }
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, ".UTF-8");

    struct Employee employees[10] = {
        {"Иванов", "Александр", "Петрович", MALE, ENGINEER, 15, 3, 1980},
        {"Петрова", "Мария", "Сергеевна", FEMALE, ENGINEER, 22, 7, 1965},
        {"Сидоров", "Владимир", "Иванович", MALE, PROGRAMMER, 8, 11, 1985},
        {"Козлова", "Елена", "Алексеевна", FEMALE, ENGINEER, 30, 12, 1962},
        {"Васильев", "Дмитрий", "Сергеевич", MALE, ENGINEER, 5, 9, 1945},
        {"Морозова", "Анна", "Викторовна", FEMALE, DESIGNER, 18, 4, 1970},
        {"Федоров", "Николай", "Алексеевич", MALE, ENGINEER, 25, 6, 1958},
        {"Смирнова", "Ольга", "Михайловна", FEMALE, ENGINEER, 12, 8, 1963},
        {"Кузнецов", "Алексей", "Владимирович", MALE, ENGINEER, 3, 1, 1950},
        {"Попова", "Татьяна", "Петровна", FEMALE, ENGINEER, 28, 10, 1961}
    };
    
    int currentYear = 2024;
    int count = 0;
    
    printf("Сотрудники - инженеры пенсионного возраста:\n");
    printf("===========================================\n");
    
    for (int i = 0; i < 10; i++) {
        if (isRetirementAge(employees[i], currentYear)) {
            printf("Фамилия: %s\n", employees[i].surname);
            printf("Имя: %s\n", employees[i].name);
            printf("Отчество: %s\n", employees[i].patronymic);
            
            if (employees[i].gender == MALE) {
                printf("Пол: мужской\n");
            } else {
                printf("Пол: женский\n");
            }
            
            switch(employees[i].position) {
                case ENGINEER:
                    printf("Должность: инженер\n");
                    break;
                case PROGRAMMER:
                    printf("Должность: программист\n");
                    break;
                case DESIGNER:
                    printf("Должность: дизайнер\n");
                    break;
                default:
                    printf("Должность: другое\n");
                    break;
            }
            
            printf("Дата рождения: %02d.%02d.%d\n", 
                   employees[i].day, employees[i].month, employees[i].year);
            
            int age = currentYear - employees[i].year;
            printf("Возраст: %d лет\n", age);
            printf("-------------------------------------------\n");
            count++;
        }
    }
    
    if (count == 0) {
        printf("Инженеры пенсионного возраста не найдены.\n");
    } else {
        printf("Найдено инженеров пенсионного возраста: %d\n", count);
    }
    
    return 0;
}
