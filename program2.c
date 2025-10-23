 /* Display the volume of the bin in cubic feet and bushels
      Project by: Pratishtha Kunwar
      Date: 09/17/2025
*/
#include <stdio.h>

//constants
 const float PI = 3.14159;
 const float FT3_PER_BUSHEL = 1.244;
 const int YARD_TO_FEET = 3;

int main(void)
{

 // variables
 float base_circ_yd, cyl_ht_yd, cone_ht_yd;  //inputs in yards
 float base_circ_ft, cyl_ht_ft, cone_ht_ft;   // converted to feet
 float radius_ft, v_cyl_ft,v_cyl_ft3, v_total_ft3, v_cone_ft3, v_total_ft, bushels; // results

 // Statements
 printf("Enter the circumference (yards):");
 scanf("%f", &base_circ_yd);

 printf("Enter the cylinder height (yards):");
 scanf("%f",&cyl_ht_yd);

 printf("Enter the cone height (yards):");
 scanf("%f", &cone_ht_yd);



// Conversion
    base_circ_ft = base_circ_yd * YARD_TO_FEET;
    cyl_ht_ft = cyl_ht_yd * YARD_TO_FEET;
    cone_ht_ft = cone_ht_yd * YARD_TO_FEET;



// Calculations
    radius_ft = base_circ_ft / (2.0* PI);
    v_cyl_ft = PI * radius_ft * radius_ft * cyl_ht_ft;
    v_cone_ft3 = (1.0 / 3.0) * PI * radius_ft * radius_ft * cone_ht_ft;
    v_total_ft = v_cyl_ft3 + v_cone_ft3;
    bushels = v_total_ft / FT3_PER_BUSHEL;



// output
   printf ("Radius = %.2f ft\n", radius_ft);
   printf ("Cylinder Volume = %.2f ft^3\n", v_cyl_ft);
   printf ("Cone Volume = %.2f ft^3\n", v_cone_ft3);
   printf ("Bushels = %.2f\n", bushels);

return 0;

} //main

/* Results
Input:
 Circumference = 50 yds = 150 ft
 Cylinder height = 30 yds = 90 ft
 Cone height = 7 yds = 21 ft

 Calculation
 Radius = 23.88 ft
 Cone Volume = 161153.89 ft^3
 Total Volume = 173687.28 ft^3
 Bushels = 13960
 */
