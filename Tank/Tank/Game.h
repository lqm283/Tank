#pragma once
class CGame
{
public:
	CGame();
	~CGame();
	void SetHandle(HWND hWnd);           //����������ڵľ��
	bool EnterFrame(DWORD dwTime);       //������Ϸ֡
	void OnMouseMove(UINT nFlags, CPoint point);    //��������ƶ��¼�
	void OnLButtonUp(UINT nFlags, CPoint point);    //�������̧���¼�

private:
	HWND m_hWnd;                      //����
};
