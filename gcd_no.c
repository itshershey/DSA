#include <stdio.h>

int main() {
    int n1, n2, i, gcd_no;
    printf("enter two number:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    
    for(i=1;i<n1&&i<n2;++i)
    {
        if(n1%i==0 && n2%i==0)
        gcd_no=i;
    }
            printf("the gcd of these two numbers is %d",gcd_no);

    return 0;
}
