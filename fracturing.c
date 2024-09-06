#include <stdio.h>
#include <math.h>


#define PI 3.14159


    // This function is a helper function that does the calculaton for distance.
double distanceCalculation(){

    double x1=0;
    double x2=0;
    double y1=0;
    double y2=0;

    printf("Enter your x value for Point #1: ");
    scanf("%lf", &x1);

    printf("Enter your y value for Point #1: ");
    scanf("%lf", &y1);
    
    
    printf("Enter your x value for Point #2: ");
    scanf("%lf", &x2);

    printf("Enter your y value for Point #2: ");
    scanf("%lf", &y2);



    double calculation = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

    // Print the results
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", x1, y1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", x2, y2);

    return calculation;



}



double calculateDistance(){

    double distance= distanceCalculation();


    printf("The distance between the two points is %.3f\n", distance);
    
    return distance;

}


double calculatePerimeter()

{

    double diameter = distanceCalculation();

    double perimeter = PI * diameter;

    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);

    return 2;

}



double calculateArea()


{


    double diameter = distanceCalculation();

    double radius = diameter / 2;

    double area = PI * pow(radius,2);

    printf("The area of the city encompassed by your request is %.3f\n", area);

    return 2;


}

double calculateWidth(){

    double width = distanceCalculation();

    printf("The width of the city encompassed by your request is  %.3f \n", width);

    return 1;
    

}


double calculateHeight(){

    double height = distanceCalculation();

    printf("The width of the city encompassed by your request is  %.3f \n", height);

    return 1;





}









int main(int argc, char **argv)

{

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();




    return 0;
}
