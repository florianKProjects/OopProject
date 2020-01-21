
// todo_test.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CtodotestApp:
// See todo_test.cpp for the implementation of this class
//

class CtodotestApp : public CWinApp
{
public:
	CtodotestApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CtodotestApp theApp;
