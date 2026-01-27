#ifndef _FormatLocale_h_
#define _FormatLocale_h_
//$ class FormatLocale
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}

class $export FormatLocale : public ::java::lang::Object {
	$class(FormatLocale, 0, ::java::lang::Object)
public:
	FormatLocale();
	void init$();
	static void lambda$main$0(int32_t i);
	static void main($StringArray* args);
	static float src;
	static ::java::util::List* formatLocale;
	static ::java::util::List* expected;
};

#endif // _FormatLocale_h_