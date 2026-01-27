#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMChildIterNodeList_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMChildIterNodeList_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMChildIterNodeList
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMNodeListBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>

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

class DTMChildIterNodeList : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase {
	$class(DTMChildIterNodeList, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase)
public:
	DTMChildIterNodeList();
	void init$();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTM* parentDTM, int32_t parentHandle);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	int32_t m_firstChild = 0;
	::com::sun::org::apache::xml::internal::dtm::DTM* m_parentDTM = nullptr;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMChildIterNodeList_h_