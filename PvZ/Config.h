#pragma once

class Config
{
public:
	// ������� ������ �������� manager, ��� ��������� ������ ���������
	// ����� �� ������������ ����� ����������, � �������� �� ����� manager,
	// �.�. ������� ���� ����� ��������
	static constexpr int WIN_WIDTH = 1020; // 1399 ��� 1020
	static constexpr int WIN_HEIGHT = 600;

	static constexpr int W_CELL = 81;
	static constexpr int H_CELL = 98;
	// �����
	static constexpr int PLANT_COUNT = 5;
	static constexpr int MONEY = 50;
	//---------------------------------------------

	// ���������� ����� ��������� �������� ��������� ��������
	
	// ���� ������� ������ ��, �� COOLDOWN_DEFAULT.
	// �������� �������� �� � ������ player � ������������.
	// ����� ���������� ���: time_reload(Config::COOLDOWN_DEFAULT)
	static constexpr double COOLDOWN_DEFAULT = 0.0;
	static constexpr double COOLDOWN_PEA = 8.0;
	static constexpr double COOLDOWN_SNOW_PEA = 8.0;
	static constexpr double COOLDOWN_SUNFLOWER = 8.0;
	static constexpr double COOLDOWN_MELON = 8.0;
	static constexpr double COOLDOWN_CHOMPER = 8.0;
	static constexpr double COOLDOWN_NUT = 30.0;
	//---------------------------------------------
	
	// ���������
	// ������
	static constexpr int SIZE_MONEY = 45;
	static constexpr int MONEY_POS_X = 230;
	static constexpr int MONEY_POS_Y = 0;

	// ������
	static constexpr int FRAME_ICON_OFFSET_X = -4;
	static constexpr int FRAME_ICON_OFFSET_Y = -1;
	static constexpr int ICON_OFFSET_X = 15;
	static constexpr int ICON_OFFSET_Y = 0;
	static constexpr int ICON_SPACING = 5;

	// ������� � ����������� �����
	static constexpr int BOARD_POS_X = 150;
	static constexpr int BOARD_POS_Y = 0;
	static constexpr int MONEY_DISPLAY_OFFSET_X = 214;
	static constexpr int MONEY_DISPLAY_WIDTH = 133;

	// ������
	static constexpr int SHOVEL_POS_X = 333;
	static constexpr int SHOVEL_POS_Y = 0;

	// ������� ����
	static constexpr float WAVE_BAR_WIDTH = 260;
	static constexpr float WAVE_BAR_HEIGHT = 17; // 2
	static constexpr float WAVE_BAR_THIKNESS_FRAME = 10;
	static constexpr int WAVE_BAR_POS_X = 700;
	static constexpr int WAVE_BAR_POS_Y = 10 + WAVE_BAR_THIKNESS_FRAME;
	static constexpr int WAVE_BAR_FILL_OFFSET_X = 17;
	static constexpr int WAVE_BAR_FILL_OFFSET_Y = 13;
	//------------------------------------
	// �������
	static constexpr int SPAWN_OFFSET_MAX = 50;
	static constexpr int SPAWN_OFFSET_MIN = 15;

	// �����
	// ���������� ����� �� �����
	static constexpr int AMOUNT_LINES_MAP = 5;

	// ���������� ����� � ����� � ������
	static constexpr int AMOUNT_FIELD_W = 9;
	static constexpr int AMOUNT_FIELD_H = 5;
	// ��������� �������� � ����
	static constexpr double RELOAD_SPAWN_SKY_SUN = 5.0;

	//------------------------------------

	// �����
	static constexpr double PEASHOOTER_DAMAGE = 1.0;
	static constexpr double PEASHOOTER_TIME_RELOAD = 2.0;
	static constexpr int PEASHOOTER_HP = 3;
	static constexpr int PEASHOOTER_FRAME_WIDTH = 100;
	static constexpr int PEASHOOTER_FRAME_HEIGHT = 100;
	static constexpr int PEASHOOTER_COUNT_FRAME = 23; //23
	static constexpr double PEASHOOTER_FRAMETIME = 0.085; //0.085
	static constexpr int PEASHOOTER_PROJECTILE_OFFSET_X = 75;
	static constexpr int PEASHOOTER_PROJECTILE_OFFSET_Y = 12;

	static constexpr int MELON_PROJECTILE_OFFSET_X = 0;
	static constexpr int MELON_PROJECTILE_OFFSET_Y = 18;

	// ������� �����
	static constexpr int SNOW_PEA_COUNT_FRAME = 39;
	static constexpr double SNOW_PEA_FRAMETIME = 0.05; //0.085

	// �������� ������
	static constexpr double PEA_PROJECTILE_SPEED = 300.0;
	static constexpr int PEA_PROJECTILE_HP = 1;
	static constexpr int PEA_PROJECTILE_FRAME_WIDTH = 20;
	static constexpr int PEA_PROJECTILE_FRAME_HEIGHT = 20;
	static constexpr int PEA_PROJECTILE_COUNT_FRAME = 1;
	static constexpr double PEA_PROJECTILE_FRAMETIME = 0;

