#ifndef _Bug8139572_h_
#define _Bug8139572_h_
//$ class Bug8139572
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("APPLIED")
#undef APPLIED
#pragma push_macro("EXPECTED")
#undef EXPECTED
#pragma push_macro("PATTERNS")
#undef PATTERNS
#pragma push_macro("RUSSIAN")
#undef RUSSIAN
#pragma push_macro("SEPT12")
#undef SEPT12

namespace java {
	namespace util {
		class Date;
		class Locale;
	}
}

class $export Bug8139572 : public ::java::lang::Object {
	$class(Bug8139572, 0, ::java::lang::Object)
public:
	Bug8139572();
	void init$();
	static void main($StringArray* args);
	static ::java::util::Locale* RUSSIAN;
	static ::java::util::Date* SEPT12;
	static $StringArray* PATTERNS;
	static $StringArray* APPLIED;
	static $StringArray* EXPECTED;
};

#pragma pop_macro("APPLIED")
#pragma pop_macro("EXPECTED")
#pragma pop_macro("PATTERNS")
#pragma pop_macro("RUSSIAN")
#pragma pop_macro("SEPT12")

#endif // _Bug8139572_h_