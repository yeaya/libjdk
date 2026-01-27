#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeList_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeList_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMNodeList
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMNodeListBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class DTMNodeList : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase {
	$class(DTMNodeList, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase)
public:
	DTMNodeList();
	void init$();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMIterator* dtmIterator);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* getDTMIterator();
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	::com::sun::org::apache::xml::internal::dtm::DTMIterator* m_iter = nullptr;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMNodeList_h_