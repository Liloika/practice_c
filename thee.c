#include <stdio.h>
#include <stdlib.h>

int main() { 
   int n, i, min, max;
   printf("Enter the number of elements in the array:");
   scanf("%d", &n);

   int *a = (int*)malloc(n * sizeof(int));
    // Ввод элементов массива
    for (i = 0; i<n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }   

//for (i=0; i<n; i++) {
//   printf("Enter the array elements %d\n", i);
//   scanf("%d", &a[i]);
//   printf(" ");
//}

min=a[0];
max=a[0];

for (i=1; i<n; i++) {
if (a[i]<min){min=a[i];};
if (a[i]>max){max=a[i];};

}

 printf("Max value %d\n",max);
 printf("Min value %d\n",min);

 free(a);
 return 0;

}
