#include <stdio.h>
int main()
{
    int rr[2] = {1,999};
    printf("%u\n%u",&rr[0],&rr[1]);
    printf("\n");
    printf("%p\n%p",&rr[0],&rr[1]);
    //u can see the change in size upto 4bits in output
    return 0;
}