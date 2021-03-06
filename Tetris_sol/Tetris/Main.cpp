﻿
# include <Siv3D.hpp> // OpenSiv3D v0.3.0

//関数のプロトタイプ宣言
//ゲーム全体の流れの管理する関数
void gameManager();
//ミノ関連の処理を行う関数
void moveMino();
void spinMino();
void putMino();
void eraseLine();
int* makeMino();
//描写関連の処理を行う関数
void drawMap();
void drawMino();
void drawBackGround();

void Main()
{
	Graphics::SetBackground(ColorF(0.8, 0.9, 1.0));

	while (System::Update())
	{
		gameManager();
	}
}

/*
渡し値：
機能：ゲーム全体の流れを管理
*/
void gameManager()
{
}

/*
渡し値：
機能：上下左右移動 , 一定時間ごとにミノを下移動
*/
void moveMino()
{
}

/*
渡し値：
機能：ミノの右・左回転
*/
void spinMino()
{
}

/*
渡し値：
機能：ミノをゲーム画面上に配置
*/
void putMino()
{
}

/*
渡し値：
機能：ミノが横一列揃ったら消す
*/
void eraseLine()
{
}

/*
渡し値：
機能：ミノをランダムで自動生成
*/
int * makeMino()
{
	return nullptr;
}

/*
渡し値：
機能：ゲーム画面の描写
*/
void drawMap()
{
}

/*
渡し値：
機能：ミノの描写
*/
void drawMino()
{
}

/*
渡し値：なし
機能：背景の描写
*/
void drawBackGround()
{
}
