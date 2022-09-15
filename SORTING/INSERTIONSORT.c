
#include <stdio.h>
void insertionSort(int array[], int N) {
  for (int i = 1; i < N; i++) {
    int key = array[i];
    int j = i - 1;
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
int main() {
  int N;
  scanf("%d",&N);
  int array[N];
  for(int i=0;i<N;i++)
    {
      scanf("%d",&array[i]);
    }
  insertionSort(array,N);
  for(int i=0;i<N;i++)
    {
      printf("%d ",array[i]);
    }
}
