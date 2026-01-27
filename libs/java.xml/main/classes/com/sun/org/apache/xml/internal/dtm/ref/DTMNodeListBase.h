#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeListBase_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeListBase_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMNodeListBase
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
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class DTMNodeListBase : public ::org::w3c::dom::NodeList {
	$class(DTMNodeListBase, $NO_CLASS_INIT, ::org::w3c::dom::NodeList)
public:
	DTMNodeListBase();
	void init$();
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeListBase_h_