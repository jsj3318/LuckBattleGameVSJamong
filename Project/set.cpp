#include "GameDirector.h"
#include "SceneManager.h"
#include "PrepareWnd.h"

#include "MenuScene.h"
#include "GameScene.h"

// 콘솔 사용
// #pragma comment(linker, "/entry:WinMainCRTStartup /subsystem:console")
#pragma comment (lib, "Msimg32.lib")

void settingWnd(PrepareWnd& value)
{
	value.lpWindowName = "Scary_Strong_Jamong";
}

void settingGame()
{
	GameDirector *director = GameDirector::GetGameDirector();

	director->GetSceneManager()->registerScene("MenuScene", new MenuScene);
	director->GetSceneManager()->registerScene("GameScene", new GameScene);

	director->GetSceneManager()->reserveChangeScene("MenuScene");
}

