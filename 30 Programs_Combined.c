// -----------------------------------------------------------------------------
// Program 1: Assign values at declaration and print.
// -----------------------------------------------------------------------------
#include <stdio.h>
void main() {

    // Assigning values to variables at the time of declaration
    int num1 = 10;
    float num2 = 20.5f;
    char char1 = 'C';
    
    // Printing the assigned values
    printf("Integer value: %d\n", num1);
    printf("Float value: %.2f\n", num2);
    printf("Character value: %c\n", char1);
}

// -----------------------------------------------------------------------------
// Program 2: Print a specific message.
// -----------------------------------------------------------------------------
#include <stdio.h>
void program2() {

    // Printing the required message
    printf("C language is a powerful programming language.\n");
}

// -----------------------------------------------------------------------------
// Program 3: Assign two variables, interchange values, and print.
// -----------------------------------------------------------------------------
#include <stdio.h>
void program3() {

    int a = 5;
    int b = 10;
    int temp; // Temporary variable for swapping
    
    printf("Before interchange: a = %d, b = %d\n", a,b);
    
    // Swapping logic
    temp = a;
    a = b;
    b = temp;
    
    printf("After interchange: a = %d, b = %d\n", a,b);
}

// -----------------------------------------------------------------------------
// Program 4: Calculate number of months for a given year value.
// -----------------------------------------------------------------------------
#include <stdio.h>
void program4() {
    
    int year = 5; // The numeric value assigned to the variable year
    int months;
    
    // Calculation: 1 year = 12 months
    months = year * 12;
    
    printf("Year value: %d\n", year);
    printf("Number of months: %d\n", months);
}

// -----------------------------------------------------------------------------
// Program 5: Get two numbers, calculate sum and product, and print.
// -----------------------------------------------------------------------------
#include <stdio.h>
void program5() {
 
    int num1, num2, sum, product;
    
    // Getting user input
    printf("Enter the first number: ");
    if (scanf("%d", &num1) != 1) return;
    printf("Enter the second number: ");
    if (scanf("%d", &num2) != 1) return;
    
    // Calculation
    sum = num1 + num2;
    product = num1 * num2;
    
    // Printing the results
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    printf("The product of %d and %d is: %d\n", num1, num2, product);
}

// -----------------------------------------------------------------------------
// Program 6: Get age in years, calculate age in months, and print.
// -----------------------------------------------------------------------------
#include <stdio.h>
void age_to_months() {
    printf("Calculate age in months. \n");
    
    int age_years;
    int age_months;
    
    // Getting user input
    printf("Enter age in years: ");
    if (scanf("%d", &age_years) != 1) return;
    
    // Calculation: 1 year = 12 months
    age_months = age_years * 12;
    
    // Printing the result
    printf("Age in years: %d\n", age_years);
    printf("Age in months: %d\n", age_months);
}

// -----------------------------------------------------------------------------
// Program 7: Calculate Total and Average marks for three subjects.
// -----------------------------------------------------------------------------
#include <stdio.h>
void student_marks() {
    printf("Calculate Total and Average marks (3 subjects). \n");
    
    int roll_no;
    int pf_marks, ict_marks, cag_marks; 
    int total_marks;
    float average_marks;
    
    // Getting user input
    printf("Enter Roll No.: ");
    if (scanf("%d", &roll_no) != 1) return;
    
    printf("Enter marks for PF (out of 100): ");
    if (scanf("%d", &pf_marks) != 1) return;
    
    printf("Enter marks for ICT (out of 100): ");
    if (scanf("%d", &ict_marks) != 1) return;
    
    printf("Enter marks for CAG (out of 100): ");
    if (scanf("%d", &cag_marks) != 1) return;
    
    // Calculation
    total_marks = pf_marks + ict_marks + cag_marks;
    
    // Type casting is important here to get a precise average
    average_marks = (float)total_marks / 3.0f;
    
    // Printing the result
    printf("Result for Roll No. %d\n", roll_no);
    printf("Total Marks Obtained: %d / 300\n", total_marks);
    printf("Average Marks: %.2f\n", average_marks);
}

