//Write a program to print the sum of any 10 natural numbers entered using the keyboard.
#include <stdio.h>
#include <conio.h>

 int main(){
    int num, sum = 0, i;

    for (i=0; i<10; i++){
        printf("enter number %d:", i);
        scanf("%d", &num);
        sum += num;
    }
    printf("the sum of the values is %d", sum);
    getch();
 }