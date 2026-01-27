#ifndef _com_sun_org_apache_xml_internal_serializer_TransformStateSetter_h_
#define _com_sun_org_apache_xml_internal_serializer_TransformStateSetter_h_
//$ interface com.sun.org.apache.xml.internal.serializer.TransformStateSetter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace transform {
			class Transformer;
		}
	}
}
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
				namespace xml {
					namespace internal {
						namespace serializer {

class TransformStateSetter : public ::java::lang::Object {
	$interface(TransformStateSetter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void resetState(::javax::xml::transform::Transformer* transformer) {}
	virtual void setCurrentNode(::org::w3c::dom::Node* n) {}
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_TransformStateSetter_h_