// -----------------------------------------------------------------------------
// Program 8: Convert Fahrenheit to Celsius. C = 5/9(F-32).
// -----------------------------------------------------------------------------
#include <stdio.h>
void f_to_c() {
    printf("Convert Fahrenheit to Celsius: \n");
    
    float fahrenheit, celsius;
    
    // Getting user input
    printf("Enter temperature in Fahrenheit (F): ");
    if (scanf("%f", &fahrenheit) != 1) return;
    
    // Calculation. Using 5.0/9.0 ensures floating-point division.
    celsius = (5.0f / 9.0f) * (fahrenheit - 32.0f);
    
    // Printing the result
    printf("Temperature in Celsius (C): %.2f", celsius);
}

// -----------------------------------------------------------------------------
// Program 9: Find the maximum number from four numbers.
// -----------------------------------------------------------------------------
#include <stdio.h>
void find_maximum() {
    printf("Find the maximum number from four numbers. \n");
    
    int n1, n2, n3, n4;
    int max;
    
    // Getting user input
    printf("Enter four numbers:\n");
    printf("Number 1: ");
    if (scanf("%d", &n1) != 1) return;
    printf("Number 2: ");
    if (scanf("%d", &n2) != 1) return;
    printf("Number 3: ");
    if (scanf("%d", &n3) != 1) return;
    printf("Number 4: ");
    if (scanf("%d", &n4) != 1) return;
    
    // Simple logic using if-else to find the maximum
    max = n1; // Assume n1 is the maximum initially
    
    if (n2 > max) {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }
    if (n4 > max) {
        max = n4;
    }
    
    // Printing the result
    printf("The maximum number is: %d\n", max);
}

// -----------------------------------------------------------------------------
// Program 10: Convert 2.5 miles into kilometers. (1 mile = 1.609 km)
// -----------------------------------------------------------------------------
#include <stdio.h>
void miles_to_km() {
    printf("Convert miles to kilometers. \n");
    
    const double MILES_TO_KM_RATE = 1.609;
    double miles = 2.5;
    double kilometers;
    
    // Calculation
    kilometers = miles * MILES_TO_KM_RATE;
    
    // Printing the result
    printf("%.2f miles is equal to %.3f kilometers.\n", miles, kilometers);
}

// -----------------------------------------------------------------------------
// Program 11: Calculate the average of two 'int' variables.
// -----------------------------------------------------------------------------
#include <stdio.h>
void average_two_ints() {
    printf("Average of two 'int' variables. \n");
    
    int val1 = 15;
    int val2 = 22;
    float average;
    
    // Calculation: Sum is divided by 2.0 to ensure float division
    average = (float)(val1 + val2) / 2.0f;
    
    // Printing the result
    printf("First value: %d\n", val1);
    printf("Second value: %d\n", val2);
    printf("The average is: %.2f\n", average);
}

// -----------------------------------------------------------------------------
// Program 12: Find the volume of a cylinder using 'const' qualifier. Volume = pi r^2 h.
// -----------------------------------------------------------------------------
#include <stdio.h>
void cylinder_volume() {
    printf("Volume of a cylinder (using const). \n");
    
    // Using const qualifier for PI and for the dimensions
    const float PI_CONST = 3.14159f;
    const float radius = 5.0f;
    const float height = 10.0f;
    float volume;
    
    // Calculation
    volume = PI_CONST * (radius * radius) * height;
    
    // Printing the result
    printf("Radius (r): %.2f, Height (h): %.2f\n", radius, height);
    printf("The volume of the cylinder is: %.2f\n", volume);
}

