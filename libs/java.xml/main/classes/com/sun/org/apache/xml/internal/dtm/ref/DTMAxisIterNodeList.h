#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMAxisIterNodeList_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMAxisIterNodeList_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIterNodeList
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
							class DTMAxisIterator;
						}
					}
				}
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
						namespace utils {
							class IntVector;
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

class DTMAxisIterNodeList : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase {
	$class(DTMAxisIterNodeList, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase)
public:
	DTMAxisIterNodeList();
	void init$();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTM* dtm, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* dtmAxisIterator);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getDTMAxisIterator();
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	::com::sun::org::apache::xml::internal::dtm::DTM* m_dtm = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* m_iter = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntVector* m_cachedNodes = nullptr;
	int32_t m_last = 0;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMAxisIterNodeList_h_