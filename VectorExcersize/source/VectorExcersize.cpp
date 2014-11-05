#include "Vector3.h"
#include <iostream>

using namespace std;
int main()
{
	float boost = 4.f;
	Vector3 v1 = Vector3(6, 3, 7);
	Vector3 v2 = Vector3(2, 4, 3);
	Vector3 v3 = Vector3(1, 2, 3);
	Vector3 v4;
	Vector3 v5 = Vector3(12.32, 8.76, -4.24);

	float ang = v1.AngleCalculator(v2);
	cout <<  ang << endl;

	system("Pause");
	return 0;
}

