#pragma once
#include "Scene.h"
#include "SceneManager.h"
#include "Bitmap.h"



class MenuScene : public Scene
{
public :
	virtual void	Init(SceneManager* sceneManager);
	virtual void	Update(float dt);
	virtual void	Render(HDC hdc, float dt);
	virtual void	Destroy();

	
private:
	bool keydown = true;

	Bitmap		title;
	Bitmap		arrow;
	Bitmap		skill_list;
	Bitmap		hp_arrow;

	Bitmap		num[10];

	short			menuselect;



};

