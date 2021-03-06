#pragma once

#include "mjType.h"

float dist(mjPos3 &a, mjPos3 &b);
float dist(mjPos3 &a, mjVec3 &b);
float dist(mjVec3 &v, mjVec3 &w);
float circ(std::vector<mjPos3> c);

// @brief : 선분 밖의 한 점을 선분으로 투영한다
mjPos3 projectToLineSegment(mjPos3 &p, mjPos3 &v, mjPos3 &w);

// @brief : 선분 밖의 한 점으로부터 선분까지의 거리를 구한다
float distToLineSegment(mjPos3 &p, mjPos3 &v, mjPos3 &w);

// @brief : 평면과 직선의 교차점을 구한다
bool get_intersection(mjPlane &pln, mjPos3 &p, mjPos3 &q, mjPos3 &intersection);

// @brief : 평면과 삼각 메쉬의 교차 여부를 알려준다
bool intersect_plane_mesh(mjPlane &pln, mjPos3 &p0, mjPos3 &p1, mjPos3 &p2, std::vector<mjPos3> &intersections);

// @brief : 벡터 안에 주어진 요소가 있는지 탐색한다
// @param[in] n : 탐색하는 요소
// @param[in] vec : 탐색할 범위
template <typename T>
bool find(T n, std::vector<T> vec) {
	for (T v : vec) {
		if (v == n)
			return true;
	}

	return false;
}
