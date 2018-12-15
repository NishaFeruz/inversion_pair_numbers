#include<stdio.h>
int Inversion_pair(int Arr[],int x) ///x=last index
{
    int inversion_pair=0,i,small;
    small=Arr[x];
    for(i=x-1;i>=0;i--)
    {
        if(Arr[i]>small)
            inversion_pair++;
    }
    return inversion_pair;
}
