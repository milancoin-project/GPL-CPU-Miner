#include <stdio.h> 
main() 
{

    int l = 0;
int istart = 1397756800;
int isend = 1387756800;
    if (istart <= isend)
        return 4;

    unsigned long int s = istart - isend;
    while ((s >> 1) > 3) {
      l += 1;
      s >>= 1;
    }

    s &= 3;

    int n = (l * 170 + s * 25 - 2320) / 100;

    if (n < 0) n = 0;

    if (n > 255)
        printf("GetNfactor(%d) - something wrong(n == %d)\n", istart, n);

    unsigned char N = (unsigned char)n;
    printf("GetNfactor: %d -> %d %d : %d / %d\n", istart -isend, l, s, n, N);
	
    printf("Hello World!\n"); 
}