#include <stdio.h>

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double kg_to_pounds(double kg) {
    return kg * 2.20462;
}

double pounds_to_kg(double pounds) {
    return pounds / 2.20462;
}

double meters_to_feet(double meters) {
    return meters * 3.28084;
}

double feet_to_meters(double feet) {
    return feet / 3.28084;
}

int main() {
    int choice;
    double value;

    printf("Unit Converter Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Kilograms to Pounds\n");
    printf("4. Pounds to Kilograms\n");
    printf("5. Meters to Feet\n");
    printf("6. Feet to Meters\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &value);
            printf("Temperature in Fahrenheit: %.2f\n", celsius_to_fahrenheit(value));
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &value);
            printf("Temperature in Celsius: %.2f\n", fahrenheit_to_celsius(value));
            break;
        case 3:
            printf("Enter weight in Kilograms: ");
            scanf("%lf", &value);
            printf("Weight in Pounds: %.2f\n", kg_to_pounds(value));
            break;
        case 4:
            printf("Enter weight in Pounds: ");
            scanf("%lf", &value);
            printf("Weight in Kilograms: %.2f\n", pounds_to_kg(value));
            break;
        case 5:
            printf("Enter length in Meters: ");
            scanf("%lf", &value);
            printf("Length in Feet: %.2f\n", meters_to_feet(value));
            break;
        case 6:
            printf("Enter length in Feet: ");
            scanf("%lf", &value);
            printf("Length in Meters: %.2f\n", feet_to_meters(value));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
