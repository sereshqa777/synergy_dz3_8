#include <stdio.h>
 
  
int main()
{
    int n = 0;
    printf("Vvedite kolichestvo elementov: ");
    scanf("%i",&n);
 
    int *number = new int[n];
 
    for (int i = 0; i < n; i++)
    {
    	printf("Vvedite element [%i]:",i+1);
    	scanf("%i",&number[i]);
    }
 
    int min = number[0];
    int max = number[0];
    int sum = 0;
    float arif = 0;
    
 
    for (int i = 0; i < n; i++)
    {
        if (number[i] < min)
        {
            min = number[i];
        }
        if (number[i] > max)
        {
            max = number[i];
        }
        sum += number[i];
        arif = sum/n;
    }
 	
 	printf("===========================\n");
    printf("1) Maximum %i:\n",max);
    printf("2) Minimum %i:\n",min);
    printf("3) Summa %i:\n",sum);
    printf("4) Arithmetic mean: %.2f\n",arif);
    printf("===========================");
 	
 	delete[] number;
    return 0;
}
