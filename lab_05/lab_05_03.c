#include <stdio.h>

int main()
{
    int N, num;
    int sum = 0;
    int count = 0;
    int i = 0;
    printf("Enter the number of numbers to be entered [N]: ");
    scanf("%d", &N);

    // calculates for case 1
    printf("\nCase 1: Loop terminates after encountering -ve number\n");
    printf("Enter any %d numbers: \n", N);

    do
    {
        printf("-> ");
        scanf("%d", &num);
        if(num < 0)
        {
            continue;
        }
        sum += num;
        count++;
        i++;
    }while(i < N && num >= 0);

    float avg = (float)sum / count;

    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", avg);


    // calculates for case 2
    printf("\nCase 2: -ve numbers are ignored from the calculations\n");
    printf("Enter any %d numbers: \n", N);
    sum = 0;
    count = 0;
    i = 0;
    while(i < N)
    {
      printf("-> ");
      scanf("%d", &num);
      if(num < 0)
      {
        i++;
        continue;
      }
      sum += num;
      count++;
      i++;
    }

    avg = (float)sum / count;
    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", avg);
    return 0;
}
