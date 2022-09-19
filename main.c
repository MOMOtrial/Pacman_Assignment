//
// Created by Michael Moser on 2022-09-17.
//

#include <stdio.h>
#include <math.h>
#define N 4.44822

int main() {
    // Declare variables
    float totalMass;
    float boxSpringMass;
    float throneMass;
    float armorMass;
    float massInN;

    // Get user input
    printf("Please enter the mass (in pounds) of the box spring, throne, and armor respectively \n");
    scanf("%f %f %f", &boxSpringMass, &throneMass, &armorMass);

    totalMass = boxSpringMass + throneMass + armorMass;
    printf("The total mass is %0.2f pounds", totalMass);
    printf("\n");
    massInN = totalMass * N;
    printf("%0.2f N", massInN);
}
