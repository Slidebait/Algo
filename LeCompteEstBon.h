// LeCompteEstBon.h : main header file for the LECOMPTEESTBON application
//

#if !defined(AFX_LECOMPTEESTBON_H__E221CC05_79CB_44DC_8C78_03D1E2A881A3__INCLUDED_)
#define AFX_LECOMPTEESTBON_H__E221CC05_79CB_44DC_8C78_03D1E2A881A3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CLeCompteEstBonApp:
// See LeCompteEstBon.cpp for the implementation of this class
//

class CLeCompteEstBonApp : public CWinApp
{
public:
	CLeCompteEstBonApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLeCompteEstBonApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CLeCompteEstBonApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LECOMPTEESTBON_H__E221CC05_79CB_44DC_8C78_03D1E2A881A3__INCLUDED_)
