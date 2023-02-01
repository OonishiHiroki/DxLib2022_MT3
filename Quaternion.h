#pragma once
#include <cmath>

class Quaternion {
public:
	float x;
	float y;
	float z;
	float w;

	Quaternion();
	Quaternion(float x, float y, float z, float w);

public:
	// Quaternionの積
	Quaternion Multiply(const Quaternion& lhs, const Quaternion& rhs);
	// 単位Quaternionを返す
	Quaternion IdentityQuaternion();
	// 共役Quaternionを返す
	Quaternion Conjugate(const Quaternion& quaternion);
	// Quaternionのnormを返す
	float Norm(const Quaternion& quaternion);
	// 正規化したQuaternionを返す
	Quaternion Normalize(const Quaternion& quaternion);
	// 逆Quaternionを返す
	Quaternion Inverse(const Quaternion& quaternion);

};
const Quaternion operator/(const Quaternion& qr, float s);

