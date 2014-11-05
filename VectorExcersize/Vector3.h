#pragma once
class Vector3
{
public:
	float x, y, z;
	Vector3();
	~Vector3();
	Vector3 operator+(Vector3 &other);
	Vector3 operator-(Vector3 &other);
	Vector3 operator=(Vector3 &other);
	Vector3 operator*(float scalar);
	float Magnitude();
	void Normalise();
	Vector3 GetNormal();
};

