#include <iostream>
#include <fstream>
#include "TGL1.h"
#include <vector>
#include <string>
#include <sstream>
#include <conio.h>

using namespace tgl;

int main() {
	TerminalGraphics tgl;
	tgl.setWindow(300, 400);
	tgl.setTileset("       `'.,-~_:;^+=*<>iv!lI?/|()1t{}[]rjfxnuczmwqpdbkhaoegsy02345679ACDEFGHJKLNOPQRSTUVXYZ#MW&8%B@$");
	tgl.framerate = 60;
	std::cout << tgl.tileset.size();
	std::ifstream infile("output.txt");
	std::vector<std::vector < int >> array;
	std::string line;
	while (std::getline(infile, line)) {
		std::vector<int> row;
		std::istringstream iss(line);
		int value;
		while (iss >> value) {
			row.push_back(value);
		}
		array.push_back(row);
	}

	tgl.clear(40);
	for (int j = 0; j < tgl.wally; j++) {
		for (int i = 0; i < tgl.wallx; i++) {
			tgl.grid[i][j] = array[j][i];
		}
	}
	int x = 215, y = 200, r = 180;
	/*tgl.ellipse(x, y, r, 180, 1000, 2);
	for (int i = 0; i < tgl.wally; i++) {
		for (int j = 0; j < tgl.wallx; j++) {
			if (!(hypot(x - j, y - i) <= r)) {
				tgl.grid[j][i] = 0;
			}
		}
	}*/
	while (true) {
		if (_kbhit()) {
			if (_getch() == '.') {
				tgl.tileset = ' ' + tgl.tileset;
			}
			if (_getch() == ','&&tgl.tileset[1]==' ') {
				tgl.tileset.erase(0, 1);
			}
			tgl.render();
			tgl.sleep();
		}
	}
	return 0;
}
