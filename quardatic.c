#include <stdio.h>
#include<math.h>
int main(){
    float a , b ,c ;
    float quard;
    printf("ENTER values of A ");
    scanf("%d",&a);
    printf("Enter value of B  ");
    scanf("%d",&b);
    printf("Enter value of C  ");
    scanf("%d",&c);
    quard = ((b*b)-4 *a*c);
    if (quard>0){
       float root1= (-b + sqrt(quard))/(2*a);
       float root2= (-b - sqrt(quard))/(2*a);
       printf("The Root are Real and Unequal \n");
       printf("The roots are %f    %f   ",root1 , root2);
    }
    else if (quard==0)
    {
       float root1 =-b/(2*a);
       float root2  = -b/(2*a);
       printf("The Root are Real and  equal \n");
       printf("The roots are %f    %f   ", root1 , root2);
    }
    else
    {
      float root1   =-b/(2*a) ;
      float root2 = - sqrt(-quard)/(2*a);
      printf("The roots are imaginary \n");
      printf("The roots are %f  ,  %f  ", root1, root2);
    }
    
    return 0;
}