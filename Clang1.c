#include <stdio.h>
// #include <stdbool.h>
void mufunc(int myarr[], int len){
    
    int i;

    for ( i = 0; i < len; i++)
    {
        myarr[i] +=2;
    }
    for ( i = 0; i < len; i++)
    {
        printf(" %d ", myarr[i]);
    }
}


int main(){
/*int items = 50;
float cost_per_item = 9.99;
float total_cost = items * cost_per_item;
char currency = '$';

int total = (int)items * cost_per_item ;

printf("Number of items : %d\n",items);
printf("Price of one item : %.2f%c\n",cost_per_item, currency);
printf("Price of %d items : %.2f%c\n",items,total_cost, currency);
printf("Price of %d items : %d%c",items,total, currency);*/

// int max_score = 700;
// int got_score = 327;

// float percentage = (float) got_score/max_score*100;

// printf("percentage is %.3f\n", percentage);

// // bool isMyName_Shan = true;

// printf("%d", 10>5);

// ---------------------------
/*int opt;
printf("Enter the number");
scanf("%d", &opt);

switch (opt)
{
case 1:
    printf("it is %d",1);
    break;
case 2:
    printf("It is %d",2);
    break;
default:
    printf(" This is other number");
    break;
}*/
/*
int num =0;
do
{
    printf(" No %d\n", num);
    num++;
} while (num<10);
*/
/*
int num = 12345;
int revnum=0;

while (num>0)
{
    revnum= revnum*10+ num%10;
    num/=10;
}
printf("%d", revnum);*/

// int mynum[]={45,53,22,44,56,35,76};
// int len= sizeof(mynum)/sizeof(mynum[0]);
// int i;
/*float ave,sum = 0.0;

for ( i = 0; i < len; i++)
{
    sum += mynum[i];
}

ave= (float)sum/len;
printf("average is %.3f ", ave);*/
/*
int lowestage= mynum[0];
for ( i = 0; i < len; i++)
{
    if (lowestage> mynum[i])
    {
        lowestage=mynum[i];
    }
    
}
printf("Lowest age is : %d\n", lowestage);

char greetings[]="Good morning!";
printf("greeting is : %s \n char is : %c",greetings,greetings[0]);*/

// char myname[40];

// printf("Enter your name:\n");
// fgets(myname,sizeof(myname),stdin);

// printf("%s", myname);
int myarr[]={15,25,35,45};
int len= sizeof(myarr)/sizeof(myarr[0]);

mufunc(myarr, len);

return 0;  
}