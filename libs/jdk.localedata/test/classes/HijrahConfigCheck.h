#ifndef _HijrahConfigCheck_h_
#define _HijrahConfigCheck_h_
//$ class HijrahConfigCheck
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CALTYPE")
#undef CALTYPE

namespace java {
	namespace time {
		namespace chrono {
			class Chronology;
		}
	}
}

class $export HijrahConfigCheck : public ::java::lang::Object {
	$class(HijrahConfigCheck, 0, ::java::lang::Object)
public:
	HijrahConfigCheck();
	void init$();
	static bool lambda$main$0(::java::time::chrono::Chronology* c);
	static void main($StringArray* args);
	static $String* CALTYPE;
};

#pragma pop_macro("CALTYPE")

#endif // _HijrahConfigCheck_h_