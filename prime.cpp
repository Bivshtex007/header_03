#include <iostream>
#include <cmath>
#include "sphere_around.h"
#include "sphere_inside.h"
#include "cube.h"
#include "pyramid_inside.h"
using namespace std;

int main() {

	int (a);

	cout << "Enter Length of the Side of the Cube" << endl;
	cin >> a;
	cout << "Volume of Cube = " << cube(a) << endl;
	cout << "Volume of Pyramid inside Cube = " << pyramid_inside(a) << endl;
	cout << "Volume of Sphere inside Cube = " << sphere_inside(a) << endl;
	cout << "Volume of Sphere around Cube = " << sphere_around(a) << endl;

	return 0;

}