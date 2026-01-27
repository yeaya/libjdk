#ifndef _com_sun_org_apache_xerces_internal_util_DOMInputSource_h_
#define _com_sun_org_apache_xerces_internal_util_DOMInputSource_h_
//$ class com.sun.org.apache.xerces.internal.util.DOMInputSource
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>

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
				namespace xerces {
					namespace internal {
						namespace util {

class DOMInputSource : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource {
	$class(DOMInputSource, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource)
public:
	DOMInputSource();
	void init$();
	void init$(::org::w3c::dom::Node* node);
	void init$(::org::w3c::dom::Node* node, $String* systemId);
	::org::w3c::dom::Node* getNode();
	static $String* getSystemIdFromNode(::org::w3c::dom::Node* node);
	void setNode(::org::w3c::dom::Node* node);
	::org::w3c::dom::Node* fNode = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_DOMInputSource_h_