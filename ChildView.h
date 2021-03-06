
// ChildView.h : interface of the CChildView class
//


#pragma once
#include "ShaderWnd/ShaderWnd.h"
#include "Mesh.h"
#include "Sphere.h"
#include "Torus.h"
#include "graphics\GrTexture.h"
#include "graphics\GrCubeTexture.h"

// CChildView window

class CChildView : public CShaderWnd
{
// Construction
public:
	CChildView();

// Attributes
public:
	CGrTexture m_catTex;
	CGrTexture m_sphereTex;
	CGrTexture m_torusTex;
	CGrTexture m_letterTex;
	CGrCubeTexture m_cubeTex;
	CMesh m_cat;
	CSphere m_sphere;
	CSphere m_metallicSphere;
	CMesh m_skybox;
	CMesh m_letter;
	CTorus m_torus;

// Operations
public:

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

public:
	virtual void RenderGL();
	virtual void InitGL();
	virtual void CleanGL();

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

