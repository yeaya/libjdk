#ifndef _CharsetContainmentTest_h_
#define _CharsetContainmentTest_h_
//$ class CharsetContainmentTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export CharsetContainmentTest : public ::java::lang::Object {
	$class(CharsetContainmentTest, 0, ::java::lang::Object)
public:
	CharsetContainmentTest();
	void init$();
	static void main($StringArray* args);
	static $StringArray* encodings;
	static $Array<::java::lang::String, 2>* contains;
};

#endif // _CharsetContainmentTest_h_