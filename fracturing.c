//#########################################################
// fracturing.c
// Author: Aubrey Jung (5541669)
// Date: 8/31/24
// Class: COP 3223, Professor Parra
// Purpose: Practice creating functions with different 
// responsibilities to start "fracturing" code
// Input: Multiple point values (X, Y)
//
// Output: Distance, perimeter, area, width, and height
// between two points
//#########################################################

#include <stdio.h>
#include <math.h>
#define pi 3.14159

//#########################################################
// double scanAndPrint(x1, x2, y1, y2)
// 
// Purpose: Scans and then prints x1, x2, y1, and y2
// Arguments: x1, x2, y1, y2
// Output: 
// Point #1 entered: x = x1 ; y = y1
// Point #2 entered: x = x2 ; y = y2
// Return: 0
//#########################################################

void scanAndPrint(double *x1, double *x2, double *y1, double *y2)
{
    // scan and print x and y variables
    scanf("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);
<<<<<<< HEAD
<<<<<<< HEAD
    printf("Point #1 entered: x1 = %lf ; y1 = %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf", x2, y2);
=======
    printf("Point #1 entered: x1 = %.1lf ; y1 = %.1lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.1lf ; y2 = %.1lf\n", x2, y2);
>>>>>>> d1b203d (commit)

    return 0;
=======
    printf("Point #1 entered: x1 = %.1lf ; y1 = %.1lf\n", *x1, *y1);
    printf("Point #2 entered: x2 = %.1lf ; y2 = %.1lf\n", *x2, *y2);
>>>>>>> e9fba52 (aaaaaaaaaaaaaaaaaaaaaaaa)
}

//#########################################################
// double calculateNoOutput(x1, x2, y1, y2)
// 
// Purpose: Calculates distance between two points
// Arguments: x1, x2, y1, y2
<<<<<<< HEAD
// Output: none - this is important
=======
// Output: none 
>>>>>>> d1b203d (commit)
// Return: calculation
//#########################################################

double calculateNoOutput(double x1, double x2, double y1, double y2)
{
    // distance formula
    double calculation = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    return calculation;
}

//#########################################################
// double calculateDistance()
//
// Purpose: Calculates distance between two points
// Arguments: No arguments
// Output: Three lines of text. 
// Point # entered: x = value ; y = value...
// The distance between the two points is <value>
// Return: A double representing the distance
//#########################################################

double calculateDistance()
{
    // scan and print x & y variables
    double x1, x2, y1, y2;
    scanAndPrint(x1, x2, y1, y2);

    // calculate and print distance 
    double distance = calculateNoOutput(x1, x2, y1, y2);
<<<<<<< HEAD
<<<<<<< HEAD
    printf("The distance between the two points is %lf", distance);
=======
    printf("The distance between the two points is %.1lf", distance);
>>>>>>> d1b203d (commit)
=======
    printf("The distance between the two points is %.1lf\n", distance);
>>>>>>> 884efc0 (:()

    return distance;
}

//#########################################################
// double calculatePerimeter()
// 
// Purpose: Calculates perimeter
// Arguments: No arguments
// Output: Three lines of text
// Point # entered: x = value ; y = value
// The perimeter of the city encompassed by your request is
// <value>
// Return: A double (1-5) indicating difficulty
// Note: Call calculate distance
//#########################################################

double calculatePerimeter()
{
    // scan and print x & y variables
    double x1, x2, y1, y2;
    scanAndPrint(x1, x2, y1, y2);

    // calculate and print perimeter
    double distance = calculateNoOutput(x1, x2, y1, y2);
    double perimeter = pi*distance;
<<<<<<< HEAD
<<<<<<< HEAD
    printf("The perimeter of the city encompassed by your request is %lf", perimeter);
=======
    printf("The perimeter of the city encompassed by your request is %.1lf", perimeter);
>>>>>>> d1b203d (commit)
=======
    printf("The perimeter of the city encompassed by your request is %.1lf\n", perimeter);
>>>>>>> 884efc0 (:()

    return 3;
}

//#########################################################
// double calculateArea()
// 
// Purpose: Calculates area
// Arguments: No arguments
// Output: Three lines of text
// Point # entered: x = value ; y = value
// The area of your city is <value>
// Return: A double (1-5) indicating difficulty
// Note: Call calculate distance
//#########################################################

double calculateArea()
{
    // scan and print x & y variables
    double x1, x2, y1, y2;
    scanAndPrint(x1, x2, y1, y2);

    // calculate and print area
    double distance = calculateNoOutput(x1, x2, y1, y2);
    double area = pow((distance/2),2)*pi;
<<<<<<< HEAD
<<<<<<< HEAD
    printf("The area of your city is %lf", area)
=======
    printf("The area of your city is %.1lf", area);
>>>>>>> d1b203d (commit)
=======
    printf("The area of your city is %.1lf\n", area);
>>>>>>> 884efc0 (:()

    return 3;
}

//#########################################################
// double calculateWidth()
// 
// Purpose: Calculates width
// Arguments: No arguments
// Output: Three lines of text
// Point # entered: x = value ; y = value
// The width of the city encompassed by your request is <value>
// Return: A double (1-5) indicating difficulty
//#########################################################

double calculateWidth()
{
    // scan and print x & y variables
    double x1, x2, y1, y2;
    scanAndPrint(x1, x2, y1, y2);

    // calculate and print width
    double width = calculateNoOutput(x1, x2, y1, y2);
    printf("The width of the city encompassed by your request is %.1lf\n", width);

    return 1;
>>>>>>> d1b203d (commit)
}

//#########################################################
// double calculateHeight()
// 
// Purpose: Calculates height
// Arguments: No arguments
// Output: Three lines of text
// Point # entered: x = value ; y = value
// The height of the city encompassed by your request is <value>
// Return: A double (1-5) indicating difficulty
//#########################################################

double calculateHeight()
{
    // scan and print x & y variables
    double x1, x2, y1, y2;
    scanAndPrint(x1, x2, y1, y2);

    // calculate and print height
    double height = calculateNoOutput(x1, x2, y1, y2);
    printf("The height of the city encompassed by your request is %.1lf\n", height);

    return 1;
>>>>>>> d1b203d (commit)
}

int main(int argc, char **argv)
{
<<<<<<< HEAD
    calulateDistance();
=======
    calculateDistance();
>>>>>>> d1b203d (commit)
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}