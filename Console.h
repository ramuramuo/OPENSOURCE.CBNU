#pragma once


#include <windows.h>

//──────────────────────────────────────────────────────
// 화면을 지워주고 커서의 위치를 0,0 으로 이동시키는 함수
//──────────────────────────────────────────────────────
void Clear(void);
//──────────────────────────────────────────────────────
// 커서의 위치를 _x, _y 로 변경하는 함수
//──────────────────────────────────────────────────────
void GotoXY(int _x, int _y);
//──────────────────────────────────────────────────────
// console 창의 title을 변경해 주는 함수
//──────────────────────────────────────────────────────
void SetTitle(char* _szConsoleName);
//──────────────────────────────────────────────────────
// 배경색, 글자색을 변경해 주는 함수
//──────────────────────────────────────────────────────
void SetColor(unsigned char _BgColor, unsigned char _TextColor);
//──────────────────────────────────────────────────────
// cursor를 보이게, 안보이게 하는 함수 
//──────────────────────────────────────────────────────
void SetCursor(BOOL _bShow);
//──────────────────────────────────────────────────────
// console 창의 크기를 정하는 함수 ( 디폴트 80, 25 )
//──────────────────────────────────────────────────────
void SetConsoleSize(int _col, int _lines);

void CursorView(char show);

void title(void); //게임시작화면
void reset(void); //게임판 초기화
void reset_main(void); //메인 게임판(main_org[][]를 초기화)
void reset_main_cpy(void); //copy 게임판(main_cpy[][]를 초기화)
void draw_mapS(void); //게임 전체 인터페이스를 표시
void draw_main(void); //게임판을 그림
void new_block(void); //새로운 블록을 하나 만듦
void check_key(void); //키보드로 키를 입력받음
void drop_block(void); //블록을 아래로 떨어트림
int check_crush(int bx, int by, int rotation); //bx, by위치에 rotation회전값을 같는 경우 충돌 판단
void move_block(int dir); //dir방향으로 블록을 움직임
void check_line(void); //줄이 가득찼는지를 판단하고 지움
void check_level_up(void); //레벨목표가 달성되었는지를 판단하고 levelup시킴
void check_game_over(void); //게임오버인지 판단하고 게임오버를 진행
