#include <stdio.h>
#include <stdlib.h>
int compare(const void *p1,const void *p2)
{
    return *(int*)p1-*(int*)p2;
}
int main()
{
    int a[10]={9,8,7,1,2,5,4,3,0,6};
    qsort(a,10,sizeof(int),compare);
    for(int i=1;i<10;i++)printf("%d ",a[i]);
}
