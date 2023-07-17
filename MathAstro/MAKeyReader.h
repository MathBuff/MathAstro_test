#include <iostream>
#ifndef _M_A_KEYREADER_H_
#define _M_A_KEYREADER_H_
namespace mAstroKeys {
	std::string basicKeyIdentify();
	bool shiftCheck();
	bool ctrlCheck();
	void keyInt2ByteConsOutputer();

	std::string shiftKeyInput();
	/*
	shiftKeyInput is Able to read
	INS,HM,PU,DEL,END,PD
	Arrow Keys
	All the normal keys
	Explicit shift+nonshiftable
	All shiftable keys, but are stated
	as shift+@ for example.
	*/
}
#endif