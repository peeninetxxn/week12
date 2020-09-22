#include<stdio.h>
int grade2(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks>=80 & marks<=100){
        printf("A");
    }
    else if(marks>=70 & marks<80){
            if(marks>=76 & marks<80)
                printf("B+");
            else if(marks>=70 & marks<76)
                printf("B");
    }
    else if(marks>=60 & marks<70){
            if(marks>=66 & marks<70)
                printf("C+");
            else if(marks>=60 & marks<66)
                printf("C");
    }
    else if(marks>=50 & marks<60){
            if(marks>=56 & marks<60)
                printf("D+");
            else if(marks>=50 & marks<56)
                printf("D");
    }
    else if(marks>=0 & marks<50){
        printf("F");
    }
    else{
        printf("E");
    }
}
