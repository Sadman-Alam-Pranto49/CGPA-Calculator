#include<stdio.h>
int main(){
    float c[100],cr,acr,sum=0,cgpa;
    int i,n,ccr;
    printf("Enter the total number of courses:");
    scanf("%d",&n);
    printf("\nEnter the grade points:\n");
    for(i=0;i<n;i++){
        scanf("%f",&c[i]);
    }
    acr=(n*3.00);
    cr=acr;

    for(i=0;i<n;i++){
        sum=(sum+(c[i]*3.00));
    }
     for(i=0;i<n;i++){
        if(c[i]==0.0){
        cr=cr-3;
        }
    }
    ccr=cr;
    cgpa=sum/acr;
    printf("\nYOUR TOTAL COMPLETED CREDITS:%d\n",ccr);
    printf("\nYOUR CGPA IS:%.2f\n",cgpa);
    return 0;
}
