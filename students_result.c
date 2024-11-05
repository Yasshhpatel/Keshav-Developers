#include<stdio.h>
#define size 5
int main(){
int rno[size],sub1[size],sub2[size],sub3[size],total[size];
float per[size];
int i,max,min;
for(i=0;i<size;i++){
    printf("enter the roll no of studens %d :",i+1);
    scanf("%d",&rno[i]);
    printf("enter the marks of physics chemistry maths : ");
    scanf("%d\t %d\t %d",&sub1[i],&sub2[i],&sub3[i]);
    total[i]=sub1[i]+sub2[i]+sub3[i];
    per[i]=total[i]/3;
}
printf("\n students details: \n");
printf("roll number\t physics:\t chemistry:\t maths:\t total:\t percentage:\t \n");
for(i=0;i<size;i++){
    printf("%d\t      %d\t      %d\t      %d\t       %d\t     %f\t        \n",rno[i],sub1[i],sub2[i],sub3[i],total[i],per[i]);
}
max=per[0];


for(i=1;i<size;i++){
    if(max < per[i]){
        max=per[i];
        
    }
}
min=per[0];
for(i=1;i<size;i++){
    if(min > per[i]){
        min=per[i];
        
    }
}
printf("\nhighest percentage: %d\n",max);
printf("\nlowest percentage: %d\n",min);
}