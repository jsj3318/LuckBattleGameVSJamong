#include "GameScene.h"

extern short HP_default; //자몽과 나의 체력

void GameScene::Init(SceneManager* sceneManager)
{
	credit[0].LoadBitmapByPath("resource/credit1.bmp");
	credit[1].LoadBitmapByPath("resource/credit2.bmp");
	credit[2].LoadBitmapByPath("resource/credit3.bmp");

	gameover_back.LoadBitmapByPath("resource/gameover.bmp");

	messagebox.LoadBitmapByPath("resource/ui/messagebox.bmp");
	box_encounter.LoadBitmapByPath("resource/ui/box_encounter.bmp");

	box_act[0].LoadBitmapByPath("resource/ui/box_act0.bmp");
	box_act[1].LoadBitmapByPath("resource/ui/box_act1.bmp");
	box_act[2].LoadBitmapByPath("resource/ui/box_act2.bmp");
	box_act[3].LoadBitmapByPath("resource/ui/box_act3.bmp");
	box_act[4].LoadBitmapByPath("resource/ui/box_act4.bmp");
	box_act[5].LoadBitmapByPath("resource/ui/box_act5.bmp");

	box_hit.LoadBitmapByPath("resource/ui/box_hit.bmp");
	box_miss.LoadBitmapByPath("resource/ui/box_miss.bmp");
	box_heal.LoadBitmapByPath("resource/ui/box_heal.bmp");

	box_win.LoadBitmapByPath("resource/ui/box_win.bmp");
	box_lose.LoadBitmapByPath("resource/ui/box_lose.bmp");

	box_jmskill[0].LoadBitmapByPath("resource/ui/box_jmskill0.bmp");
	box_jmskill[1].LoadBitmapByPath("resource/ui/box_jmskill1.bmp");
	box_jmskill[2].LoadBitmapByPath("resource/ui/box_jmskill2.bmp");
	box_jmskill[3].LoadBitmapByPath("resource/ui/box_jmskill3.bmp");
	box_jmskill[4].LoadBitmapByPath("resource/ui/box_jmskill4.bmp");
	box_jmskill[5].LoadBitmapByPath("resource/ui/box_jmskill5.bmp");
	box_jmskill[6].LoadBitmapByPath("resource/ui/box_jmskill6.bmp");
	box_jmskill[7].LoadBitmapByPath("resource/ui/box_jmskill7.bmp");
	box_jmskill[8].LoadBitmapByPath("resource/ui/box_jmskill8.bmp");
	box_jmskill[9].LoadBitmapByPath("resource/ui/box_jmskill9.bmp");
	box_jmskill[10].LoadBitmapByPath("resource/ui/box_jmskill10.bmp");

	box_rest.LoadBitmapByPath("resource/ui/box_rest.bmp");

	sidebox.LoadBitmapByPath("resource/ui/sidebox.bmp");
	pl_HPbar.LoadBitmapByPath("resource/ui/pl_HPbar.bmp");
	hp_green.LoadBitmapByPath("resource/ui/hp_green.bmp");
	hp_red.LoadBitmapByPath("resource/ui/hp_red.bmp");
	actlist.LoadBitmapByPath("resource/ui/actlist.bmp");
	actlist.setTransparentColor(RGB(255, 255, 255));
	selectbox.LoadBitmapByPath("resource/ui/selectbox.bmp");
	selectbox.setTransparentColor(RGB(255, 255, 255));



	num[0].LoadBitmapByPath("resource/num/0.bmp");
	num[1].LoadBitmapByPath("resource/num/1.bmp");
	num[2].LoadBitmapByPath("resource/num/2.bmp");
	num[3].LoadBitmapByPath("resource/num/3.bmp");
	num[4].LoadBitmapByPath("resource/num/4.bmp");
	num[5].LoadBitmapByPath("resource/num/5.bmp");
	num[6].LoadBitmapByPath("resource/num/6.bmp");
	num[7].LoadBitmapByPath("resource/num/7.bmp");
	num[8].LoadBitmapByPath("resource/num/8.bmp");
	num[9].LoadBitmapByPath("resource/num/9.bmp");
	num[10].LoadBitmapByPath("resource/num/slash.bmp");
	
	jm_stand[0].LoadBitmapByPath("resource/jamong/jamong_stand1.bmp");
	jm_stand[1].LoadBitmapByPath("resource/jamong/jamong_stand2.bmp");
	jm_stand[2].LoadBitmapByPath("resource/jamong/jamong_stand3.bmp");
	jm_stand[3].LoadBitmapByPath("resource/jamong/jamong_stand4.bmp");
	jm_stand[4].LoadBitmapByPath("resource/jamong/jamong_stand5.bmp");

	jm_bite[0].LoadBitmapByPath("resource/jamong/jamong_bite1.bmp");
	jm_bite[1].LoadBitmapByPath("resource/jamong/jamong_bite2.bmp");

	jm_backattack[0].LoadBitmapByPath("resource/jamong/jamong_backattack1.bmp");
	jm_backattack[1].LoadBitmapByPath("resource/jamong/jamong_backattack2.bmp");

	jm_tuckattack[0].LoadBitmapByPath("resource/jamong/jamong_tuckattack1.bmp");
	jm_tuckattack[1].LoadBitmapByPath("resource/jamong/jamong_tuckattack2.bmp");

	jm_killingsmile[0].LoadBitmapByPath("resource/jamong/jamong_killingsmile1.bmp");
	jm_killingsmile[1].LoadBitmapByPath("resource/jamong/jamong_killingsmile2.bmp");
	jm_killingsmile[2].LoadBitmapByPath("resource/jamong/jamong_killingsmile3.bmp");
	jm_killingsmile[3].LoadBitmapByPath("resource/jamong/jamong_killingsmile4.bmp");
	jm_killingsmile[4].LoadBitmapByPath("resource/jamong/jamong_killingsmile5.bmp");
	jm_killingsmile[5].LoadBitmapByPath("resource/jamong/jamong_killingsmile6.bmp");

	jm_lick.LoadBitmapByPath("resource/jamong/jamong_lick.bmp");

	jm_lookattack.LoadBitmapByPath("resource/jamong/jamong_lookattack.bmp");

	jm_wink[0].LoadBitmapByPath("resource/jamong/jamong_wink1.bmp");
	jm_wink[1].LoadBitmapByPath("resource/jamong/jamong_wink2.bmp");

	jm_drive.LoadBitmapByPath("resource/jamong/jamong_drive.bmp");
		
	jm_sleep[0].LoadBitmapByPath("resource/jamong/jamong_sleep1.bmp");
	jm_sleep[1].LoadBitmapByPath("resource/jamong/jamong_sleep2.bmp");
	jm_sleep[2].LoadBitmapByPath("resource/jamong/jamong_sleep3.bmp");
	jm_sleep[3].LoadBitmapByPath("resource/jamong/jamong_sleep4.bmp");
	jm_sleep[4].LoadBitmapByPath("resource/jamong/jamong_sleep5.bmp");
		
	jm_gijigae.LoadBitmapByPath("resource/jamong/jamong_gijigae.bmp");
	
	jm_hapoom.LoadBitmapByPath("resource/jamong/jamong_hapoom.bmp");

	jm_lose.LoadBitmapByPath("resource/jamong/jamong_lose.bmp");


	srand(GetTickCount());
	rand_pic_num();

	state = encounter;
	encounterX = 600;
	encountertick = GetTickCount();


	jmHP = HP_default;
	plHP = HP_default;


}

