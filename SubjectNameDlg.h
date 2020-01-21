#pragma once


// SubjectNameDlg dialog

class SubjectNameDlg : public CDialogEx
{
	DECLARE_DYNAMIC(SubjectNameDlg)

public:
	SubjectNameDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~SubjectNameDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = SUBJECT_NAME_DLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileNewSubject();
};
