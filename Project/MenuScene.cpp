#include "MenuScene.h"

short HP_default = 20; //자몽과 나의 체력
void MenuScene::Init(SceneManager * sceneManager)
{
	m_SceneManager = sceneManager;

	title.LoadBitmapByPath("resource/title.bmp");
	//title.setTransparentColor(RGB(0, 64, 192));

	arrow.LoadBitmapByPath("resource/arrow.bmp");
	skill_list.LoadBitmapByPath("resource/skill_list.bmp");

	hp_arrow.LoadBitmapByPath("resource/hp_arrow.bmp");
	hp_arrow.setTransparentColor(RGB(255, 255, 255));

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

	menuselect = 0;

}

void MenuScene::Update(float dt)
{

	if (getkey(VK_UP) && menuselect > 0) menuselect--;
	else if (getkey(VK_DOWN) && menuselect < 3) menuselect++;

	if (getkey(VK_SPACE))
		switch (menuselect) {
		case 0:	m_SceneManager->reserveChangeScene("GameScene");
			break;
		case 3:	PostQuitMessage(0);
			break;
		}
	if (menuselect == 2)
		if (getkey(VK_LEFT) && HP_default != 5) HP_default -= 5;
		else if (getkey(VK_RIGHT) && HP_default != 30) HP_default += 5;

	if (!GetAsyncKeyState(VK_UP) && !GetAsyncKeyState(VK_DOWN) && !GetAsyncKeyState(VK_LEFT) && !GetAsyncKeyState(VK_RIGHT) && !GetAsyncKeyState(VK_SPACE))
		keydown = false;
	else keydown = true;
}

void MenuScene::Render(HDC hdc, float dt)
{
	//RECT rc = { 0,0,800,600 };
	//FillRect(hdc, &rc, (HBRUSH)GetStockObject(BLACK_BRUSH));

	title.drawBitmap(hdc, 0, 0, 800, 600);
	arrow.drawBitmap(hdc, 225, 366 + 58 * menuselect, 75, 33);

	num[getupnum(HP_default)].drawBitmap(hdc, 560, 485, num_width, num_height);
	num[getlownum(HP_default)].drawBitmap(hdc, 560 + num_width + 1, 485, num_width, num_height);

	if (menuselect == 1)
		skill_list.drawBitmap(hdc, 40, 64, 671, 263);

	if(menuselect == 2) hp_arrow.drawBitmap(hdc, 470, 465, 215, 63);

}

void MenuScene::Destroy()
{
	
}




