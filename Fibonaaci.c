#include <stdio.h>

int main() {
    int n1=0, n2=1, n3, count=100;
    printf("%d\n",n1);
    printf("%d\n",n2);
    for(int i=2;i<count;++i)
    {
        n3=n1+n2;
        printf("%d\n",n3); 
    
    n1=n2;
    n2=n3;
    
    }
    return 0;
}
