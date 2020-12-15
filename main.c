#include <stdio.h>
#include <stdlib.h>
int const n=5;
void QuickSort ( int A[], int from, int to, int *s, int *p )
{
 int x, i, j, temp;
 if ( from >= to ) return;
 i = from;
 j = to;
 x = A[(from+to)/2];
 while ( i <= j ) {
 while ( A[i] < x ) {i ++; *s=*s+1;}
 while ( A[j] > x ) {j --; *s=*s+1;}
 if ( i <= j ) {
        if(i!=j)
        {
       temp = A[i]; A[i] = A[j]; A[j] = temp;
      *p=*p+1;
        }
  i ++;
 j --;

 }
 }
QuickSort ( A, from, j, s, p);
QuickSort ( A, i, to, s, p);
}
int main()
{
    int A[n], i, k, s=0, p=0;
    printf("Enter an array of %d elements\n", n);
    for ( i=0; i<n; i++) scanf ("%d",&A[i]);
    QuickSort ( A, 0, n-1, &s, &p);
    for ( i=0; i<n; i++) printf ("%d ",A[i]);
    printf("\n Number of comparisons %d. Number of permutations %d.", s, p);
    return 0;
}
