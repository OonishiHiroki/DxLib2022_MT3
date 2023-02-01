#include "Quaternion.h"

using namespace std;

Quaternion::Quaternion()
	:x(0), y(0), z(0), w(0) {
}

Quaternion::Quaternion(float x, float y, float z, float w)
	: x(x), y(y), z(z), w(w) {
}

Quaternion Quaternion::Multiply(const Quaternion& lhs, const Quaternion& rhs) {
	Quaternion mp;

	mp.w = ((lhs.w * rhs.w) - (lhs.x * rhs.x) - (lhs.y * rhs.y) - (lhs.z * rhs.z));
	mp.x = ((lhs.y * rhs.z) - (lhs.z * rhs.y) + (rhs.w * lhs.x) + (lhs.w * rhs.x));
	mp.y = ((lhs.z * rhs.x) - (lhs.x * rhs.z) + (rhs.w * lhs.y) + (lhs.w * rhs.y));
	mp.z = ((lhs.x * rhs.y) - (lhs.y * rhs.x) + (rhs.w * lhs.z) + (lhs.w * rhs.z));

	return mp;
}

Quaternion Quaternion::IdentityQuaternion() {
	Quaternion iy(0, 0, 0, 1);

	return iy;
}

Quaternion Quaternion::Conjugate(const Quaternion& quaternion) {
	Quaternion cj(-quaternion.x, -quaternion.y, -quaternion.z, 1);

	return cj;
}

float Quaternion::Norm(const Quaternion& quaternion) {
	float norm = sqrt(quaternion.x * quaternion.x + quaternion.y * quaternion.y + quaternion.z * quaternion.z + quaternion.w * quaternion.w);

	return norm;
}

Quaternion Quaternion::Normalize(const Quaternion& quaternion) {
	float len = Norm(quaternion);

	if (len != 0) {

		Quaternion nl(quaternion);

		nl.x /= len;
		nl.y /= len;
		nl.z /= len;
		nl.w /= len;

		return nl;
	}

	return quaternion;
}

Quaternion Quaternion::Inverse(const Quaternion& quaternion) {
	Quaternion iv;

	iv = Conjugate(quaternion) / (Norm(quaternion) * Norm(quaternion));

	return iv;
}

const Quaternion operator/(const Quaternion& qr, float s) {
	Quaternion temp(qr);

	temp.x /= s;
	temp.y /= s;
	temp.z /= s;
	temp.w /= s;

	return temp;
}