void GameScene::Update(float dt)
{
	if (end) {
		if (picY > -1200) {
			if (GetTickCount() - credit_tick > 30) {
				credit_tick = GetTickCount();
				picY -= 5;
			}
		}
		else if (getkey(VK_SPACE))
			PostQuitMessage(0);
	}
	else if (gameover) {
		if (getkey(VK_SPACE))
			PostQuitMessage(0);
	}
	else
	switch (state) {
		//인카운터
	case encounter:	
		if(encounterX>0)
			if (GetTickCount() - encountertick > 30) {
				encountertick = GetTickCount();
				encounterX -= 20;
			}
		if(!encounterX && getkey(VK_SPACE)){
			state = actselect;
			select = 0;
			page = 1;
		}
		break;

		//내턴
	case actselect:
		switch (page){
		case 1:
			if (getkey(VK_UP) && select > 0) select--;
			else if (getkey(VK_DOWN) && select < 5) select++;

			if (getkey(VK_SPACE)) {
				switch (select) {			//공격 적중 확률
				case 0:	
					hit = true;		
					jmHP--;
					break;
				case 1:	
					if (rand() % 10000 < 8000) {
						hit = true;
						jmHP -= 2;
					}
					else hit = false;
					break;
				case 2:
					if (rand() % 1000000 < 6000) {
						hit = true;
						jmHP -= 3;
					}
					else hit = false;
					break;
				case 3:
					if (rand() % 1000000 < 4000) {
						hit = true;
						jmHP -= 5;
					}
					else hit = false;
					break;
				case 4:
					if (rand() % 1000000 < 2000) {
						hit = true;
						jmHP -= 7;
					}
					else hit = false;
					break;
				case 5:
					jmHP += 3;
					break;
				}
				page++;
			}
			break;

		case 2:
			if (jmHP < 1) {
				jmHP = 0;
				jm_state = lose;
				gameset = 1;
			}

			if (getkey(VK_SPACE)) {
				if (!jmHP) {
					end = true;			//승리후 엔딩으로
					credit_tick = GetTickCount();
				}
				state = jmturn;
				page = 1;
				select = 0;
			}
			break;

		}
		break;

		//자몽턴
	case jmturn:
		switch (page) {
		case 1:	//먼저 쓸 스킬 계산하고
			mrand = rand() % 10000;
			jm_state =
				mrand < 700 ? bite :
				mrand < 1400 ? backattack :
				mrand < 2100 ? tuckattack :
				mrand < 3000 ? killingsmile :
				mrand < 3600 ? lick :
				mrand < 4100 ? lookattack :
				mrand < 4700 ? wink :
				mrand < 5000 ? drive :
				mrand < 8000 ? sleep :
				mrand < 9000 ? gijigae : hapoom;

			rand_pic_num();

			
			page++;
			break;
		case 2:	
			
			if(getkey(VK_SPACE))		page++;
			break;
		case 3:
			switch (jm_state) {
			case bite:
				if (rand() % 10000 < 6000) {
					hit = true;
					plHP -= 3;
				}
				else hit = false;
				break;
			case backattack:
				if (rand() % 10000 < 7500) {
					hit = true;
					plHP -= 2;
				}
				else hit = false;
				break;
			case tuckattack:
				if (rand() % 10000 < 8000) {
					hit = true;
					plHP -= 1;
				}
				else hit = false;
				break;
			case killingsmile:
				if (rand() % 10000 < 7000) {
					hit = true;
					plHP -= 3;
				}
				else hit = false;
				break;
			case lick:
				if (rand() % 10000 < 8000) {
					hit = true;
					plHP -= 1;
				}
				else hit = false;
				break;
			case lookattack:
				if (rand() % 10000 < 9000) {
					hit = true;
					plHP -= 1;
				}
				else hit = false;
				break;
			case wink:
				if (rand() % 10000 < 9000) {
					hit = true;
					plHP -= 2;
				}
				else hit = false;
				break;
			case drive:
				if (rand() % 10000 < 6000) {
					hit = true;
					plHP -= 5;
				}
				else hit = false;
				break;
			}
			page++;
			break;

		case 4:
			if (plHP < 1) {
				plHP = 0;
				gameset = 2;
			}

			if (getkey(VK_SPACE)) {
				select = 0;

				if (!plHP) {
					//패배
					gameover = true;
				}

				state = actselect;
				page = 1;
				jm_state = stand;
				rand_pic_num();
			}
			break;

		}
		break;
	}
	
	if (!GetAsyncKeyState(VK_UP) && !GetAsyncKeyState(VK_DOWN) && !GetAsyncKeyState(VK_SPACE))
		keydown = false;
	else keydown = true;
}

