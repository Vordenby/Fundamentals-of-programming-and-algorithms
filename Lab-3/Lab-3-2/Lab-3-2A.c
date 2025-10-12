#include <stdio.h>

#define Mor_mile 1.852 / 1000
#define Suh_mile 1.609
#define Rome_mile 1475 / 1000
#define OgR_mile 7.468
#define Geo_mile 7412.6

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


    printf("/%.2f морская /\n/ %.2f сухопутная /\n/ %.2f римская /\n/ %.2f старорусская /\n/ %.2f географическая /\n", Mor_mile*mile, Suh_mile*mile, Rome_mile*mile, OgR_mile*mile, Geo_mile*mile);
    return 0;

}