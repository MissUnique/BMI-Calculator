#include <iostream>

using namespace std;

main () {
    // Variables
    float height, weight, BMI;

    // Implement User Input
    cout << "Welcome to Azza's BMI Calculator ^_^!\n";
    cout << "Please enter your height and weight:\n";
    cout << "Height (m): ";
    cin >> height;
    cout << "Weight (kg): ";
    cin >> weight;

    // Implement BMI Calculation (weight / height^2)
    BMI = weight / (height * height);
    cout << "Your BMI is: " << BMI << '\n';

    // Interpret BMI Results
    if (BMI < 18.5)
        cout << "Weight Status: Underweight.";
    else if (BMI < 25)
        cout << "Weight Status: Healthy Weight.";
    else if (BMI < 30)
        cout << "Weight Status: Overweight.";
    else
        cout << "Weight Status: Obesity.";
}
