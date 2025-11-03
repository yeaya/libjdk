#ifndef _LargeMessageFormat_h_
#define _LargeMessageFormat_h_
//$ class LargeMessageFormat
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("REPEATS")
#undef REPEATS

class $export LargeMessageFormat : public ::java::lang::Object {
	$class(LargeMessageFormat, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LargeMessageFormat();
	void init$();
	static void main($StringArray* args);
	static void testFormat();
	static void testParse();
	static const int32_t REPEATS = 89;
};

#pragma pop_macro("REPEATS")

#endif // _LargeMessageFormat_h_