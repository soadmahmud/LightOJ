#include <stdio.h>

int main()
{
    
    int test;
    
    scanf("%d", &test);
    
    while(test--)
    {
        int n;
        
        scanf("%d", &n);
        
        if(n > 10)
            printf("10 %d\n", n - 10);
        
        else
           printf("0 %d\n", n);
    }
    
    return 0;
}
