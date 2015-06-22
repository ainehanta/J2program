/* �θ����ؤǻȤ�����ե��å��饤�֥�� graph.c �Τ������� */

#ifndef GRAPH_H_INCLUDED

#define	GRAPH_H_INCLUDED	1

#include	<X11/Xlib.h>
#include	<unistd.h>

//#define		LANGUAGE_JAPANESE		/* ���ܸ�ץ���ߥ� */
#define		PROVIDE_MAIN			/* graph.c �� main() ��ޤ� */

#ifdef	LANGUAGE_JAPANESE
#include	"japanese.h"
#endif

/* ����̾�� */
#ifdef LANGUAGE_JAPANESE
	#define		��				0
	#define		��				1
	#define		�㿧			2
	#define		�⿧			3
	#define		����			4
	#define		��				5
	#define		�忧			6
	#define		���뤤����		7
	#define		���뤤��		8
	#define		�ԥ�			9
	#define		�ѡ��ץ�		10
	#define		��				11
	#define		��				12
	#define		��				13
	#define		����			14
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

/* ���Υ⥸�塼���������륰���Х�ʴؿ� */

/* �ץ����κǽ�˰��٤����¹Ԥ��롤���ޤ��ʤ� */
extern	void
initGraph(void);

/* �ץ����κǸ�˰��٤����¹Ԥ��롤���ޤ��ʤ� */
extern	void
closeGraph(void);

/* �ܥ��󤬲������Τ��Ԥ� */
extern	void
#ifdef LANGUAGE_JAPANESE
�ܥ��󤬲������Τ��Ԥ�(void);
#else
waitButtonPress(void);
#endif

/* ��ɸ (x,y) �� �� c �������Ǥ� */
extern	void
#ifdef LANGUAGE_JAPANESE
��������(int x,int y,int c);
#else
drawPoint(int x,int y,int c);
#endif

/* �濴 (x,y)��Ⱦ�� r���� c �αߤ����� */
extern	void
#ifdef LANGUAGE_JAPANESE
�ߤ�����(int x,int y,int r,int c);
#else
drawCircle(int x,int y,int r,int c);
#endif

/* �濴 (x,y)��Ⱦ�� r �αߤ������� c ���ɤ�Ĥ֤� */
extern	void
#ifdef LANGUAGE_JAPANESE
�ߤ��ɤ�Ĥ֤�(int x,int y,int r,int c);
#else
fillCircle(int x,int y,int r,int c);
#endif

/* �濴 (x,y)��x �����η� rx��y �����η� ry���� c ���ʱߤ����� */
extern	void
#ifdef LANGUAGE_JAPANESE
�ʱߤ�����(int x,int y,int rx,int ry,int c);
#else
drawEllipse(int x,int y,int rx,int ry,int c);
#endif

/* �濴 (x,y)��x �����η� rx��y �����η� ry ���ʱߤ������� c ���ɤ�Ĥ֤� */
extern	void
#ifdef LANGUAGE_JAPANESE
�ʱߤ��ɤ�Ĥ֤�(int x,int y,int rx,int ry,int c);
#else
fillEllipse(int x,int y,int rx,int ry,int c);
#endif

/* (x1,y1),(x2,y2),(x3,y3) ��ĺ���Ȥ��롤�� c �λ��ѷ������� */
extern	void
#ifdef LANGUAGE_JAPANESE
���ѷ�������(int x1,int y1,int x2,int y2,int x3,int y3,int c);
#else
drawTriangle(int x1,int y1,int x2,int y2,int x3,int y3,int c);
#endif

/* (x1,y1),(x2,y2),(x3,y3) ��ĺ���Ȥ��뻰�ѷ��������� c ���ɤ�Ĥ֤� */
extern	void
#ifdef LANGUAGE_JAPANESE
���ѷ����ɤ�Ĥ֤�(int x1,int y1,int x2,int y2,int x3,int y3,int c);
#else
fillTriangle(int x1,int y1,int x2,int y2,int x3,int y3,int c);
#endif

/* (x1,y1),(x2,y2) ��ĺ���Ȥ��롤�� c ��Ĺ���������� */
extern	void
#ifdef LANGUAGE_JAPANESE
�ͳѷ�������(int x1,int y1,int x2,int y2,unsigned int c);
#else
drawRectangle(int x1,int y1,int x2,int y2,unsigned int c);
#endif

/* (x1,y1),(x2,y2) ��ĺ���Ȥ���Ĺ������������ c ���ɤ�Ĥ֤� */
extern	void
#ifdef LANGUAGE_JAPANESE
�ͳѷ����ɤ�Ĥ֤�(int x1,int y1,int x2,int y2,unsigned int c);
#else
fillRectangle(int x1,int y1,int x2,int y2,unsigned int c);
#endif

/* (x1,y1),(x2,y2) ���֡��� c ����ʬ������ */
extern	void
#ifdef LANGUAGE_JAPANESE
��������(int x1,int y1,int x2,int y2,unsigned int c);
#else
drawLine(int x1,int y1,int x2,int y2,unsigned int c);
#endif

/* draw???? �������������������ꤹ���l >= 0�� */
extern	void
#ifdef LANGUAGE_JAPANESE
�������������ꤹ��(int l);
#else
setLineWidth(int l);
#endif

/* ��(x,y) ��ޤࡤ�� border �ǰϤޤ줿�ΰ�򡤿� fill ���ɤ�Ĥ֤� */
extern	void
#ifdef LANGUAGE_JAPANESE
�Ϥޤ줿�ΰ���ɤ�Ĥ֤�(int x,int y,int border,int fill);
#else
floodFill(int x,int y,int border,int fill);
#endif

/* (x,y) �ΰ��֤�ʸ���� str �� c ������ */
extern	void
#ifdef LANGUAGE_JAPANESE
ʸ��������(int x,int y,char *str,int c);
#else
drawString(int x,int y,char *str,int c);
#endif

/* ���ޥ�ɥ��塼��ե�å��夷�Ʋ��̤򹹿����� */
extern	void
flush(void);

#endif /* GRAPH_H_INCLUDED */
