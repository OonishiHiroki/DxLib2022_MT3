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
	// Quaternion‚ÌÏ
	Quaternion Multiply(const Quaternion& lhs, const Quaternion& rhs);
	// ’PˆÊQuaternion‚ğ•Ô‚·
	Quaternion IdentityQuaternion();
	// ‹¤–ğQuaternion‚ğ•Ô‚·
	Quaternion Conjugate(const Quaternion& quaternion);
	// Quaternion‚Ìnorm‚ğ•Ô‚·
	float Norm(const Quaternion& quaternion);
	// ³‹K‰»‚µ‚½Quaternion‚ğ•Ô‚·
	Quaternion Normalize(const Quaternion& quaternion);
	// ‹tQuaternion‚ğ•Ô‚·
	Quaternion Inverse(const Quaternion& quaternion);

};
const Quaternion operator/(const Quaternion& qr, float s);

