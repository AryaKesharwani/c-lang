#include <stdio.h>
int main(int argc, char const *argv[])
{
    float num1,num2;
    scanf("%f",&num1);
    scanf("%f",&num2);
    double resnum1,resnum2;
    resnum1=(double) num1;
    resnum2=(double) num2;
    printf("%f\n", resnum1);
    printf("%f\n", resnum2);
	return 0;
}