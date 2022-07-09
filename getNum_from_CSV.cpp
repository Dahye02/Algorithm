#include "main.h"

int getCSV(int i){
    fstream fio;
	fio.open("csv.txt");
	fio.seekp(0);

    int num=0;
	while(!fio.eof() && i>0){
        char newline[10];
        fio.getline(newline,10);
        std::stringstream ssInt(newline);
        ssInt>>num;
        i--;
    }
    return num;
}