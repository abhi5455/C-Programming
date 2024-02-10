#include<stdio.h>
#include<math.h>
//NOT COMPLETED
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
double Sine(double x){
    double result=0;
    for(int n=0;n<9;n++){
        result+= (pow(-1,n)*pow(x,(2*n)+1))/factorial((2*n)+1);
    }
    return result;
}
double Cosine(double x){
    double result=0;
    for(int n=0;n<9;n++){
        result+= pow(-1,n)*pow(x,2*n)/factorial(2*n);
    }
    return result;
}
void main(){
    double degree,radian;
    printf("Enter the angle in degrees: ");
    scanf("%lf",&degree);
    radian=(degree*M_PI)/180;
    printf("Angle %.2lf degree in radians is %lf\n",degree,radian);
    printf("The values using Custom Functions are\n ");
    printf("sin(%.4lf) = %.4lf\n cos(%.4lf) = %.4lf\n",radian,Sine(radian),radian,Cosine(radian));
    printf("The values using Library Functions are\n ");
    printf("sin(%.4lf) = %.4lf\n cos(%.4lf) = %.4lf\n",radian,sin(radian),radian,cos(radian));
}