void GameScene::Render(HDC hdc, float dt)
{
	if (end) {
		RECT rc = { 0,0,800,600 };
		FillRect(hdc, &rc, (HBRUSH)GetStockObject(BLACK_BRUSH));

		if(picY > -600) credit[0].drawBitmap(hdc, 0, picY, 800, 600);
		if(picY < 0 && picY > -1200) credit[1].drawBitmap(hdc, 0, picY + 600, 800, 600);
		if(picY < -600) credit[2].drawBitmap(hdc, 0, picY + 1200, 800, 600);
		return;
	}
	if (gameover) {
		gameover_back.drawBitmap(hdc, 0, 0, 800, 600);
		return;
	}

	//흰 배경
	RECT rc = { 0,0,800,600 };
	FillRect(hdc, &rc, (HBRUSH)GetStockObject(WHITE_BRUSH));

	

	//사이드 박스
	//자몽체력    x72  y32 w109 h18
	sidebox.drawBitmap(hdc, 0, 0, 200, 450);
	

	num[getupnum(jmHP)].drawBitmap(hdc, 100, 60, num_width, num_height);
	num[getlownum(jmHP)].drawBitmap(hdc, 100 + num_width, 60, num_width, num_height); 
	num[10].drawBitmap(hdc, 100 + num_width*2, 60, num_width, num_height);
	num[getupnum(HP_default)].drawBitmap(hdc, 100 + num_width*3, 60, num_width, num_height); 
	num[getlownum(HP_default)].drawBitmap(hdc, 100 + num_width*4, 60, num_width, num_height);

	//내 체력 x+45 y+5 w109 h18
	pl_HPbar.drawBitmap(hdc, 23, 385, 159, 28);
	(plHP > 0.25 * HP_default ? hp_green : hp_red).drawBitmap(hdc, 68, 390, 109.0 / HP_default * plHP, 18);
	num[getupnum(plHP)].drawBitmap(hdc, 100, 422, num_width, num_height);
	num[getlownum(plHP)].drawBitmap(hdc, 100 + num_width, 422, num_width, num_height);
	num[10].drawBitmap(hdc, 100 + num_width * 2, 422, num_width, num_height);
	num[getupnum(HP_default)].drawBitmap(hdc, 100 + num_width * 3, 422, num_width, num_height);
	num[getlownum(HP_default)].drawBitmap(hdc, 100 + num_width * 4, 422, num_width, num_height);

	if(gameset == 1) box_win.drawBitmap(hdc, 0, 450, 800, 150);
	else if(gameset == 2) box_lose.drawBitmap(hdc, 0, 450, 800, 150);
	else
	switch (state) {	
	case encounter: 
		box_encounter.drawBitmap(hdc, 0, 450, 800, 150);
		break;
	
	case actselect: 
		//공격 기술 박스
		actlist.drawBitmap(hdc, 0, 0, 200, 450);
		selectbox.drawBitmap(hdc, 10, 94 + select * 46, 182, 39);

		//하단박스
		switch (page) {
		case 1:		box_act[select].drawBitmap(hdc, 0, 450, 800, 150);				break;
		case 2:		
			if(select == 5)	box_heal.drawBitmap(hdc, 0, 450, 800, 150);
			else (hit?box_hit:box_miss).drawBitmap(hdc, 0, 450, 800, 150);	break;
		}
		break;

	case jmturn:
		switch (page) {
		case 2: box_jmskill[jm_state - 1].drawBitmap(hdc, 0, 450, 800, 150);		break;
		case 4: 
			if (jm_state < sleep)
				(hit ? box_hit : box_miss).drawBitmap(hdc, 0, 450, 800, 150);
			else box_rest.drawBitmap(hdc, 0, 450, 800, 150);
			break;
		}

		break;
	}

	//등장 애니메이션
	if (state == encounter) {
		jm_stand[pic_num].drawBitmap(hdc, 200 + encounterX, 0, 600, 450);
		
	}
	//자몽  
	else
	switch (jm_state) {
	case stand:					jm_stand[pic_num].drawBitmap(hdc, 200, 0, 600, 450);				 break;
	case bite:						jm_bite[pic_num].drawBitmap(hdc, 200, 0, 600, 450);					 break;
	case backattack:		jm_backattack[pic_num].drawBitmap(hdc, 200, 0, 600, 450);	 break;
	case tuckattack:		jm_tuckattack[pic_num].drawBitmap(hdc, 200, 0, 600, 450);	 break;
	case killingsmile:			jm_killingsmile[pic_num].drawBitmap(hdc, 200, 0, 600, 450);		 break;
	case lick:						jm_lick.drawBitmap(hdc, 200, 0, 600, 450);					 break;
	case lookattack:			jm_lookattack.drawBitmap(hdc, 200, 0, 600, 450);	 break;
	case wink:						jm_wink[pic_num].drawBitmap(hdc, 200, 0, 600, 450);				 break;
	case drive:					jm_drive.drawBitmap(hdc, 200, 0, 600, 450);				 break;
	case sleep:					jm_sleep[pic_num].drawBitmap(hdc, 200, 0, 600, 450);				 break;
	case gijigae:					jm_gijigae.drawBitmap(hdc, 200, 0, 600, 450);			 break;
	case hapoom:				jm_hapoom.drawBitmap(hdc, 200, 0, 600, 450);			 break;
	case lose:						jm_lose.drawBitmap(hdc, 200, 0, 600, 450);					 break;
	}

	//자몽체력
	(jmHP > 0.25 * HP_default ? hp_green : hp_red).drawBitmap(hdc, 72, 32, 109.0 / HP_default * jmHP, 18);
}

void GameScene::Destroy()
{
}


