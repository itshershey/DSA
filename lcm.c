#include <stdio.h>

int main() {
    int n1, n2, i, gcd_no, lcm_no;
    printf("enter two number:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    
    for(i=1;i<=n1&&i<=n2;++i)
    {
        if(n1%i==0 && n2%i==0)
        gcd_no=i;
    }
    lcm_no=(n1*n2)/gcd_no;
    
            printf("the lcm of these two numbers is %d", lcm_no);

    return 0;
}
