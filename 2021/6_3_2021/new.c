#include <stdio.h>
#include <math.h>

int main()

{	float a , b , c , x1 , x2 , discriminant;

        discriminant = pow(b,2) - 4 * a * c;
        
        printf("Enter the coefficient a :");
        scanf("%f",&a);
        
        printf("Enter the coefficient b :");
        scanf("%f",&b);
        
        printf("Enter the coefficient c :");
        scanf("%f",&c);
        
        // for discriminant bigger than zero    
        if ( discriminant > 0 )
        {	 printf("x1 = %f", (-b + sqrt(discriminant)/(2*a)));     
        }

}
