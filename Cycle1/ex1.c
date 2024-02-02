#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,y,detr;
    printf("ax^2 + bx + c = 0\n");
    printf("Enter the coefficient of x^2: ");
    scanf("%f",&a);
    printf("Enter the coefficient of x: ");
    scanf("%f",&b);
    printf("Enter the constant term: ");
    scanf(" %f",&c);
    detr= (b*b) - (4*a*c);
    if(detr>0){
        x =((-b) +sqrt(detr))/(2*a);
        y =((-b) -sqrt(detr))/(2*a);
        printf("\nRoots are Different & They are:\n   x1 = %.3f\n   x2 = %.3f",x,y);
    }
    else if(detr==0){
        x=(-b)/(2*a);
        printf("\nRoots Are Same\n   x1 = %.3f\n   x2 = %.3f",x,x);
    }
    else{
        x= (-b)/(2*a);
        y= (sqrt(-detr))/(2*a);
        printf("Roots Are Imaginary & They are:\n   x1 = %.2f + i(%.2f)\n   x2 = %.2f - i(%.2f)",x,y,x,y);
    }
    return 0;
}