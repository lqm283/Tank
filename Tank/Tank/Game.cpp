#include "stdafx.h"
#include "Game.h"


CGame::CGame()
{
}


CGame::~CGame()
{
}


void CGame::SetHandle(HWND hWnd) {       //����������ڵľ��
	m_hWnd = hWnd;
}           
bool CGame::EnterFrame(DWORD dwTime) {   //������Ϸ֡
	return false;
}       
void CGame::OnMouseMove(UINT nFlags, CPoint point) {  //��������ƶ��¼�

}    
void CGame::OnLButtonUp(UINT nFlags, CPoint point) {  //�������̧���¼�

}    