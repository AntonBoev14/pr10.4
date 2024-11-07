#include <iostream>
#include <cmath> 
#define M_PI 3.14
using namespace std;

void calculateCircleCharacteristics(double radius, double& circumference, double& area) {
    circumference = 2 * M_PI * radius; 
    area = M_PI * radius * radius; 
}

int main() {
    setlocale(0, "ru");
    double radius1, radius2;
    double circumference1, area1;
    double circumference2, area2;

    cout << "Введите радиус первой окружности: ";
    cin >> radius1;

    cout << "Введите радиус второй окружности: ";
    cin >> radius2;

    calculateCircleCharacteristics(radius1, circumference1, area1);

    calculateCircleCharacteristics(radius2, circumference2, area2);

   cout << "Характеристики первой окружности (радиус = " << radius1 << "):\n";
   cout << "Длина окружности: " << circumference1 << "\n";
   cout << "Площадь: " << area1 << "\n";

   cout << "Характеристики второй окружности (радиус = " << radius2 << "):\n";
   cout << "Длина окружности: " << circumference2 << "\n";
   cout << "Площадь: " << area2 << "\n";

    return 0;
}
