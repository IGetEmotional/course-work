#pragma once
#include <iostream>
#include "Animal.h"
#include <vector>
#include "Bunny.h"
#include "She_Wolf.h"
#include "Wolf.h"

using namespace std;

struct count_anim {
	int buns;
	int wolfies;
	int girl_wolfies;
};

class Map {
	count_anim an[22][22];
	vector<Bunny>bunnies;
	vector<She_Wolf>wolfess;
	vector<Wolf>wolfs;

	
public:


	Map() {
		vector<Bunny>bunnies;
		vector<She_Wolf>wolfess;
		vector<Wolf>wolfs;
		for (int t = 0; t < 2; t++) {
			this->add_bunny();

		}
		for (int i = 0; i < 1; i++) {
			this->add_she_wolf();
			this->add_wolf();
		}
		this->making_it_zero();
	}


	void counting();
	void making_it_zero();
	void add_bunny();
	void add_she_wolf();
	void add_wolf();
	void die();
	void moving();
	void move_bunnies();
	void move_wolfess();
	void move_wolfs();
	void show_count();
	int return_count_bunnies(int x, int y);
	int return_count_wolfess(int x, int y);
	int return_count_wolfs(int x, int y);
	bool sence_bunnies(int x, int y);
	bool sence_wolfess(int x, int y);
	void eat();
	void bunny_birth();
	void wolf_birth();
	void show_bunnies();
	void show_wolvess();
	void show_wolfs();
	int return_bunnies();
	int return_wolfes();
	int return_wolfess();
	bool bunny_here(int x, int y) {
		if (an[x][y].buns != 0)
			return true;
		else
			return false;
	}
	bool wolf_here(int x, int y) {
		if (an[x][y].wolfies != 0)
			return true;
		else
			return false;
	}
	bool wolfess_here(int x, int y) {
		if (an[x][y].girl_wolfies != 0)
			return true;
		else
			return false;
	}
};