#include "Vector3.h"
#include <iostream>

using namespace std;
int main()
{
	Vector3 v1 = Vector3(6, 3, 7);
	Vector3 v2 = Vector3(2, 4, 3);
	Vector3 v3 = Vector3(1, 2, 3);
	Vector3 v4;
	Vector3 v5 = Vector3(12.32, 8.76, -4.24);

	v4 = v5 * v2;

	cout << v4.x << ", " << v4.y << ", " << v4.z << endl;

	cout << v4.VectorDistance(v3) << endl;

	system("Pause");
	return 0;
}

