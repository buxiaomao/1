#include "mfc.h"

//����ֻ��һ��ȫ�ֵ�Ӧ�ó������
// �ڳ�����ں���ʵ�ֹ���  ��������� 
 //  1 ����������̬����ռ�
//   2 �������󴴽�����
// 3 ��ʾ���� showwindow
// 4 ���´���  updatewindows
// 5 ���洰����ָ��

// �¼�����  ������Ϣӳ��
myapp a;

//�������ڵ�ַ
BOOL myapp::InitInstance()
{
	/*
	������������
	��ʾ����
	���´���

	�����������ָ��
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
	MessageBox(TEXT("������"));
}