	// �����
	static constexpr double MELONPULT_DAMAGE = 3.0;
	static constexpr double MELONPULT_TIME_RELOAD = 2.0;
	static constexpr int MELONPULT_HP = 4;
	static constexpr int MELONPULT_FRAME_WIDTH = 100;
	static constexpr int MELONPULT_FRAME_HEIGHT = 100;
	static constexpr int MELONPULT_COUNT_FRAME = 36;
	static constexpr double MELONPULT_FRAMETIME = 0.085;
	static constexpr int MELONPULT_PROJECTILE_OFFSET_X = 72;
	static constexpr int MELONPULT_PROJECTILE_OFFSET_Y = 13;
	static constexpr double MELONPULT_OFFSET_POS_X = -31;

	// ������ ������
	static constexpr double MELON_VY = -300.0;
	static constexpr int MELON_HP = 1;
	static constexpr int MELON_FRAME_WIDTH = 52;
	static constexpr int MELON_FRAME_HEIGHT = 44;
	static constexpr int MELON_COUNT_FRAME = 1;
	static constexpr double MELON_FRAMETIME = 0;
	static constexpr double MELON_GRAVITY = 300;

	//�����
	static constexpr int ZOMBIE_FRAME_WIDTH = 100;
	static constexpr int ZOMBIE_FRAME_HEIGHT = 100;
	static constexpr int ZOMBIE_FRAME_COUNT = 46; // 46
	static constexpr double ZOMBIE_FRAME_TIME = 0.085;

	//����� � �������
	static constexpr int CONUS_ZOMBIE_FRAME_WIDTH = 51;
	static constexpr int CONUS_ZOMBIE_FRAME_HEIGHT = 100;
	static constexpr int CONUS_ZOMBIE_FRAME_COUNT = 1;
	static constexpr int CONUS_ZOMBIE_FRAME_TIME = 0;
	static constexpr int CONUS_ZOMBIE_HP = 28;

	// �� �����
	static constexpr int RAZOMBIE_FRAME_COUNT = 1;

	// ����� �����
	static constexpr int DISCO_ZOMBIE_FRAME_WIDTH = 100; // ���� 46
	static constexpr int DISCO_ZOMBIE_FRAME_HEIGHT = 100;
	static constexpr int DISCO_ZOMBIE_FRAME_COUNT = 34;
	static constexpr int DISCO_ZOMBIE_FRAME_TIME = 0.085;
	static constexpr int DISCO_ZOMBIE_SPAWN_LEFT_OFFSET = 100;
	static constexpr int DISCO_ZOMBIE_SPAWN_RIGHT_OFFSET = 100;

	// ��������� �������� �����
	static constexpr int DEFAULT_ZOMBIE_HP = 9;
	static constexpr double DEFAULT_ZOMBIE_SPEED = 15;

	static constexpr int DEFAULT_ZOMBIE_TIME_RELOAD = 1;
	static constexpr int DEFAULT_ZOMBIE_RELOAD = 0;
	static constexpr int DEFAULT_ZOMBIE_DAMAGE = 1;
	static constexpr int DEFAULT_ZOMBIE_IDLE_SPEED = 0;

	//���������
	static constexpr int SUNFLOWER_FRAME_WIDTH = 100;
	static constexpr int SUNFLOWER_FRAME_HEIGHT = 100;
	static constexpr int SUNFLOWER_FRAME_COUNT = 36;
	static constexpr double SUNFLOWER_FRAME_TIME = 0.085;

	static constexpr int SUNFLOWER_HP = 4;
	// ���������� 17. �� 5 �� 25. 
	static constexpr int TIME_TO_REAPEAR_SUN = 17;

	//������
	static constexpr int SUN_PRICE = 25;
	static constexpr int SUN_FRAME_WIDTH = 50;
	static constexpr int SUN_FRAME_HEIGHT = 50;
	static constexpr int SUN_FRAME_COUNT = 1;
	static constexpr int SUN_FRAME_TIME = 0;

	//����
	static constexpr int NUT_FRAME_WIDTH = 100;
	static constexpr int NUT_FRAME_HEIGHT = 100;
	static constexpr int NUT_FRAME_COUNT = 1;
	static constexpr int NUT_FRAME_TIME = 0;

	static constexpr int NUT_HP = 40;

	//������
	static constexpr int CAR_FRAME_WIDTH = 100;
	static constexpr int CAR_FRAME_HEIGHT = 60;
	static constexpr int CAR_FRAME_COUNT = 1;
	static constexpr int CAR_FRAME_TIME = 0;

	//������
	static constexpr int CHOMPER_FRAME_WIDTH = 100;
	static constexpr int CHOMPER_FRAME_HEIGHT = 100;
	static constexpr int CHOMPER_FRAME_COUNT = 30;
	static constexpr int CHOMPER_EAT_FRAME_COUNT = 19;
	static constexpr double CHOMPER_FRAME_TIME = 0.085; // 0.07 ����
	static constexpr int CHOMPER_HP = 4;

	static constexpr double NEWSPAPER_ZOMBIE_DOUBLE_SPEED = 30;
	static constexpr int NEWSPAPER_ZOMBIE_FRAME_COUNT = 1;

};