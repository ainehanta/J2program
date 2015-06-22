#include <stdio.h>

#define MAPSIZE 11

// mainの外での変数定義：グローバル変数
//  : mainの外で宣言した変数は，どの関数でも利用することが出来る
//  : 反面，どこで変更したのか分かりにくくなるため，多用は厳禁！
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
	// ループの強制脱出：break文
	//  : ループ中で無条件にループを抜けたい場合，
	//    break;と書くと一番内側のループを抜ける事ができる
	//  : 反面，プログラムの流れが分断されるため，
	//    問題が起こった時に解析が困難になる，多用は厳禁！
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

