#ifndef _ContextMonthNamesTest_h_
#define _ContextMonthNamesTest_h_
//$ class ContextMonthNamesTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CZECH")
#undef CZECH
#pragma push_macro("EXPECTED")
#undef EXPECTED
#pragma push_macro("JAN30")
#undef JAN30
#pragma push_macro("PATTERNS")
#undef PATTERNS

namespace java {
	namespace util {
		class Date;
		class Locale;
	}
}

class $export ContextMonthNamesTest : public ::java::lang::Object {
	$class(ContextMonthNamesTest, 0, ::java::lang::Object)
public:
	ContextMonthNamesTest();
	void init$();
	static void main($StringArray* args);
	static ::java::util::Locale* CZECH;
	static ::java::util::Date* JAN30;
	static $StringArray* PATTERNS;
	static $StringArray* EXPECTED;
};

#pragma pop_macro("CZECH")
#pragma pop_macro("EXPECTED")
#pragma pop_macro("JAN30")
#pragma pop_macro("PATTERNS")

#endif // _ContextMonthNamesTest_h_