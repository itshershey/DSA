//linear search
#include <stdio.h>
int loc=-1;
void search(int a[], int n, int x)
{
    int j;
    for (j = 0; j < n; j++)
        if (a[j] == x)
            loc= j;
}

int main()
{
    int n,a[100],x;
    printf("enter size of array\n");
    scanf("%d",&n);
  printf("enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("enter element to be searched\n");
    scanf("%d",&x);
   search(a,n,x);
   
    if(loc== -1)
    {
    printf("Element is not present in array\n");

    }
    else{
    printf("Element is present at index %d\n",loc);
    }

}
