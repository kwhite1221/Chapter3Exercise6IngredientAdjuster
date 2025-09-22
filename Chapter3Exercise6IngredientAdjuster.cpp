/*
Project Name: Chapter 3 Exercise 6 Ingredient Adjuster
File Name: Chapter3Exercise6IngredientAdjuster.cpp
Programmer: Kristen White
Date 9/21/2025
Requirements:
A cookie recipe calls for ingredients. Write a program that asks the 
use how many cookies he or she wants to make, then displays the number
of cups of each ingredient needed for the specified number of cookies
*/
#include <iostream> // we will always need this library for writing
// to the console and reading from the keyboard
using namespace std;

int main()
{
	// Recipe constants for 48 cookies
	const double sugar = 1.5;
	const double butter = 1.0;
	const double flour = 2.75;
	const int cookies = 48;

	int desiredCookies;
	cout << "How many cookies do you want to make? ";
	cin >> desiredCookies;

	// adjusting the scale factors
	double scale = static_cast <double> (desiredCookies) / cookies;

	// Calculate the ingredients amount
	double neededSugar = sugar * scale;
	double neededButter = butter * scale;
	double neededFlour = flour * scale;

	//Display results
	cout << "To make " << desiredCookies << " cookies, you need: ";
	cout << neededSugar << " cups of sugar";
	cout << neededButter << " cups of butter";
	cout << neededFlour << " cups of flour";

	return 0;

}