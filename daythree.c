//to print the average of three numbers

// #include<stdio.h>
// int main(){
//     int x, y, z, avg;
//     printf("enter three numbers:");
//     scanf("%d%d%d", &x, &y, &z);

//     avg = (x+y+z)/3;
//     printf("the average of the three numbers is %d", avg);
//     return 0;
// }

// to print the largest of three numbers;

// #include<stdio.h>
// int main(){
//     int x, y, z;
//     printf("enter the first number:");
//     scanf("%d", &x);
//     printf("enter the second number:");
//     scanf("%d", &y);
//     printf("enter the third number:");
//     scanf("%d", &z);

//     if (x>y){
//         if (x>z){
//             printf("the largest number is %d", x);
//         }
//         else{
//             printf("the largest number is %d", z);
//         }
//     }
//     else{
//          if (y>z){
//         printf("the largest number is %d", y);
//         }
//         else{
//             printf("the largest number is %d", z);     
//         }
//     }
//     return 0;
// }

//checking whether the entered value is a single digit

// #include <stdio.h>

// int main() {
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     if (ch >= '0' && ch <= '9') {
//         printf("%c is a digit.\n", ch);
//     } else {
//         printf("%c is not a digit.\n", ch);
//     }

//     return 0;
// }