#pragma once
#include <stdio.h> // for printf and scanf
#include <math.h> // for math functions
#include <stdlib.h> //for standard library
#include <math.h> //for math calculations


#define CRT_SECURE_NO_WARNINGS //to avoid CRT warnings
#define PI 3.1415926 // defining Pi constant value
#define G (6.67 * pow(10, -11)) //defining gravitational constan

double calculate_newtons_2nd_law(double mass, double acceleration);
double calculate_volume_cylinder(double radius, double height);
char perform_character_encoding(char plaintext_character);
double calculate_gravity_force(double mass1, double mass2, double distance);
double calculate_tangent(double theta);
double calculate_parallel_resistance(int R1, int R2, int R3);
double calculate_distance_between_2pts(double x1, double y1, double x2, double y2);
double calculate_general_equation(int a, double x, double z);