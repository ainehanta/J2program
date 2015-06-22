#include <stdio.h>

#define MAPSIZE 11

// main�γ��Ǥ��ѿ�����������Х��ѿ�
//  : main�γ�����������ѿ��ϡ��ɤδؿ��Ǥ����Ѥ��뤳�Ȥ������
//  : ȿ�̡��ɤ����ѹ������Τ�ʬ����ˤ����ʤ뤿�ᡤ¿�Ѥϸ��ء�
int map[MAPSIZE][MAPSIZE];
int pos_x, pos_y;


void initialize(void);
int  map_move(int _dir);
void map_print();
int  input_key(void);


int main(void)
{
    int dir, endflag=0;
    
    initialize();
    map_print();
    while(!endflag){
	dir = input_key();
	if(dir == 0) break;
	// �롼�פζ���æ�С�breakʸ
	//  : �롼�����̵���˥롼�פ�ȴ��������硤
	//    break;�Ƚ񤯤Ȱ�����¦�Υ롼�פ�ȴ��������Ǥ���
	//  : ȿ�̡��ץ�����ή�줬ʬ�Ǥ���뤿�ᡤ
	//    ���꤬�����ä����˲��Ϥ�����ˤʤ롤¿�Ѥϸ��ء�
	endflag = map_move(dir);
	map_print();
    }
    return 0;
}


void initialize(void)
{
    int i,j;
    pos_x=1;
    pos_y=1;

    for(i=0; i<MAPSIZE; i++){
	for(j=0; j<MAPSIZE; j++){
	    map[i][j]=-1;
	}
    }  

    for(i=1; i<MAPSIZE-1; i++){
	for(j=1; j<MAPSIZE-1; j++){
	    if(j%2==1) map[i][j]=0;
	}
    }
    map[6][2]=0;
    map[3][4]=0;
    map[2][8]=0;
    map[2][6]=0; //add
    map[pos_y][pos_x]=1;
    map[0][1]=-2;
    map[10][9]=-3;
}


int map_move(int _dir)
{
    int i,j;

    map[pos_x][pos_y]=0;
    if(_dir==1){
	if(map[pos_x][pos_y+1]==0){
	    pos_y++;
	}
    }
    else if(_dir==2){
	if(map[pos_x-1][pos_y]==0){
	    pos_x--;
	}
    }
    else if(_dir==3){
	if(map[pos_x][pos_y-1]==0){
	    pos_y--;
	}
    }
    else if(_dir==4){
	if(map[pos_x+1][pos_y]!=-1){  //add
	    pos_x++;
	}
    }

    if(map[pos_x][pos_y]==-3) return 1;
    map[pos_x][pos_y]=1;
    return 0;
}


void map_print(void)
{
    int i,j;
    
    for(i=0; i<MAPSIZE; i++){
	for(j=0; j<MAPSIZE; j++){
	    if(map[i][j]==0) printf(" ");
	    else if(map[i][j]==-1) printf("X"); // wall
	    else if(map[i][j]==1) printf("A");  // character
	    else if(map[i][j]==-2) printf("S"); // start
	    else if(map[i][j]==-3) printf("G"); // goal
	}
	printf("\n");
    }
}


int input_key(void)
{
    int key;
    scanf("%d",&key);

    return key;
}

