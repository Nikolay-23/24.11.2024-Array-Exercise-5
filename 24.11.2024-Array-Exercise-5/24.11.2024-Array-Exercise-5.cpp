

#include <iostream>
#include <stdio.h>





    int main() {
        int arr[100];
        int N;

       
        scanf_s("%d", &N);

        
        if (N <= 0 || N > 100) {
            printf("Error\n");
            return 1;
        }

        
        for (int i = 0; i < N; ++i) {
            scanf_s("%d", &arr[i]);
        }

       
        int min_value = arr[0];
        int max_value = arr[0];
        int indexOfMax = 0;

        for (int i = 1; i < N; ++i) {
            if (arr[i] < min_value) {
                min_value = arr[i];
            }
            if (arr[i] > max_value) {
                max_value = arr[i];
                indexOfMax = i;
                
            }
            
        }
        printf("arr[%d]: %d\n",indexOfMax);
       
        printf("Min element : % d", min_value);
        

                
    }


