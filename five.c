#include <stdio.h> 
#include <stdlib.h> 

size_t length(const char* msg) { 
    size_t value = 0; 
    while (!value) { 
        printf("%s", msg); 
        scanf("%zu", &value); 
    } 
    return value; 
} 

int main(void) { 
    size_t n = length("Size of square matrix (n x n)(<10): ");
    int** matrix = (int**)malloc(n * sizeof(int*)); 

        if (matrix == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    for (size_t i = 0; i < n; ++i) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        if (matrix[i] == NULL) {
            for (size_t j = 0; j < i; ++j) free(matrix[j]);
            free(matrix);
            fprintf(stderr, "Memory allocation failed.\n");
            return 1;
        }
    }

    printf("Input matrix:\n");
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            printf("Element [%zu][%zu]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix output:\n");
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            printf("%10d ", matrix[i][j]);
        }
        putchar('\n');
    }

	int sum = 0, a = 0;  
        for (size_t i = 0; i < n; ++i) { 
            
            // calculating the main diagonal sum 
            sum = sum + matrix[i][i]; 
            
            // calculating the off diagonal sum 
            a = a + matrix[i][n - i - 1]; 
        } 
        
        printf("\nMain diagonal elements sum is = %d\n", sum); 
        printf("Off-diagonal elements sum is = %d\n", a); 

        for (size_t i = 0; i < n; ++i) free(matrix[i]); 
        free(matrix); 
    
    return 0; 
}
