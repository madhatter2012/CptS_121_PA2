#include "equations.h"

double calculate_newtons_2nd_law(double mass, double acceleration)
{	//calculating f=ma
	return mass * acceleration;
}

double calculate_volume_cylinder(double radius, double height)
{
	//Calculating volume of a cylinder
	return PI * radius * radius * height;
}

char perform_character_encoding(char plaintext_character)
{
	int shift = 0;
	//calculating encoded character
	return (plaintext_character - 'A') + 'a' + shift;
}

double calculate_gravity_force(double mass1, double mass2, double distance_g)
{
	//calculating gravity
	return (G * mass1 * mass2) / pow(distance_g, 2);
}

double calculate_tangent(double theta)
{
	// Calculating Tangent
	//double tan_theta = 0.0;
	//tan_theta = sin(theta) / cos(theta);	
	//return tan_theta;
	return sin(theta) / cos(theta);
}

double calculate_parallel_resistance(int R1, int R2, int R3)
{
	// Calculating Equivalent Paralell Resistance
	return 1 / ((1 / (double)R1) + (1 / (double)R2) + (1 / (double)R3)); //casted as doubles to avoid divide by zero error
}

double calculate_distance_between_2pts(double x1, double y1, double x2, double y2)
{
	// Calculating distance between two points
	return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}

double calculate_general_equation(int a, double x, double z)
{
	
	//Calculating General Equation
	//return ((((double)3 / (double)5) + (b * z - x)) / ((a % 2) + PI));
	return (double)7 / (double)5 * x / a + z - a / (a % 2) + PI;
}


