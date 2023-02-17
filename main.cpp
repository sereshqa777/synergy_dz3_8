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
    int arif = 0;
 
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
        arif += number[i];
    }
 	
 	printf("===========================\n");
    printf("1) Maximum %i:\n",max);
    printf("2) Minimum %i:\n",min);
    printf("3) Summa %i:\n",arif);
    printf("4) Arithmetic mean: %i\n",arif/n);
    printf("===========================");
 
    return 0;
}
