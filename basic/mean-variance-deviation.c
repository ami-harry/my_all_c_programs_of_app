// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int main()
// {
//     int i, j, n;
//     float mean, sum = 0.0, sumMeanSquare = 0.0, meansSquareDiff = 0.0, sd;
//     printf("Enter number of terms:\n");
//     scanf("%d", &n);
//     float a[n], subMeansSquare[n];
//     printf("Enter the %d numbers\n", n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%f", &a[i]);
//         sum += a[i];
//     }
//     mean = (float)sum / n;
//     printf("Means is %2.2f\n", mean);
//     for (i = 0; i < n; i++)
//     {
//         subMeansSquare[i] = (a[i] - mean) * (a[i] - mean);
//         sumMeanSquare += subMeansSquare[i];
//     }
//     meansSquareDiff = (float)(sumMeanSquare / n);
//     sd = (float)(sqrt(meansSquareDiff));
//     printf("variance= %2.2f\n", meansSquareDiff);
//     printf("standard deviation= %2.2f\n", sd);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int main()
// {
// int i, j, terms;
// float mean, sum = 0.0, sum_of_mean_sqare = 0.0, variance = 0, standard_deviation;
// printf("Enter the no of terms:\n");
// scanf("%d", &terms);
// float elements[terms], substract_mean_square[terms];
// printf("Enter the numbers");
// for (int i = 0; i < terms; i++)
// {
// scanf("%f", &elements[i]);
// sum += elements[i];
// }
// Mean is average of a given set of data.
// Formula : \mu=\frac{\sum_{i=1}^{N} x_{i}}{N}
// Where μ is mean and x1, x2, x3…., xi are elements.Also note that mean is sometimes denoted by \bar{x}
// mean = (float)(sum / terms);
// printf("Given no are %2.2f \n and mean is %2.2f :\n", sum, mean);
// for (i = 0; i < terms; i++)
// {
// // // substract_mean_square[terms] = (float)(elements[terms] - mean) * (elements[terms] - mean); //according to formulla variance is diff of  square elements-means .. so here we are collecting product of diff
// // sum_of_mean_sqare += substract_mean_square[terms];                                         //here we are adding the product of diff
// }
// variance = (float)(sum_of_mean_sqare / terms);
// Variance is the sum of squares of differences between all numbers and means.
// standard_deviation = (float)(sqrt(variance));
// Standard Deviation is square root of variance. It is a measure of the extent to which data varies from the mean.
// printf("The variance is %f\n", variance);
// printf("Standard deviation is %f\n", standard_deviation);
// return 0;
// // }

//
// #include <stdlib.h>
// #include <math.h>
// #include <stdio.h>
// int main()
// {
// int limit;
// float mean = 0, variance = 0.0, sum = 0.0, sum_of_mean = 0.0, standard_deviation = 0.0;
// printf("Enter the limit:\n");
// scanf("%d", &limit);
// float elements[limit], sub_of_mean[limit];
// printf("enter the data\n");
// for (int i = 0; i < limit; i++)
// {
// scanf("%f", &elements[i]);
// sum += elements[i];
// }
// mean = (float)(sum / limit);
// printf("Total no of elements are %d and the sum is %f\n", limit, sum);
// printf("The mean is %f\n", mean);
// for (int i = 0; i < limit; i++)
// {
// sub_of_mean[i] = (float)(elements[limit] - mean) * (elements[limit] - mean);
// sum_of_mean += sub_of_mean[i];
// }
// variance = (float)(sum_of_mean / mean);
// standard_deviation = (float)(sqrt(variance));
// printf("The variance is %f\n", variance);
// printf("The standard deviation is %f\n", standard_deviation);
// return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int elements;
    float mean = 0.0, sum_of_mean = 0.0, variance = 0.0, sum = 0.0, standard_deviation = 0.0;
    printf("Ente the total no elements:\n");
    scanf("%d", &elements);
    float data[elements], subs_of_mean[elements];
    printf("Enter the elements \n");
    for (int i = 0; i < elements; i++)
    {
        scanf("%f", &data[i]);
        sum += data[i];
    }
    mean = (float)(sum / elements);
    printf("Total no of elements are %d ane the sum is %f and the mean is %f\n", elements, sum, mean);
    for (int i = 0; i < elements; i++)
    {
        subs_of_mean[i] = (float)(data[elements] - mean) * (data[elements] - mean);
        sum_of_mean += subs_of_mean[i];
    }
    variance = (float)(sum_of_mean / mean);
    standard_deviation = (float)(sqrt(variance));

    printf("the variance is %f\nand the standard deviation is %f\n", variance, standard_deviation);
    return 0;
}
