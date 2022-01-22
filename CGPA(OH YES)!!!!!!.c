#include<stdio.h>
int main(){
    float c[100],d[100],acr,cr,sum,sum1=0,sum2=0,cgpa;
    int i,n,l,ccr;
    printf("WELCOME!!!!!! This is the CGPA calculator for the ECE students of NSU\n\n");
    printf("Enter the total number of courses:");
    scanf("%d",&n);
    printf("Enter the total number of lab courses:");
    scanf("%d",&l);
    printf("\nEnter the grade points:\n");
    for(i=0;i<n;i++){
        scanf("%f",&c[i]);
    }
     printf("\nEnter the grade points for lab courses:\n");
     for(i=0;i<l;i++){
        scanf("%f",&d[i]);
    }
    acr=((n*3.00)+(l*1.00));
    cr=acr;
    for(i=0;i<n;i++){
        sum1=(sum1+(c[i]*3.00));
    }
     for(i=0;i<l;i++){
        sum2=(sum2+(d[i]*1.00));
    }
    sum=sum1+sum2;
    for(i=0;i<n;i++){
        if(c[i]==0.0){
        cr=cr-3;
        }
    }
    for(i=0;i<l;i++){
        if(d[i]==0.0){
            cr=cr-1;
        }
    }
    ccr=cr+3;
    cgpa=sum/acr;
    printf("\nYOUR TOTAL COMPLETED CREDITS:%d\n",ccr);
    printf("\nYOUR CGPA IS:%.2f\n",cgpa);
    return 0;
}

