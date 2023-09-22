#include<stdio.h>
int main()
{
    int n,i,j;  //assigning integer n,i & j.
    scanf("%d",&n);  //taking array size
    int A[n];
    printf("Enter Array Elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);  //taking array elements
    }
    printf("Unique Elements:\n");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++) //taking loop where every value is checked with respect to each value
        {
            if(A[i]!=A[j])   //condition to find the unique numbers
            {
                printf("%d\n",A[i]);  //printing the unique numbers
                break;
            }
        }
    }
}
