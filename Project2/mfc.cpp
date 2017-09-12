#include "mfc.h"

//有且只有一个全局的应用程序对象
// 在程序入口函数实现功能  隐含了入口 
 //  1 给框架类对象动态分配空间
//   2 框架类对象创建窗口
// 3 显示窗口 showwindow
// 4 更新窗口  updatewindows
// 5 保存窗口类指针

// 事件处理  ：：消息映射
myapp a;

//程序的入口地址
BOOL myapp::InitInstance()
{
	/*
	创建框架类对象
	显示窗口
	更新窗口

	保存框架类对象指针
	*/
	myframe  *frame = new myframe;
	frame->ShowWindow(SW_SHOWNORMAL);
	frame->UpdateWindow();

	m_pMainWnd = frame;


	return  TRUE;
}


BEGIN_MESSAGE_MAP(myframe, CFrameWnd)

	ON_WM_LBUTTONDOWN()

END_MESSAGE_MAP()

myframe::myframe()
{
	Create(NULL, TEXT("MFC"));
}

void myframe::OnLButtonDown(UINT, CPoint)
{
	MessageBox(TEXT("鼠标左键"));
}