// -----------------------------------------------------------------------------
// Program 13: Find the area of a circle using define directive. Area = pi r^2.
// -----------------------------------------------------------------------------
#include <stdio.h>
#define PI_DEF 3.1415926535
void circle_area() {
    printf("Area of a circle (using #define).\n");
    
    // PI is defined at the top as PI_DEF
    float radius = 7.0f;
    float area;
    
    // Calculation
    area = PI_DEF * radius * radius;
    
    // Printing the result
    printf("Radius (r): %.2f\n", radius);
    printf("The area of the circle is: %.2f\n", area);
}

// -----------------------------------------------------------------------------
// Program 14: Convert millimeters into inches. (1 inch = 25.4 mm)
// -----------------------------------------------------------------------------
#include <stdio.h>
void mm_to_inches() {
    printf("Convert millimeters to inches. \n");
    
    const double MM_PER_INCH = 25.4;
    double millimeters = 127.0;
    double inches;
    
    // Calculation: Inches = mm / 25.4
    inches = millimeters / MM_PER_INCH;
    
    // Printing the result
    printf("%.2f millimeters is equal to %.3f inches.\n", millimeters, inches);
}

// -----------------------------------------------------------------------------
// Program 15: Interchange values of two variables (duplicate of 3, using temp).
// -----------------------------------------------------------------------------
#include <stdio.h>
void program15() {
 
    int x = 50;
    int y = 100;
    int temp; // Temporary variable for swapping
    
    printf("Before interchange: x = %d, y = %d\n", x, y);
    
    // Swapping logic
    temp = x;
    x = y;
    y = temp;
    
    printf("After interchange: x = %d, y = %d\n", x, y);
}

// -----------------------------------------------------------------------------
// Program 16: Multiple assignment and product calculation.
// -----------------------------------------------------------------------------
#include <stdio.h>
void multiple_assignment_product() {
    printf("Multiple assignment and product. \n");
    
    int a, b, c, product;
    
    // Multiple assignment statement
    a = b = c = 3;
    
    // Calculation
    product = a * b * c;
    
    // Printing the result
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("The product (a * b * c) is: %d\n", product);
}

// -----------------------------------------------------------------------------
// Program 17: Separate integral and fractional parts of a real number.
// -----------------------------------------------------------------------------
#include <stdio.h>
void integral_fractional() {
    printf("Separate integral and fractional parts. \n");
    
    double real_number = 15.58971;
    int integral_part;
    double fractional_part;
    
    // Integral part is obtained by type casting to int
    integral_part = (int)real_number;
    
    // Fractional part is the remainder of the number after subtracting the integral part
    fractional_part = real_number - integral_part;
    
    // Printing the result
    printf("Real number: %.5f\n", real_number);
    printf("Integral part: %d\n", integral_part);
    printf("Fractional part: %f\n", fractional_part);
}

// -----------------------------------------------------------------------------
// Program 18: Compute 's' using the formula: s = vi * t + 0.5 * a * t^2.
// -----------------------------------------------------------------------------
#include <stdio.h>
void compute_s() {
    printf("Compute 's' (displacement).\n");
    
    double vi = 10.0; // Initial velocity (vi)
    double t = 5.0;   // Time (t)
    double a = 9.8;   // Acceleration (a) - using gravity for example
    double s;         // Displacement (s)
    
    // Calculation: s = vi*t + 0.5*a*t*t
    s = (vi * t) + (0.5 * a * t * t);
    
    // Printing the result
    printf("Initial Velocity (vi): %.2f\n", vi);
    printf("Time (t): %.2f\n", t);
    printf("Acceleration (a): %.2f\n", a);
    printf("Displacement (s) = vi*t + 0.5*a*t^2: %.2f\n", s);
}

