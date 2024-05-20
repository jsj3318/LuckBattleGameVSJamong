#pragma once
// C언어 헤더파일
#include <Windows.h>
#include <cstdio>
#include <vector>
#include <map>
#include <list>
#include <iostream>
using namespace std;


#define	pic_width 600
#define pic_height 450
#define num_width 14
#define num_height 21

#define getkey(key) (GetAsyncKeyState(key) && !keydown)




#define getupnum(num) (num/10)
#define getlownum(num) (num%10)
