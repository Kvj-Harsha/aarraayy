#include <stdio.h>
int main()
{
    int rr[2] = {1,2};
    printf("%u\n%u",&rr[0],&rr[1]);
    //u can see the change in size upto 4bits in output
    return 0;
}