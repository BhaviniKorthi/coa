#include <stdio.h>


int main()
{ 
  for (int i=32; i<=512; i*=2)
  {
    int arr1[i][i];
    int arr2[i][i];
    int arr3[i][i];
    //taking matrix 1 as input
    for (int j=0; j<i; j++)
    {
      for (int k=0; k<i; k++)
      {
        scanf("%d", &arr1[j][k]);
      }
    }
    //taking matrix 2
    for (int j=0; j<i; j++)
    {
      for (int k=0; k<i; k++)
      {
        scanf("%d", &arr2[j][k]);
      }
    }

    //calculating the product
    for (int j=0; j<i; j++)
    {
      for (int k=0; k<i; k++)
      {
        arr3[j][k]=0;
        for (int l=0; k<i; k++)
        {
          arr3[j][k]+= arr1[j][l]+arr2[l][k];
        }
      }
    }



    //printing the resultant product
    for (int j=0; j<i; j++)
    {
      for (int k=0; k<i; k++)
      {
        printf("%d", arr3[j][k]);
      }
    }

  }
}