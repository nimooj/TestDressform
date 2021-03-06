#pragma once

#include "mjType.h"

float dist(mjPos3 &a, mjPos3 &b);
float dist(mjPos3 &a, mjVec3 &b);
float dist(mjVec3 &v, mjVec3 &w);
float circ(std::vector<mjPos3> c);

// @brief : ���� ���� �� ���� �������� �����Ѵ�
mjPos3 projectToLineSegment(mjPos3 &p, mjPos3 &v, mjPos3 &w);

// @brief : ���� ���� �� �����κ��� ���б����� �Ÿ��� ���Ѵ�
float distToLineSegment(mjPos3 &p, mjPos3 &v, mjPos3 &w);

// @brief : ���� ������ �������� ���Ѵ�
bool get_intersection(mjPlane &pln, mjPos3 &p, mjPos3 &q, mjPos3 &intersection);

// @brief : ���� �ﰢ �޽��� ���� ���θ� �˷��ش�
bool intersect_plane_mesh(mjPlane &pln, mjPos3 &p0, mjPos3 &p1, mjPos3 &p2, std::vector<mjPos3> &intersections);

// @brief : ���� �ȿ� �־��� ��Ұ� �ִ��� Ž���Ѵ�
// @param[in] n : Ž���ϴ� ���
// @param[in] vec : Ž���� ����
template <typename T>
bool find(T n, std::vector<T> vec) {
	for (T v : vec) {
		if (v == n)
			return true;
	}

	return false;
}
