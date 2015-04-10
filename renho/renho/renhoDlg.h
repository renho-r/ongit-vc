
// renhoDlg.h : header file
//

#pragma once


// CrenhoDlg dialog
class CrenhoDlg : public CDialogEx
{
// Construction
public:
	CrenhoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_RENHO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton2();
	CString m_showstr;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
};
