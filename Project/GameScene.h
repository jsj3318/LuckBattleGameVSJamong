#pragma once
#include "Scene.h"
#include "SceneManager.h"
#include "Bitmap.h"



class GameScene : public Scene
{
public:
	virtual void	Init(SceneManager* sceneManager);
	virtual void	Update(float dt);
	virtual void	Render(HDC hdc, float dt);
	virtual void	Destroy();

    

	void rand_pic_num() {
		switch (jm_state) {
		case killingsmile:			pic_num = rand() % 6;	break;
		case stand:	case sleep:				pic_num = rand() % 5;	break;
		case bite:	
		case backattack:
		case tuckattack:
		case wink:	
			pic_num = rand() % 2;	break;
		}
	}

	

private:
	bool keydown = true;

	Bitmap		messagebox;
	Bitmap		box_encounter;
	Bitmap		box_act[6];
	Bitmap		box_hit;
	Bitmap		box_miss;
	Bitmap		box_heal;

	Bitmap		box_win;
	Bitmap		box_lose;

	Bitmap		sidebox;
	Bitmap		pl_HPbar;
	Bitmap		hp_green;
	Bitmap		hp_red;
	Bitmap		actlist;
	Bitmap		selectbox;

	Bitmap		box_jmskill[11];
	Bitmap		box_rest;

	Bitmap		num[11];

	enum jm_state { stand, bite, backattack, tuckattack, killingsmile, lick, lookattack, wink, drive, sleep, gijigae, hapoom, lose }jm_state;
	Bitmap		jm_stand[5];
	Bitmap		jm_bite[2];
	Bitmap		jm_backattack[2];
	Bitmap		jm_tuckattack[2];
	Bitmap		jm_killingsmile[6];
	Bitmap		jm_lick;
	Bitmap		jm_lookattack;
	Bitmap		jm_wink[2];
	Bitmap		jm_drive;
	Bitmap		jm_sleep[5];
	Bitmap		jm_gijigae;
	Bitmap		jm_hapoom;
	Bitmap		jm_lose;


	enum state { encounter, actselect, jmturn } state;
	short		gameset = 0; //1 승리 2 패배
	short		page;

	short		jmHP;
	short		plHP;

	short		select;		//현재 선택

	short		pic_num;		//사진 랜덤 인덱스

	short		encounterX;
	int			encountertick;		//애니메이션 틱

	bool		hit;	//공격이 맞았나

	short		jm_skill;	//자몽이 쓸 스킬 인덱스

	short	 mrand;

	//크레딧----
	bool end = false;

	Bitmap	credit[3];
	short		picY = 600;
	int			credit_tick;


	//게임오버----
	bool gameover = false;

	Bitmap		gameover_back;

};