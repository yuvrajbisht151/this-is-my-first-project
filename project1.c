#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

int  x,y;
printf("enter the no");
scanf("%d",&y);
srand(time(NULL));
x=rand()%100;

while(1){

if(x>y){
printf("enter any  higher no");
scanf("%d",&y);
}
else if(x<y){
printf("enter any lower no");
scanf("%d",&y);}
else {
printf("right guess");
break;
}



}





return 0;

}
