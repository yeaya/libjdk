#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$TypedDescendantIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$TypedDescendantIterator_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedDescendantIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$DescendantIterator

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$DescendantIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class DTMDefaultBaseIterators;
							}
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
						namespace dtm {
							namespace ref {

class DTMDefaultBaseIterators$TypedDescendantIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$DescendantIterator {
	$class(DTMDefaultBaseIterators$TypedDescendantIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$DescendantIterator)
public:
	DTMDefaultBaseIterators$TypedDescendantIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators* this$0, int32_t nodeType);
	virtual int32_t next() override;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators* this$0 = nullptr;
	int32_t _nodeType = 0;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$TypedDescendantIterator_h_