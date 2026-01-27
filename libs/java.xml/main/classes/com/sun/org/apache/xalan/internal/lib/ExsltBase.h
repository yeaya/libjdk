#ifndef _com_sun_org_apache_xalan_internal_lib_ExsltBase_h_
#define _com_sun_org_apache_xalan_internal_lib_ExsltBase_h_
//$ class com.sun.org.apache.xalan.internal.lib.ExsltBase
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
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

class ExsltBase : public ::java::lang::Object {
	$class(ExsltBase, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExsltBase();
	void init$();
	static double toNumber(::org::w3c::dom::Node* n);
	using ::java::lang::Object::toString;
	static $String* toString(::org::w3c::dom::Node* n);
};

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_lib_ExsltBase_h_