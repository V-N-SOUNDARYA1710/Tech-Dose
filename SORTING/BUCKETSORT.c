#include <stdio.h>  
int getMax(int a[], int n) 
{  
  int max = a[0];  
  for (int i = 1; i < n; i++)  
    if (a[i] > max)  
      max = a[i];  
  return max;  
}  
void bucket(int a[], int n) 
{  
  int max = getMax(a, n);
  int bucket[max], i;  
  for (int i = 0; i <= max; i++)  
  {  
    bucket[i] = 0;  
  }  
  for (int i = 0; i < n; i++)  
  {  
    bucket[a[i]]++;  
  }  
  for (int i = 0, j = 0; i <= max; i++)  
  {  
    while (bucket[i] > 0)  
    {  
      a[j++] = i;  
      bucket[i]--;  
    }  
  }  
}  
void printArr(int a[], int n) 
{  
  for (int i = 0; i < n; ++i)  
    printf("%d ", a[i]);  
}  
int main()  
{  
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    } 
  bucket(a, n);   
  printArr(a, n);  
}  
