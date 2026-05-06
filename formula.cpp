#include <iostream>
#include <cmath>

int main() {
    using std::cout;
    using std::cin;

    // Use a constant for Pi to keep calculations accurate
    const double PI = 3.141592653589793;
    int choice;

    cout << "[1] Area | [2] Circumference/Perimeter | [3] Volume : ";
    cin >> choice;

    if (choice == 1) { // AREA
        cout << "[1] 3D (Surface Area) | [2] 2D : ";
        cin >> choice;

        if (choice == 1) { // 3D Surface Area
            cout << "[1] Cube | [2] Cuboid | [3] Sphere | [4] Cone : ";
            cin >> choice;
            if (choice == 1) {
                double side;
                cout << "Side length: "; cin >> side;
                cout << "Surface Area: " << 6 * (side * side);
            }
            else if (choice == 2) {
                double l, w, h;
                cout << "Length, Width, Height: "; cin >> l >> w >> h;
                cout << "Surface Area: " << 2 * (l * w + w * h + h * l);
            }
            else if (choice == 3) {
                double r;
                cout << "Radius: "; cin >> r;
                cout << "Surface Area: " << 4 * PI * (r * r);
            }
            else if (choice == 4) {
                double r, s;
                cout << "Radius and Slant Height: "; cin >> r >> s;
                cout << "Surface Area: " << PI * r * (r + s);
            }
        }
        else if (choice == 2) { // 2D Area
            cout << "[1] Square | [2] Rectangle | [3] Circle : ";
            cin >> choice;
            if (choice == 1) {
                double s; cout << "Side: "; cin >> s;
                cout << "Area: " << s * s;
            }
            else if (choice == 2) {
                double l, w; cout << "Length and Width: "; cin >> l >> w;
                cout << "Area: " << l * w;
            }
            else if (choice == 3) {
                double r; cout << "Radius: "; cin >> r;
                cout << "Area: " << PI * (r * r);
            }
        }
    }
    else if (choice == 2) { // CIRCUMFERENCE / PERIMETER
        cout << "[1] Circle | [2] Square | [3] Rectangle : ";
        cin >> choice;
        if (choice == 1) {
            double r; cout << "Radius: "; cin >> r;
            cout << "Circumference: " << 2 * PI * r;
        }
        else if (choice == 2) {
            double s; cout << "Side: "; cin >> s;
            cout << "Perimeter: " << 4 * s;
        }
        else if (choice == 3) {
            double l, w; cout << "Length and Width: "; cin >> l >> w;
            cout << "Perimeter: " << 2 * (l + w);
        }
    }
    else if (choice == 3) { // VOLUME
        cout << "[1] Cube | [2] Cuboid | [3] Sphere | [4] Cylinder : ";
        cin >> choice;
        if (choice == 1) {
            double s; cout << "Side: "; cin >> s;
            cout << "Volume: " << pow(s, 3);
        }
        else if (choice == 2) {
            double l, w, h; cout << "Length, Width, Height: "; cin >> l >> w >> h;
            cout << "Volume: " << l * w * h;
        }
        else if (choice == 3) {
            double r; cout << "Radius: "; cin >> r;
            cout << "Volume: " << (4.0 / 3.0) * PI * pow(r, 3);
        }
        else if (choice == 4) {
            double r, h; cout << "Radius and Height: "; cin >> r >> h;
            cout << "Volume: " << PI * (r * r) * h;
        }
    }

    cout << "\n";
    return 0;
}
