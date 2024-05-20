#include "PrepareWnd.h"
#include "GameDirector.h"

PrepareWnd::PrepareWnd()
{
	cbSize			= sizeof(WNDCLASSEX);
	style			= CS_HREDRAW | CS_VREDRAW;
	lpfnWndProc		= GameDirector::WndProc;			// ������ �ݹ� ���ν����� �����Ǹ� ����
	cbClsExtra		= 0;
	cbWndExtra		= 0;
	hIcon			= nullptr;
	hCursor			= LoadCursor(nullptr, IDC_ARROW);
	hbrBackground	= (HBRUSH)(COLOR_WINDOW + 1);
	lpszClassName	= "winclass";

	lpWindowName	= "Jamong";
	dwStyle			= WS_OVERLAPPEDWINDOW;
	X				= CW_USEDEFAULT;
	Y				= CW_USEDEFAULT;
	nWidth			= 817;   
	nHeight			= 630;
	hWndParent		= nullptr;
	hMenu			= nullptr;
	lpParam			= nullptr;

	nCmdShow		= SW_SHOW;
}


PrepareWnd::~PrepareWnd()
{
}
