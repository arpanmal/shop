#include <stdio.h>
int saller(int),ven(int);

int main(){
int inv=1000;
while(1){
        inv=saller(inv);
printf("%d item are available\n",inv);
}
}
  int saller(inv){
      int i, sold;

  if(inv==1000){
    printf("inventory is full now\n");
    }
       printf("you want to buy press '1'\n");
       scanf("%d",&i);
    if(i==1){

        printf("enter the quantity\n");
        scanf("%d",&sold);
          if(sold<=inv){
                if(sold>0){

          inv=inv-sold;
          printf("%d item are successfully sold\n",sold);

           if(inv<=250){
           printf("inventory is below them 75 percent Wait a minute for it to fill up\n");
           inv=inv+ven(inv);
    }

           if(500>=inv&&inv>250){
           printf("Over 50 percent of the products have been sold\n");
    }

  }
       else{
       printf("bhag sala:) buy bigger than zero\n");
       }}
    else{

    printf("inventory limit '%d' please buy less tham '%d'",inv,inv);
    }
   }
  else{
   printf("'%d'is wrong input press '1'to buy\n",i);
  }
  return inv;
}
    int ven(inv){

    int m=1000-inv;

    printf("%d item add to inventory\n",m);

    return m;
    }
