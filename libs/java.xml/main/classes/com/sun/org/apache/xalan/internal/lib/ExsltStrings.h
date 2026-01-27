#ifndef _com_sun_org_apache_xalan_internal_lib_ExsltStrings_h_
#define _com_sun_org_apache_xalan_internal_lib_ExsltStrings_h_
//$ class com.sun.org.apache.xalan.internal.lib.ExsltStrings
//$ extends com.sun.org.apache.xalan.internal.lib.ExsltBase

#include <com/sun/org/apache/xalan/internal/lib/ExsltBase.h>

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

class ExsltStrings : public ::com::sun::org::apache::xalan::internal::lib::ExsltBase {
	$class(ExsltStrings, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::lib::ExsltBase)
public:
	ExsltStrings();
	void init$();
	static $String* align($String* targetStr, $String* paddingStr, $String* type);
	static $String* align($String* targetStr, $String* paddingStr);
	static $String* concat(::org::w3c::dom::NodeList* nl);
	static $String* padding(double length, $String* pattern);
	static $String* padding(double length);
	static ::org::w3c::dom::NodeList* split($String* str, $String* pattern);
	static ::org::w3c::dom::NodeList* split($String* str);
	static ::org::w3c::dom::NodeList* tokenize($String* toTokenize, $String* delims);
	static ::org::w3c::dom::NodeList* tokenize($String* toTokenize);
};

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_lib_ExsltStrings_h_