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
	// Quaternion�̐�
	Quaternion Multiply(const Quaternion& lhs, const Quaternion& rhs);
	// �P��Quaternion��Ԃ�
	Quaternion IdentityQuaternion();
	// ����Quaternion��Ԃ�
	Quaternion Conjugate(const Quaternion& quaternion);
	// Quaternion��norm��Ԃ�
	float Norm(const Quaternion& quaternion);
	// ���K������Quaternion��Ԃ�
	Quaternion Normalize(const Quaternion& quaternion);
	// �tQuaternion��Ԃ�
	Quaternion Inverse(const Quaternion& quaternion);

};
const Quaternion operator/(const Quaternion& qr, float s);