// -----------------------------------------------------------------------------
// Program 19: Find age in months and days.
// -----------------------------------------------------------------------------
#include <stdio.h>
void age_in_months_days() {
    printf("Age in months and days. \n");
    
    int age_years = 25;
    int age_months;
    int age_days;
    
    // Calculation (simplified, ignoring exact calendar months and leap years)
    age_months = age_years * 12;
    age_days = age_years * 365; // Simplified: 365 days/year
    
    // Printing the result
    printf("Current Age in Years: %d\n", age_years);
    printf("Age in Months (approx): %d\n", age_months);
    printf("Age in Days (approx): %d\n", age_days);
}

// -----------------------------------------------------------------------------
// Program 20: Print output using escape sequences.
// -----------------------------------------------------------------------------
#include <stdio.h>
void escape_sequences() {
    printf("Print output using escape sequences. \n");
    
    // \n for newline, \\ for a single backslash, \t for tab,
    // \' for single quote, \" for double quote
    printf("C:\\Windows>\n"); 
    printf("\'P\'\t\'A\'\t\'K\'\n");
    printf("\"Pakistan\"\n");
}

// -----------------------------------------------------------------------------
// Program 21: Print a pattern using one printf and '\n' escape sequence.
// -----------------------------------------------------------------------------
#include <stdio.h>
void pattern_one_printf() {
    printf("Print pattern with one printf and \\n. \n");
    
    // Use \n to start a new line within a single string
    printf("XXXXX\nXXXX\nXXX\nXX\nX\n");
}

// -----------------------------------------------------------------------------
// Program 22: Input and print student data.
// -----------------------------------------------------------------------------
#include <stdio.h>
void input_student_data() {
    printf("Input and print student data. \n");
    
    char name[50];
    int age;
    float height;
    char gender;
    
    // Getting user input
    printf("Enter Name: ");
    if (scanf(" %49[^\n]", name) != 1) return; 
    
    printf("Enter Age (years): ");
    if (scanf("%d", &age) != 1) return;
    
    printf("Enter Height (meters, e.g., 1.75): ");
    if (scanf("%f", &height) != 1) return;
    
    printf("Enter Gender (M/F): ");
    // ' %c' ensures any leading whitespace is skipped
    //  before reading the character
    if (scanf(" %c", &gender) != 1) return; 
    
    // Printing the data
    printf("\n--- Student Data ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d years\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Gender: %c", gender);
}

// -----------------------------------------------------------------------------
// Program 23: Input radius and calculate area and circumference. 
// Area = pi*r^2, Circumference = 2*pi*r.
// -----------------------------------------------------------------------------
#include <stdio.h>
void circle_calculations() {
    printf("Area & Circumference of a circle.\n");
    
    float radius, area, circumference;
    const float PI = 3.14159f;
    
    // Getting user input
    printf("Enter the radius of the circle: ");
    if (scanf("%f", &radius) != 1) return;
    
    // Calculation
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    // Printing the result
    printf("\nFor a circle with radius %.2f:\n", radius);
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
}

// -----------------------------------------------------------------------------
// Program 24: Input marks of five subjects, calculate Total and Average.
// -----------------------------------------------------------------------------
#include <stdio.h>
void five_subject_marks() {
    printf("Total and Average marks (5 subjects). \n");
    
    float s1, s2, s3, s4, s5; // Marks for Subject 1 to 5
    float total_marks;
    float average_marks;
    const int NUM_SUBJECTS = 5;
    
    // Getting user input
    printf("Enter marks for 5 subjects (out of 100 each):\n");
    printf("Subject 1: ");
    if (scanf("%f", &s1) != 1) return;
    printf("Subject 2: ");
    if (scanf("%f", &s2) != 1) return;
    printf("Subject 3: ");
    if (scanf("%f", &s3) != 1) return;
    printf("Subject 4: ");
    if (scanf("%f", &s4) != 1) return;
    printf("Subject 5: ");
    if (scanf("%f", &s5) != 1) return;
    
    // Calculation
    total_marks = s1 + s2 + s3 + s4 + s5;
    average_marks = total_marks / NUM_SUBJECTS;
    
    // Printing the result
    printf("\nTotal Marks Obtained: %.2f / %d\n", total_marks, NUM_SUBJECTS * 100);
    printf("Average Marks: %.2f\n", average_marks);
}

