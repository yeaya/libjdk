#ifndef _com_sun_org_apache_xalan_internal_lib_ExsltMath_h_
#define _com_sun_org_apache_xalan_internal_lib_ExsltMath_h_
//$ class com.sun.org.apache.xalan.internal.lib.ExsltMath
//$ extends com.sun.org.apache.xalan.internal.lib.ExsltBase

#include <com/sun/org/apache/xalan/internal/lib/ExsltBase.h>

#pragma push_macro("E")
#undef E
#pragma push_macro("LN2")
#undef LN2
#pragma push_macro("LOG2E")
#undef LOG2E
#pragma push_macro("PI")
#undef PI
#pragma push_macro("SQRRT2")
#undef SQRRT2
#pragma push_macro("SQRT1_2")
#undef SQRT1_2

namespace org {
	namespace w3c {
		namespace dom {
			class NodeList;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

class ExsltMath : public ::com::sun::org::apache::xalan::internal::lib::ExsltBase {
	$class(ExsltMath, 0, ::com::sun::org::apache::xalan::internal::lib::ExsltBase)
public:
	ExsltMath();
	void init$();
	static double abs(double num);
	static double acos(double num);
	static double asin(double num);
	static double atan(double num);
	static double atan2(double num1, double num2);
	static double constant($String* name, double precision);
	static double cos(double num);
	static double exp(double num);
	static ::org::w3c::dom::NodeList* highest(::org::w3c::dom::NodeList* nl);
	static double log(double num);
	static ::org::w3c::dom::NodeList* lowest(::org::w3c::dom::NodeList* nl);
	static double max(::org::w3c::dom::NodeList* nl);
	static double min(::org::w3c::dom::NodeList* nl);
	static double power(double num1, double num2);
	static double random();
	static double sin(double num);
	static double sqrt(double num);
	static double tan(double num);
	static $String* PI;
	static $String* E;
	static $String* SQRRT2;
	static $String* LN2;
	static $String* LN10;
	static $String* LOG2E;
	static $String* SQRT1_2;
};

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("E")
#pragma pop_macro("LN2")
#pragma pop_macro("LOG2E")
#pragma pop_macro("PI")
#pragma pop_macro("SQRRT2")
#pragma pop_macro("SQRT1_2")

#endif // _com_sun_org_apache_xalan_internal_lib_ExsltMath_h_