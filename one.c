#include<stdio.h>
//int gcd_rec(int,int);
int gcd_rec(int x, int y){
    if (y == 0)
        return x;
    return gcd_rec(y, x % y);
}
void main(){
    int first,second,gcd;
    printf("Enter the two numbers to find GCD and LCM: \n");
    scanf("%d%d",&first,&second);
    if(first*second!=0){
        gcd=gcd_rec(first,second);
        printf("The GCD of %d and %d is %d \n",first,second,gcd);
        printf("The LCM of %d and %d is %d\n",first,second,(first*second)/gcd);
    }
    else
       printf("One of the entered numbers is zero:Quitting\n");

}
    