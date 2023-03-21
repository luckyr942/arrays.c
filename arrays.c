#include<stdio.h>
// int main(){
//     int marks[3];
//     printf("enter phy : ");
//     scanf("%d",&marks[0]);

//     printf("enter chem : ");
//     scanf("%d",&marks[1]);

//     printf("enter maths : ");
//     scanf("%d",&marks[2]);

//     printf("phy = %d, chem = %d, maths = %d", marks[0],marks[1],marks[2]);

//     return 0;
// }

// TO ENTER PRICE OF 3 ITEMS AND PRINT THEIR FINAL COST WITH GST
int main(){
    float price[3];
    printf("enter 3 prices : ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("total price 1 : %f\n", price[0]+(0.18*price[0]));
    printf("total price 2 : %f\n", price[1]+(0.18*price[1]));
    printf("total price 3 : %f\n", price[2]+(0.18*price[2]));

    return 0;
}