
# include <Siv3D.hpp> // OpenSiv3D v0.3.0

//関数のプロトタイプ宣言
//全体の流れの管理する関数
void gameManager();
//ミノに関する処理を行う関数
void moveMino();
void spinMino();
void putMino();
void eraseLine();
int* makeMino();
//画面表示に関する処理を行う関数
void drawManager();
void drawMap();
void drawMino();
void drawBackGround();

void Main()
{
	Graphics::SetBackground(ColorF(0.8, 0.9, 1.0));

	const Font font(60);

	const Texture textureCat(Emoji(U"🐈"), TextureDesc::Mipped);

	while (System::Update())
	{
		font(U"Hello, Siv3D!🐣").drawAt(Window::Center(), Palette::Black);

		font(Cursor::Pos()).draw(20, 500, ColorF(0.6));

		textureCat.resized(80).draw(700, 500);

		Circle(Cursor::Pos(), 60).draw(ColorF(1, 0, 0, 0.5));
	}
}

void gameManager()
{
}

void moveMino()
{
}

void spinMino()
{
}

void putMino()
{
}

void eraseLine()
{
}

int * makeMino()
{
	return nullptr;
}

void drawManager()
{
}

void drawMap()
{
}

void drawMino()
{
}

void drawBackGround()
{
}
