/* SALURIA, PRECIOUS KAIRA || LECTURE 13 */

/* C Program to Calculate SLope, Midpoint, and Distance Between Two Points
as well as Display the SLope Intercept Form */

#include <stdio.h>
#include <math.h>

// Line structure  
struct line {
    // defining members of the structure  
    struct point{
        float x;
        float y;
    } point1, point2;
    float midpoint[2];
    float slope;
    float distance;
};

// prototype for the functions
float solveSlope(struct line line);
void *solveMidpoint(struct line *line);
float solveDistance(struct line line);
void getSLopeInterceptForm (struct line line);

int main () {
    
    
    struct line line1; // declare struct line1 variable

    /* Get the input for first point from the user */
    printf ("Enter x and y for point1: ");
    scanf ("%f%f", &line1.point1.x, &line1.point1.y);

    /* Get the input for second point from the user */
    printf ("Enter x and y for line2: ");
    scanf ("%f%f", &line1.point2.x, &line1.point2.y);

    // DIsplaying points
    printf("\nPoint 1: (%g, %g)", line1.point1.x, line1.point1.y);
    printf("\nPoint 2: (%g, %g)", line1.point2.x, line1.point2.y);

    // Passing struct as an argument and storing the result to the structure members
    line1.slope = solveSlope(line1);
    line1.distance =  solveDistance(line1);

    solveMidpoint(&line1);

     // Displaying outputs
    printf ("\n---------------\n");
    printf ("\nSlope: %g",  line1.slope);
    printf("\nMidpoint: (%g, %g)", line1.midpoint[0], line1.midpoint[1]);
    printf ("\nDistance between two points: %g", line1.distance);
    getSLopeInterceptForm(line1);
    
    return 0;
}


// SLOPE
float solveSlope(struct line line){
    float slope = (line.point1.y - line.point2.y) / (line.point1.x - line.point2.x);
    return slope;
}

// MIDPOINT
void *solveMidpoint(struct line *line){
    float x,y;
    // Accessing structure members using structure pointer
    x =  (line->point1.x + line->point2.x)/2;       // x-value
    y = (line->point1.y + line->point2.y)/2;       // y-value;
    line->midpoint[0] = x; line->midpoint[1] = y; // storing value to midpoint array
}

// DISTANCE
float solveDistance(struct line line){
    float point1, point2, distance;
    point1 = line.point2.x - line.point1.x;
    point2 = line.point2.y - line.point1.y;
    distance = sqrt((point1 * point1) + (point2 * point2));
    return distance;
}

// SLOPE INTERCEPT FORM
void getSLopeInterceptForm (struct line line){
    float m = solveSlope(line);
    float b = line.point2.y - (m * line.point2.x);
    printf ("\ny = %gx + %g", m,b); // printing slope intercept form
}
