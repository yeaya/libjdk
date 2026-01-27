#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeIterator_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMNodeIterator
//$ extends org.w3c.dom.traversal.NodeIterator

#include <org/w3c/dom/traversal/NodeIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMIterator;
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
namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {
				class NodeFilter;
			}
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

class DTMNodeIterator : public ::org::w3c::dom::traversal::NodeIterator {
	$class(DTMNodeIterator, $NO_CLASS_INIT, ::org::w3c::dom::traversal::NodeIterator)
public:
	DTMNodeIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMIterator* dtmIterator);
	virtual void detach() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* getDTMIterator();
	virtual bool getExpandEntityReferences() override;
	virtual ::org::w3c::dom::traversal::NodeFilter* getFilter() override;
	virtual ::org::w3c::dom::Node* getRoot() override;
	virtual int32_t getWhatToShow() override;
	virtual ::org::w3c::dom::Node* nextNode() override;
	virtual ::org::w3c::dom::Node* previousNode() override;
	::com::sun::org::apache::xml::internal::dtm::DTMIterator* dtm_iter = nullptr;
	bool valid = false;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeIterator_h_