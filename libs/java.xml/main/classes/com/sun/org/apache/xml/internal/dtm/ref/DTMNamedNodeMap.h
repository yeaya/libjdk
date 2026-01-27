#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMNamedNodeMap_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMNamedNodeMap_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMNamedNodeMap
//$ extends org.w3c.dom.NamedNodeMap

#include <org/w3c/dom/NamedNodeMap.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
						}
					}
				}
			}
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
						namespace dtm {
							namespace ref {

class DTMNamedNodeMap : public ::org::w3c::dom::NamedNodeMap {
	$class(DTMNamedNodeMap, $NO_CLASS_INIT, ::org::w3c::dom::NamedNodeMap)
public:
	DTMNamedNodeMap();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTM* dtm, int32_t element);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* getNamedItem($String* name) override;
	virtual ::org::w3c::dom::Node* getNamedItemNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Node* item(int32_t i) override;
	virtual ::org::w3c::dom::Node* removeNamedItem($String* name) override;
	virtual ::org::w3c::dom::Node* removeNamedItemNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Node* setNamedItem(::org::w3c::dom::Node* newNode) override;
	virtual ::org::w3c::dom::Node* setNamedItemNS(::org::w3c::dom::Node* arg) override;
	::com::sun::org::apache::xml::internal::dtm::DTM* dtm = nullptr;
	int32_t element = 0;
	int16_t m_count = 0;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMNamedNodeMap_h_