#include "stdafx.h"
#include "Game.h"


CGame::CGame()
{
}


CGame::~CGame()
{
}


void CGame::SetHandle(HWND hWnd) {       //设置输出窗口的句柄
	m_hWnd = hWnd;
}           
bool CGame::EnterFrame(DWORD dwTime) {   //进入游戏帧
	return false;
}       
void CGame::OnMouseMove(UINT nFlags, CPoint point) {  //处理鼠标移动事件

}    
void CGame::OnLButtonUp(UINT nFlags, CPoint point) {  //处理左键抬起事件

}    