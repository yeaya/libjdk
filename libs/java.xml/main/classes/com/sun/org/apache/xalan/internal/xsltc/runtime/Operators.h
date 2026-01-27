#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_Operators_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_Operators_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.Operators
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EQ")
#undef EQ
#pragma push_macro("GE")
#undef GE
#pragma push_macro("GT")
#undef GT
#pragma push_macro("LE")
#undef LE
#pragma push_macro("LT")
#undef LT
#pragma push_macro("NE")
#undef NE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

class Operators : public ::java::lang::Object {
	$class(Operators, 0, ::java::lang::Object)
public:
	Operators();
	void init$();
	static $String* getOpNames(int32_t operator$);
	static int32_t swapOp(int32_t operator$);
	static const int32_t EQ = 0;
	static const int32_t NE = 1;
	static const int32_t GT = 2;
	static const int32_t LT = 3;
	static const int32_t GE = 4;
	static const int32_t LE = 5;
	static $StringArray* names;
	static $ints* swapOpArray;
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EQ")
#pragma pop_macro("GE")
#pragma pop_macro("GT")
#pragma pop_macro("LE")
#pragma pop_macro("LT")
#pragma pop_macro("NE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_Operators_h_