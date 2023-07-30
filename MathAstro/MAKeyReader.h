#include <iostream>
#ifndef _M_A_KEYREADER_H_
#define _M_A_KEYREADER_H_
namespace mAstroKeys {
//Windows library specific checks
	bool shiftCheck();
	bool ctrlCheck();
	/*Uses windows function to detect
	a key press, included in functions
	below*/

//Function to find key integers

	void keyInt2ByteConsOutputer();
	//in console

//Scuffed Detection Function
	std::string basicKeyIdentify();
	/*
	Basic Key Identify is Able to read in
	and return back coordinating string for
	single button presses through console.

	INS,HM,PU,DEL,END,PD
	Arrow Keys
	All the normal letter and symbol keys
	
	bksp, sp, esc, enter
	unlinkedButton is returned if no key
	is recognisable within the function.
	*/

//Combined function
	std::string MAGetConsoleKeyInput();
	/*
	Able to identify all of basic key 
	identify function, in addition to
	Explicit shift+nonshiftable
		All shiftable keys, but are stated
		as shift+@ instead of shift+2
		for example.
	it waits for the input, then identifys
	if its not valid, it simply loops.
	*/
}
namespace mAstroKeysTEST {
	void MAGetConsoleKeyInput();
	
}
#endif