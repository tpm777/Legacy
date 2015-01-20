#if !defined(AFX_MDCOPTIONBUTTON_H__AD710761_9E4A_11D2_A2AB_006008043EC4__INCLUDED_)
#define AFX_MDCOPTIONBUTTON_H__AD710761_9E4A_11D2_A2AB_006008043EC4__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class COleFont;
class CPicture;

/////////////////////////////////////////////////////////////////////////////
// CMdcOptionButton wrapper class

class CMdcOptionButton : public CWnd
{
protected:
	DECLARE_DYNCREATE(CMdcOptionButton)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x8bd21d50, 0xec42, 0x11ce, { 0x9e, 0xd, 0x0, 0xaa, 0x0, 0x60, 0x2, 0xf3 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	void SetAccelerator(LPCTSTR lpszNewValue);
	CString GetAccelerator();
	void SetAlignment(long nNewValue);
	long GetAlignment();
	void SetAutoSize(BOOL bNewValue);
	BOOL GetAutoSize();
	void SetBackColor(long nNewValue);
	long GetBackColor();
	void SetBackStyle(long nNewValue);
	long GetBackStyle();
	void SetCaption(LPCTSTR lpszNewValue);
	CString GetCaption();
	void SetEnabled(BOOL bNewValue);
	BOOL GetEnabled();
	void SetRefFont(LPDISPATCH newValue);
	COleFont GetFont();
	void SetForeColor(long nNewValue);
	long GetForeColor();
	void SetLocked(BOOL bNewValue);
	BOOL GetLocked();
	void SetMouseIcon(LPDISPATCH newValue);
	void SetRefMouseIcon(LPDISPATCH newValue);
	CPicture GetMouseIcon();
	void SetMousePointer(long nNewValue);
	long GetMousePointer();
	void SetPicture(LPDISPATCH newValue);
	void SetRefPicture(LPDISPATCH newValue);
	CPicture GetPicture();
	void SetPicturePosition(long nNewValue);
	long GetPicturePosition();
	void SetSpecialEffect(long nNewValue);
	long GetSpecialEffect();
	void SetTripleState(BOOL bNewValue);
	BOOL GetTripleState();
	void SetValue(VARIANT* newValue);
	VARIANT GetValue();
	void SetWordWrap(BOOL bNewValue);
	BOOL GetWordWrap();
	void SetGroupName(LPCTSTR lpszNewValue);
	CString GetGroupName();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MDCOPTIONBUTTON_H__AD710761_9E4A_11D2_A2AB_006008043EC4__INCLUDED_)
