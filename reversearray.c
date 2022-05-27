//Reverse the Array
#include<stdio.h>
int main(){
    int size;
    printf("enter the sizze of array\n");
    scanf("%d",&size);
    int array[size];
    printf("enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The entered array is:\n");
    for(int j=0;j<size;j++){
        printf("%d\t",array[j]);
    }
     


     for(int l=0;l<size-l-1;l++){
        int temp;
        temp=array[l];
        array[l]=array[size-1-l];
        array[size-1-l]=temp;
     }

     printf("\nThe reverse array is:\n");
     for(int h=0;h<size;h++){
         printf("%d\t",array[h]);
     }

    
}