// -----------------------------------------------------------------------------
// Program 25: Calculate area of a triangle using Hero's formula.
// Area = sqrt{s(s-a)(s-b)(s-c)} where s = (a+b+c)/2.
// -----------------------------------------------------------------------------
#include <stdio.h>
#include <math.h> 
void triangle_area() {
   float a, b, c, s, area;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area = %.3f", area);
}

// -----------------------------------------------------------------------------
// Program 26: Convert 12000 rupees into dollars. (1 dollar = Rs. 60)
// -----------------------------------------------------------------------------
#include <stdio.h>
void rupees_to_dollars() {
    printf("Convert Rupees to Dollars.\n");
    
    const double EXCHANGE_RATE = 60.0; // Rs. per 1 dollar
    double rupees = 12000.0;
    double dollars;
    
    // Calculation: Dollars = Rupees / Rate
    dollars = rupees / EXCHANGE_RATE;
    
    // Printing the result
    printf("%.2f Rupees = %.2f Dollars\n", rupees, dollars);
}

// -----------------------------------------------------------------------------
// Program 27: Input time in hours, minutes, seconds and convert to total seconds.
// -----------------------------------------------------------------------------
#include <stdio.h>
void time_to_seconds() {
    printf("Convert time to seconds.\n");
    
    int hours, minutes, seconds;
    int total_seconds;
    
    // Getting user input
    printf("Enter hours: ");
    if (scanf("%d", &hours) != 1) return;
    printf("Enter minutes: ");
    if (scanf("%d", &minutes) != 1) return;
    printf("Enter seconds: ");
    if (scanf("%d", &seconds) != 1) return;
    
    // Calculation: (H * 3600) + (M * 60) + S
    total_seconds = (hours * 3600) + (minutes * 60) + seconds;
    
    // Printing the result
    printf("Total time in seconds: %d\n", total_seconds);
}

// -----------------------------------------------------------------------------
// Program 28: Compute 'disc' (discriminant): {disc} = b^2 - 4ac.
// -----------------------------------------------------------------------------
#include <stdio.h>
void compute_discriminant() {
    printf("Compute Discriminant (disc).\n");
    
    double a, b, c;
    double disc;
    
    // Getting user input
    printf("Enter value for a: ",a);
    if (scanf("%lf", &a) != 1) return;
    printf("Enter value for b: ",b);
    if (scanf("%lf", &b) != 1) return;
    printf("Enter value for c: ",c);
    if (scanf("%lf", &c) != 1) return;
    
    // Calculation: b*b - 4*a*c (using simple multiplication instead of pow)
    disc = (b * b) - (4.0 * a * c);
    
    // Printing the result
    printf("The discriminant is: %.2f\n", disc);
}

// -----------------------------------------------------------------------------
// Program 29: Print message if 'n' > 100, otherwise ignore.
// -----------------------------------------------------------------------------
#include <stdio.h>
void program29() {
    int n;
    
    // Getting user input
    printf("Enter a number: ",n);
    scanf("%d", &n);
    
    // Simple 'if' structure
    if(n > 100) {
        printf("The value is greater than 100.");
    }
}

// -----------------------------------------------------------------------------
// Program 30: Test whether a given integer is odd or even using simple 'if' structure.
// -----------------------------------------------------------------------------
#include <stdio.h>
void program30() {
    
    int num;
    
    // Getting user input
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Check if the remainder when divided by 2 is 0 (even)
    if (num % 2 == 0) {
        printf("even number.");
    } else {
        // If it's not even, it must be odd
        printf("odd number.");
    }
}

// -----------------------------------------------------------------------------
// 1-30 COMPLETED IN C
// -----------------------------------------------------------------------------
