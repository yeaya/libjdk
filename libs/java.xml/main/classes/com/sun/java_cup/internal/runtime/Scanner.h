#ifndef _com_sun_java_cup_internal_runtime_Scanner_h_
#define _com_sun_java_cup_internal_runtime_Scanner_h_
//$ interface com.sun.java_cup.internal.runtime.Scanner
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {
					class Symbol;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {

class Scanner : public ::java::lang::Object {
	$interface(Scanner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::java_cup::internal::runtime::Symbol* next_token() {return nullptr;}
};

				} // runtime
			} // internal
		} // java_cup
	} // sun
} // com

#endif // _com_sun_java_cup_internal_runtime_Scanner_h_