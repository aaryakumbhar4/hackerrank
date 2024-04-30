#include <stdio.h>

typedef struct Temperature {
  float celsius;
  float fahrenheit;
} Temperature;

float celsiusToFahrenheit(Temperature temp) {
  return (temp.celsius * 9.0 / 5.0) + 32.0;
}

float fahrenheitToCelsius(Temperature temp) {
  return (temp.fahrenheit - 32.0) * 5.0 / 9.0;
}

void printTemperature(Temperature temp) {
  printf("Celsius: %f\n Farenheit: %f\n", temp.celsius, temp.fahrenheit);
}

int main() {
  Temperature temp;
  int choice;

  do {
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp.celsius);

    temp.fahrenheit = celsiusToFahrenheit(temp);
    printTemperature(temp);

    printf("Do you want to convert another temperature (1/0)? 1 for continue and 0 for stop:\n");
    scanf(" %d", &choice);
  } while (choice == 1);

  printf("Exiting....");

  return 0;
}
