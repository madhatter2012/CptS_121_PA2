

#include "equations.h"

int main(void)

{
	// defining variables
	int shift = 0, R1 = 0, R2 = 0, R3 = 3, a = 0;
	double force = 0.0, mass = 0.0, acceleration = 0.0, radius = 0.0, height = 0.0, volume_cylinder = 0.0;
	double mass1 = 0.0, mass2 = 0.0, force_g = 0.0, distance_g = 0.0;
	double x_1 = 0.0, x_2 = 0.0, y_1 = 0.0, y_2 = 0.0, distance = 0.0, theta = 0.0, tan_theta = 0.0, parallel_resistance = 0.0;
	double b = 0.0, z = 0.0, x = 0.0, y = 0.0; 
	char plaintext_character = '\0', encoded_character = '\0';
	
	//getting mass and acceleration variable input values from user
	printf("Enter the mass and acceleration as floating point values for use in Newton's Second Law: ");
	scanf("%lf%lf", &mass, &acceleration);

	force = calculate_newtons_2nd_law(mass, acceleration);

	//displaying f=ma calcutation
	printf("Newton's Second Law: force = mass * acceleration = %lf * %lf = %lf: \n", mass, acceleration, force);

	//Getting radius and height variable input values from user
	printf("Enter the radius and height as floating point values for use in a volume cylinder equation: ");
	scanf("%lf%lf", &radius, &height);
	
	volume_cylinder = calculate_volume_cylinder(radius, height);

	//Displaying Volume of a Cylinder
	printf("Volume of a cylinder: volume_cylinder = PI * radius^2 * height = %lf * %lf^2 * %lf = %lf \n", PI, radius, height, volume_cylinder);
	
	//getting plaintext_character and shift variable inputs from user
	printf("Enter one character and one integer for use in a character encoding equation : ");
	scanf(" %c%d", &plaintext_character, &shift); //ignoring whitespace???

	perform_character_encoding(plaintext_character);

	// displaying encoded character calculation
	printf("Encoded character: encoded_character = (plaintext_character - 'A') + 'a' + shift = (%c - 'A') + 'a' + %d = %c\n", plaintext_character, shift, encoded_character);

	//Getting mass1, mass2, and distance values input values from user
	printf("Enter the first mass, second mass, and distance as floating point values for use in a gravity equation: ");
	scanf("%lf%lf%lf", &mass1, &mass2, &distance_g);

	printf("Force of Gravity: Force = Gravity * Mass1 * Mass2/Distance^2 = %lf * %lf * %lf / %lf ^2 : \n ", G, mass1, mass2, distance);

	//Getting theta variable input from user
	printf("Enter a floating point value for theta for use in a Tangent equation: ");
	scanf("%lf", &theta);

	tan_theta = calculate_tangent(theta);

	// Displaying Tangent
	printf("Tangent: tan_theta = sin(theta) / cos(theta) = sin(%lf) / cos(%lf) = %lf\n", theta, theta, tan_theta);

	//Getting Equivalent Parallel Resistance variable input from user
	printf("Enter three integer values for use in a Equivalent Parallel Reistance equation: ");
	scanf("%d%d%d", &R1, &R2, &R3);

	parallel_resistance = calculate_parallel_resistance(R1, R2, R3);

	// Displaying Equivalent Parallel Reistance calculation
	printf("Equivalent Parallel Resistance: parallel_resistance = 1 / ((1 / R1) + (1 / R2) + (1 / R3)) = 1 / ((1 / %d) + (1 / %d) + (1 / %d)) = %lf\n",
		R1, R2, R3, parallel_resistance);

	//Getting four points variable input from user
	printf("Enter four points as floating-point values for use in a distance between two points equation: ");
	scanf("%lf%lf%lf%lf", &x_1, &y_1, &x_2, &y_2);

	distance = calculate_distance_between_2pts(x_1, y_1, x_2, y_2);

	// Displaying distance between two points
	printf("Distance between two points: distance = sqrt((x_1 - x_2)^2 + (y_1 - y_2)^2) = sqrt((%lf - %lf)^2 + (%lf - %lf)^2) = %lf\n",
		x_1, x_2, y_1, y_2, distance);

	// Getting General Equation variable input from user
	printf("Enter three floating point values and one integer for use in a general equation: ");
	scanf("%lf%lf%lf%d", &b, &z, &x, &a);

	y = calculate_general_equation(a, x, z);

	// Displaying General Equation
	printf("General Equation: y = 7 / 5 * x / a + z - a / (a % 2) + PI = 7 / 5 * %lf / %lf + %lf - %lf / (%lf % 2) + PI\n",
		x, a, z, a, a, PI);

	return 0;
};