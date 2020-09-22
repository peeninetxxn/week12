#include<stdio.h>
int ifelse(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    printf("%d = ",marks);
    //check condition
    if(marks>50){ //number 50 up
        printf("PASS");
    }
    else if(marks<50){
        printf("No Pass");
    }
    else{
        printf("Equal");
    }
}
