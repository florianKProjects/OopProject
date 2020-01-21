// SubjectNameDlg.cpp : implementation file
//

#include "pch.h"
#include "todo_test.h"
#include "SubjectNameDlg.h"
#include "afxdialogex.h"
#include <string>
#include <tchar.h>

using namespace std;

// SubjectNameDlg dialog

IMPLEMENT_DYNAMIC(SubjectNameDlg, CDialogEx)

SubjectNameDlg::SubjectNameDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(SUBJECT_NAME_DLG, pParent)
{
	string* contextvaluse = new string[4];
	contextvaluse[0] = "living room";
	contextvaluse[1] = "kitchen";
	contextvaluse[2] = "Garden";
	contextvaluse[3] = "bathroom";

	for (int i = 0; i < 4; i++)
	{
		//str.Format(_T(contextvaluse[i]));
		comboboxContextType.InsertString(_T(contextvaluse[i]));
		//ContextList->AddString(contextvaluse);
}

SubjectNameDlg::~SubjectNameDlg()
{
}

void SubjectNameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CONTEXT, ContextList);
	DDX_Control(pDX, IDC_COMBO1, comboboxContextType);
}


BEGIN_MESSAGE_MAP(SubjectNameDlg, CDialogEx)
	//ON_COMMAND(ID_FILE_NEW_SUBJECT, &SubjectNameDlg::OnFileNewSubject)
	ON_EN_CHANGE(SUBJECT_NAME, &SubjectNameDlg::OnEnChangeName)
	ON_BN_CLICKED(BTN_RD_HOME, &SubjectNameDlg::OnBnClickedRdHome)
	ON_CBN_SELCHANGE(IDC_COMBOBOXEX1, &SubjectNameDlg::OnCbnSelchangeComboboxex1)
	ON_CBN_SELCHANGE(IDC_CONTEXT, &SubjectNameDlg::OnCbnSelchangeContext)
END_MESSAGE_MAP()


// SubjectNameDlg message handlers

void SubjectNameDlg::OnEnChangeName()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void SubjectNameDlg::OnBnClickedCheck1()
{
	// TODO: Add your control notification handler code here
}


void SubjectNameDlg::OnBnClickedRdHome()
{


}
void SubjectNameDlg::OnCbnSelchangeContext()
{
	
	

}
