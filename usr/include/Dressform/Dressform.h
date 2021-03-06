#ifdef DRESSFORM_EXPORTS
#define DRESSFORM_API __declspec(dllexport)
#else
#define DRESSFORM_API __declspec(dllimport)
#endif

#pragma once

/*
#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
*/

#include "MeshObject/HumanObject.h"

#include "bgl/BGL.h"

class DRESSFORM_API CDressform {
public:
	CDressform();

	HumanObject *m_Human;
	GPP::PointCloud *m_PointCloudData;

	void LoadHumanObj(const char* fname);
	void Convert2BGL(std::vector<mjVertex*> mVerts);

	void GenerateSkirt();
	void GenerateDress();

};
