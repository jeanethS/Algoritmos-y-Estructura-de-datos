#include <stdio.h>

void burbuja (int arr[], int n);
void imprimir (int arr[], int tam);
int main ()
{
  int arr[] = { 3, 9, 2, 15, 7, 2, 22, 8 };
  int n = sizeof (arr) / sizeof (arr[0]);
  burbuja (arr, n);
  imprimir (arr, n);
  return 0;
}

void burbuja (int arr[], int n)
{
  int temp, i, j;
  for (i = 0; i < n - 1; i++)  
    for (j = 0; j < n - i - 1; j++)
      if (arr[j] > arr[j + 1]){
          temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
      }
}

void imprimir (int arr[], int tam)
{
  int i;
  for (i = 0; i < tam; i++){
    printf ("%d ", arr[i]);
  }
}
