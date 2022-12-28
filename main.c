#include<stdio.h>
#include<stdlib.h>
#define size 8
int f=-1,r=-1;
int q[size];
void enqueue(){
     int x;
     printf("Enter element\n");
     scanf("%d",&x);
     if ((f==(r+1)%size))
     {
        printf("Overflow\n");
     }
     else{

     }
     
}


void main(){
    int ch;
   do{
       printf(" 1.Enqueue\n 2.Dequue\n 3.Display\n 4.Exit\n");
       scanf("%d",&ch);
       switch(ch){
           case 1:enqueue();
           break;
        //    case 2:dequeue();
        //    break;
        //    case 3:Display();
        //    break;
       }
   }while(ch!=4);
}