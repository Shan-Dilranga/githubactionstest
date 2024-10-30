#include<stdio.h>


int calsum(int x, int y){
    return x+y;
}

int main(){

    int resultarr[6], i;

    resultarr[0]=calsum(2,5);
    resultarr[1]=calsum(6,5);
    resultarr[2]=calsum(2,13);
    resultarr[3]=calsum(23,45);
    resultarr[4]=calsum(21,54);
    resultarr[5]=calsum(21,35);

    for ( i = 0; i < sizeof(resultarr)/sizeof(resultarr[0]); i++)
    {
        printf("result no %d is : %d\n",i+1,resultarr[i] );
    }
    
    printf("Github connection checking\n");
    return 0;
}