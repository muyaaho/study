#ifndef __TYPING_SYSTEM_H__
#define __TYPING_SYSTEM_H__

#include "Header.h"
#include "User.h"

class TypingSystem {
private:
	// 문장들이 저장됨
	std::vector<std::string> sentences;

	// 현재 사용자
	User* currentUser = nullptr;

	// 디스크로부터 데이터를 읽어와서 문장 리스트를 초기화 하는 함수
	void loadData();
public:

	void printData();

	void start();

	void printMenu();

	char getChar();

	std::string getString();
};

#endif // !__TYPEING_SYSTEM_H__