#include <stdio.h>
#include <math.h>

float result (int K, float *resistance);



float result(int K, float *resistance)
{
    int amount_resistances = 0;
    
    for (int i = 0; i < K; i++)
    {
        amount_resistances = amount_resistances + resistance[i];
    }
    
    
    float resistance_final = amount_resistances / K;
    
    float amount_square_diff = 0;
    
    for (int i = 0; i < K; i++)
    {
        amount_square_diff = amount_square_diff + pow(resistance[i] - resistance_final, 2);
    }
    
    float deviation = pow(amount_square_diff, 0.5) / K;
    
    printf("%f+-%f  (cопротивление +- среднеквадратичное отклонение)\n", resistance_final, deviation);
    
    
    return resistance_final;
}
