#include <stdio.h>
#include <math.h>

int main(){

    double r = 0;
    
    const double Pi = 3.1415926535;
    double cir = 0;
    double area = 0;
    double volume = 0;
    double surface_area = 0;

    printf("enter the radius : ");
    scanf("%lf" , &r);

    area = Pi * pow(r , 2);
    cir = 2.0 * Pi * r;
    volume = (4.0/3.0) * Pi * pow(r , 3);
    surface_area = 4 * area;

    
    printf("\n");
    printf("The Circumference of a circle of radius %.1f is %.2f  units.\n " , r , cir);
    printf("The area of a circle of radius %.1f is %.2f square units.\n " , r , area);
    printf("The surface area of a sphere of radius %.1f is %.2f square units.\n " , r , surface_area);
    printf("The volume of a sphere of radius %.1f is %.2f cube units.\n " , r , volume);
    
    return 0;
}