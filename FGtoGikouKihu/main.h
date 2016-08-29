#pragma once
#include <string>
#include <vector>
using namespace std;

/*
�m�ۂ���̂�1�����ŗǂ��B�g���I�������clear���Ĉ���g���񂷁B
*/
struct GameData {

public:
	string black_name;
	string white_name;
	string day;
	string event;
	int VorD;//Victory or defeat(���s) (0:��������,1:��菟��,2:��菟��)
	int plys=0;

	//rate��3000�ɖ����Ȃ��悤�ȓz��̎�����DB�ɏ����o���Ȃ�
	int black_rate=0;
	int white_rate=0;
	//����@��^�͂ǂ����悤���Ȃ�

	vector<string> moves;
public:
	void clear(){ 
		black_name.clear();
		white_name.clear();
		day.clear();
		VorD = plys = black_rate = white_rate = 0;
		moves.clear();
	}
};