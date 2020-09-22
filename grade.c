/*
    If-else Ladder with Grade
*/
#include<stdio.h>
int grade(){
    int marks;
    printf("Enter your marks: ");
    //input/keybord
    scanf("%d",&marks);
    if(marks>=80 & marks<=100){
        printf("A");
    }
    else if(marks>=70 & marks<80){
        printf("B");
    }
    else if(marks>=60 & marks<70){
        printf("C");
    }
    else if(marks>=50 & marks<60){
        printf("D");
    }
    else if(marks>=0 & marks<50){
        printf("F");
    }
    else{
        printf("E");
    }
}
