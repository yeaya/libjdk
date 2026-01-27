#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_BasisLibrary$3_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_BasisLibrary$3_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$3
//$ extends org.w3c.dom.NodeList

#include <org/w3c/dom/NodeList.h>

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
						namespace xsltc {
							namespace runtime {

class BasisLibrary$3 : public ::org::w3c::dom::NodeList {
	$class(BasisLibrary$3, $NO_CLASS_INIT, ::org::w3c::dom::NodeList)
public:
	BasisLibrary$3();
	void init$(::org::w3c::dom::Node* val$inNode);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	::org::w3c::dom::Node* val$inNode = nullptr;
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_BasisLibrary$3_h_