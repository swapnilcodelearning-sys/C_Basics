#include<stdio.h>
#include<stdint.h>
#include<limits.h>
#include<float.h>

int main()
{

    char chr ='A';
    printf("===Character Data Type===\n");
    printf("Char Data : %c, Size : %zu, Range : %d to %d\n",chr, sizeof(chr), 0, CHAR_MAX);

    short shrt1 = -22135;
    unsigned short shrt2 = 31412;
    printf("\n\n===Short Data Type===\n");
    printf("Signed Short : %hd, Size : %zu, Range : %d to %d\n", shrt1, sizeof(shrt1), SHRT_MIN, SHRT_MAX);
    printf("Unsigned Short : %hu, Size : %zu, Range : %d to %d\n",shrt2, sizeof(shrt2), 0 , USHRT_MAX);

    int int1 = -31451231;
    unsigned int int2 = 24412344;
    printf("\n\n===Integer Data Type===\n");
    printf("Signed Integer : %d, Size : %zu, Range : %d to %u\n", int1, sizeof(int1), INT_MIN, INT_MAX);
    printf("Unsigned Integer : %u, Size : %zu, Range : %u to %u\n", int2, sizeof(int2), 0, UINT_MAX);

    long lng1 = -23341212;
    unsigned long lng2 = 23434545211;
    printf("\n\n===Long Integer Data Type===\n");
    printf("Signed Long Integer : %ld, Size : %zu, Range : %ld to %lu\n",lng1, sizeof(lng1), LONG_MIN,LONG_MIN);
    printf("Unsigned Long Integer : %lu, Size : %zu, Range : %d to %lu\n",lng2, sizeof(lng2), 0, ULONG_MAX);

    float flt1 = 1242.4325;
    double dbl1 = 124124.123144141559f;
    printf("\n\n===Floating Data Type===\n");
    printf("Floating data type : %f, Size : %zu, Range : %e to %e\n", flt1, sizeof(flt1), FLT_MIN, FLT_MAX);
    printf("Double Data : %lf, Size : %zu, Range : %e to %e\n",dbl1, sizeof(dbl1), DBL_MIN, DBL_MAX);

    return 0;
}