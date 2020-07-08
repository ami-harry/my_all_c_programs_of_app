// #include <stdio.h>
// #include <math.h>
// int factorial(int val);
// int main()
// {
// int accuracy, count = 0, k = 1; //here accuracy means to print output correctly; count to track of even or odd iterations;k will hold the power of the base
// float x, temp, sine = 0;        //x-->to store user input for substituting in place of x in formulla, temp--temporary, sine--> to store output
// printf("Enter the value for x (in degree) to find sine x value:\n");
// scanf("%f", &x);
// changing degres to radian
// x = (float)x * (3.14159 / 180);
// printf("Enter the value to get more accurate\n 3 for least and more for more accuracy\n");
// scanf("%d", &accuracy);
// do
// {
// if (count % 2 == 0)
// {
// sine = (float)sine + (pow(x, k) / factorial(k));
// }
// if (count % 2 == 1)
// {
// sine = (float)sine - (pow(x, k) / factorial(k));
// }
// count++;
// k += 2;

// } while (count <= accuracy);
// printf("sine(%f)=%f calculated mathematically\n", temp, sine);
// printf("sine(%f)=%f calculated using library function\n", temp, sin(x));

// return 0;
// }

// int factorial(int val)
// {
// int factorial = 1;
// for (int i = 0; i <= val; i++)
// {
// factorial *= 1;
// }
// return factorial;
// }

//
// #include <stdio.h>
// #include <math.h>
// int main()
// {
    // float deg, rad, PI = 3.14;
    // printf("Enter the degree to know the value of sine:\n");
    // scanf("%f", &deg);
    // rad = deg * (PI / 180.0);
    // printf("Value of sin%f=%f \n", deg, sin(rad));
    // printf("Value of cos%f=%f \n", deg, cos(rad));
    // printf("Value of tan%f=%f \n", deg, tan(rad));
    // printf("Value of cosec%f=%f \n", deg, 1 / sin(rad));
    // printf("Value of sec%f=%f \n", deg, 1 / cos(rad));
    // printf("Value of cot%f=%f \n", deg, 1 / tan(rad));
    // return 0;
// }
// 