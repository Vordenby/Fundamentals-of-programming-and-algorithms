#include <stdio.h>

#define Mor_mile 1.852 // meters
#define Suh_mile 1.609 // km
#define Rome_mile 1475 // meters
#define OgR_mile 7.468 // km
#define Geo_mile 7412.6 // km

int choosing_number() 

{

    int K;
    
    printf("Введите нужную милю: \n 1 - Морская\n 2 - Сухопутная\n 3 - Римская\n 4 - Старорусская\n 5 - географическая\n");
    scanf("%d", &K);

    return K;

}

int main() 
{

    int mile, choosing_mile;

    float result;

    char k;
    
    printf("Введите кол-во миль: ");
    scanf("%d", &mile);

    choosing_mile = 0;

    while ( choosing_mile != 1 && choosing_mile != 2 && choosing_mile != 3 && choosing_mile != 4 && choosing_mile != 5 )
    {

        choosing_mile = choosing_number();

        if (choosing_mile == 1) {result = Mor_mile*mile; k = ' ';}
        else if (choosing_mile == 2) {result = Suh_mile*mile; k = 'к';}
        else if (choosing_mile == 3) {result = Rome_mile*mile; k =' ';}
        else if (choosing_mile == 4) {result = OgR_mile*mile; k ="к";}
        else if (choosing_mile == 5) {result = Geo_mile*mile; k ="к";}

    }
    
    printf("Ответ: %.2f %cм \n", k);
    return 0;

}