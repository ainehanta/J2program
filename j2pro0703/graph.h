/* 体験入学で使うグラフィックライブラリ graph.c のための定義 */

#ifndef GRAPH_H_INCLUDED

#define	GRAPH_H_INCLUDED	1

#include	<X11/Xlib.h>
#include	<unistd.h>

//#define		LANGUAGE_JAPANESE		/* 日本語プログラミング */
#define		PROVIDE_MAIN			/* graph.c が main() を含む */

#ifdef	LANGUAGE_JAPANESE
#include	"japanese.h"
#endif

/* 色の名前 */
#ifdef LANGUAGE_JAPANESE
	#define		黒				0
	#define		青				1
	#define		茶色			2
	#define		金色			3
	#define		灰色			4
	#define		緑				5
	#define		水色			6
	#define		明るい灰色		7
	#define		明るい緑		8
	#define		ピンク			9
	#define		パープル		10
	#define		赤				11
	#define		紫				12
	#define		白				13
	#define		黄色			14
#else /* LANGUAGE != JAPANESE */
	#define		BLACK			0
	#define		BLUE			1
	#define		BROWN			2
	#define		GOLD			3
	#define		GRAY			4
	#define		GREEN			5
	#define		LIGHTBLUE		6
	#define		LIGHTGRAY		7
	#define		LIGHTGREEN		8
	#define		PINK			9
	#define		PURPLE			10
	#define		RED				11
	#define		VIOLET			12
	#define		WHITE			13
	#define		YELLOW			14
#endif /* LANGUAGE == JAPANESE */

/* このモジュールで定義するグローバルな関数 */

/* プログラムの最初に一度だけ実行する，おまじない */
extern	void
initGraph(void);

/* プログラムの最後に一度だけ実行する，おまじない */
extern	void
closeGraph(void);

/* ボタンが押されるのを待つ */
extern	void
#ifdef LANGUAGE_JAPANESE
ボタンが押されるのを待つ(void);
#else
waitButtonPress(void);
#endif

/* 座標 (x,y) に 色 c の点を打つ */
extern	void
#ifdef LANGUAGE_JAPANESE
点を描く(int x,int y,int c);
#else
drawPoint(int x,int y,int c);
#endif

/* 中心 (x,y)，半径 r，色 c の円を描く */
extern	void
#ifdef LANGUAGE_JAPANESE
円を描く(int x,int y,int r,int c);
#else
drawCircle(int x,int y,int r,int c);
#endif

/* 中心 (x,y)，半径 r の円の内部を色 c で塗りつぶす */
extern	void
#ifdef LANGUAGE_JAPANESE
円を塗りつぶす(int x,int y,int r,int c);
#else
fillCircle(int x,int y,int r,int c);
#endif

/* 中心 (x,y)，x 方向の径 rx，y 方向の径 ry，色 c の楕円を描く */
extern	void
#ifdef LANGUAGE_JAPANESE
楕円を描く(int x,int y,int rx,int ry,int c);
#else
drawEllipse(int x,int y,int rx,int ry,int c);
#endif

/* 中心 (x,y)，x 方向の径 rx，y 方向の径 ry の楕円の内部を色 c で塗りつぶす */
extern	void
#ifdef LANGUAGE_JAPANESE
楕円を塗りつぶす(int x,int y,int rx,int ry,int c);
#else
fillEllipse(int x,int y,int rx,int ry,int c);
#endif

/* (x1,y1),(x2,y2),(x3,y3) を頂点とする，色 c の三角形を描く */
extern	void
#ifdef LANGUAGE_JAPANESE
三角形を描く(int x1,int y1,int x2,int y2,int x3,int y3,int c);
#else
drawTriangle(int x1,int y1,int x2,int y2,int x3,int y3,int c);
#endif

/* (x1,y1),(x2,y2),(x3,y3) を頂点とする三角形の内部を色 c で塗りつぶす */
extern	void
#ifdef LANGUAGE_JAPANESE
三角形を塗りつぶす(int x1,int y1,int x2,int y2,int x3,int y3,int c);
#else
fillTriangle(int x1,int y1,int x2,int y2,int x3,int y3,int c);
#endif

/* (x1,y1),(x2,y2) を頂点とする，色 c の長方形を描く */
extern	void
#ifdef LANGUAGE_JAPANESE
四角形を描く(int x1,int y1,int x2,int y2,unsigned int c);
#else
drawRectangle(int x1,int y1,int x2,int y2,unsigned int c);
#endif

/* (x1,y1),(x2,y2) を頂点とする長方形の内部を色 c で塗りつぶす */
extern	void
#ifdef LANGUAGE_JAPANESE
四角形を塗りつぶす(int x1,int y1,int x2,int y2,unsigned int c);
#else
fillRectangle(int x1,int y1,int x2,int y2,unsigned int c);
#endif

/* (x1,y1),(x2,y2) を結ぶ，色 c の線分を描く */
extern	void
#ifdef LANGUAGE_JAPANESE
線を描く(int x1,int y1,int x2,int y2,unsigned int c);
#else
drawLine(int x1,int y1,int x2,int y2,unsigned int c);
#endif

/* draw???? で描く線の太さを設定する（l >= 0） */
extern	void
#ifdef LANGUAGE_JAPANESE
線の太さを設定する(int l);
#else
setLineWidth(int l);
#endif

/* 点(x,y) を含む，色 border で囲まれた領域を，色 fill で塗りつぶす */
extern	void
#ifdef LANGUAGE_JAPANESE
囲まれた領域を塗りつぶす(int x,int y,int border,int fill);
#else
floodFill(int x,int y,int border,int fill);
#endif

/* (x,y) の位置に文字列 str を色 c で描く */
extern	void
#ifdef LANGUAGE_JAPANESE
文字を描く(int x,int y,char *str,int c);
#else
drawString(int x,int y,char *str,int c);
#endif

/* コマンドキューをフラッシュして画面を更新する */
extern	void
flush(void);

#endif /* GRAPH_H_INCLUDED */
