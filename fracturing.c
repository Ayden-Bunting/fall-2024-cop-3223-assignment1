#include <stdio.h>
#include <math.h>

// Defines the value for PI
#define PI 3.14159


// This is a helper function that calulates the distance between two points since we need 
 // this calculation in every other function besides main
double distanceCalculation()

{

    // These define the variables that we will be using.
    double x1=0;
    double x2=0;
    double y1=0;
    double y2=0;



    // This asks for and collects the points from the user
    printf("Enter your x value for Point #1: ");
    scanf("%lf", &x1);

    printf("Enter your y value for Point #1: ");
    scanf("%lf", &y1);
    
    
    printf("Enter your x value for Point #2: ");
    scanf("%lf", &x2);

    printf("Enter your y value for Point #2: ");
    scanf("%lf", &y2);



    // This is the calculation for distance.
    double calculation = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2)) / 2;

    

    // Print the results
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", x1, y1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", x2, y2);



    // Returns the value we got from the distance calculation
    return calculation;

}




// This function displays the distance between the two given points
double calculateDistance()

{


    // Saves the return value from "distanceCalculation" as a variable names distance
    double distance= distanceCalculation();



    // This prints out the value we got for the distance of the two given points
    printf("The distance between the two points is %.3f\n", distance);
    


    // returns the value we have for the distance variable
    return distance;

}




// This function calculates the perimeter of the circle
double calculatePerimeter()

{
    
    // This gets the value for the distance and saves it to the variable diameter
    double diameter = distanceCalculation();

   
   
    // This is the calculation for perimeter and then saves the value to the variable perimeter
    double perimeter = PI * diameter;


  
    // This prints out the perimeter of the circle using the given points
    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);

    
    
    // This returns the difficulty that I had creating this function.
    return 2;

}




 // This function calculates the area for the circle.
double calculateArea()

{


    // This saves the distance of the two points as "diameter"
    double diameter = distanceCalculation();



    // This does the calulation for radius and saves it to a variable called "radius"
    double radius = diameter / 2;



    // This does the calculations for area then saves it to a variable called "area"
    double area = PI * pow(radius,2);



    // This prints out the area of the city given the two points
    printf("The area of the city encompassed by your request is %.3f\n", area);



    // This returns the difficulty that I had creating this function.
    return 2;


}



// This function calculates the width of the circle
double calculateWidth()

{


    // This saves the calculation for distance as the variable "width"
    double width = distanceCalculation();



    // This prints out the width of the circle
    printf("The width of the city encompassed by your request is %.3f\n", width);



    // This returns the difficulty that I had creating this function
    return 1;
    
}






// This function calculates the height of the circle
double calculateHeight()

{


    // This saves the calculation for distance as the variable "height"
    double height = distanceCalculation();



    // This prints out the height of the circle
    printf("The height of the city encompassed by your request is %.3f \n", height);



    //This returns the difficulty that I had creating this function
    return 1;

}








// This is the main function, it calls all the other functions
int main(int argc, char **argv)

{

    // This is the command used for calling all the other functions so we can use them
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();



    // This ends the program
    return 0;

}

