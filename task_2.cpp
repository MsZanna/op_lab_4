#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    double x;
    double y;

    printf("Enter X and Y \n");
    printf("Enter X: ");
    scanf("%lf",&x);

    printf("Enter X: ");
    scanf("%lf",&y);

    double aFuncResult = (1 + pow(sin(x), 2)) / (2 + abs(y - 3*y/(1 + pow(x, 3) * pow(y, 2)))) + sqrt(x)/(cbrt(y));
    printf("The result of 'a' function: %lf \n", aFuncResult);

    double bFuncResult = pow(cos(tan(x + y)), 2) + sin(x + pow(270, 2));
    printf("The result of 'b' function: %lf \n", bFuncResult);


    return 0;
}