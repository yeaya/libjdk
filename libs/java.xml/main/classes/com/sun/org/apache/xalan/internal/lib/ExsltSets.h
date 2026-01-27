#ifndef _com_sun_org_apache_xalan_internal_lib_ExsltSets_h_
#define _com_sun_org_apache_xalan_internal_lib_ExsltSets_h_
//$ class com.sun.org.apache.xalan.internal.lib.ExsltSets
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

class ExsltSets : public ::com::sun::org::apache::xalan::internal::lib::ExsltBase {
	$class(ExsltSets, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::lib::ExsltBase)
public:
	ExsltSets();
	void init$();
	static ::org::w3c::dom::NodeList* difference(::org::w3c::dom::NodeList* nl1, ::org::w3c::dom::NodeList* nl2);
	static ::org::w3c::dom::NodeList* distinct(::org::w3c::dom::NodeList* nl);
	static bool hasSameNode(::org::w3c::dom::NodeList* nl1, ::org::w3c::dom::NodeList* nl2);
	static ::org::w3c::dom::NodeList* intersection(::org::w3c::dom::NodeList* nl1, ::org::w3c::dom::NodeList* nl2);
	static ::org::w3c::dom::NodeList* leading(::org::w3c::dom::NodeList* nl1, ::org::w3c::dom::NodeList* nl2);
	static ::org::w3c::dom::NodeList* trailing(::org::w3c::dom::NodeList* nl1, ::org::w3c::dom::NodeList* nl2);
};

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_lib_ExsltSets_h_