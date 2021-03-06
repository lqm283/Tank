
// MainFrm.h: CMainFrame 类的接口
//

#pragma once
#include "Game.h"

#define GAME_WIN_W (300)
#define GAME_WIN_H (200)

class CMainFrame : public CFrameWnd
{
public:
	CMainFrame();

protected: // 仅从序列化创建
	
	DECLARE_DYNCREATE(CMainFrame)

// 特性
public:

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// 实现
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif


// 生成的消息映射函数
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnApplicationLook(UINT id);
	afx_msg void OnUpdateApplicationLook(CCmdUI* pCmdUI);
	DECLARE_MESSAGE_MAP()

	int m_iWidth{ GAME_WIN_W };  //客户区的宽
	int m_iHeight{ GAME_WIN_H }; //客户区的高

	enum ETimerId {ETimerIdGameLoop = 1};
	CGame m_game;
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);

};


