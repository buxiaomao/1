#pragma once
#include<afxwin.h>

class myapp : public CWinApp
{
public:
	virtual BOOL InitInstance();

};




class myframe :public CFrameWnd
{
public:

	myframe();

	//ÉùÃ÷ÏûÏ¢Ó³Éäºê
	DECLARE_MESSAGE_MAP()
	afx_msg void OnLButtonDown(UINT, CPoint);



private:
};
