#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$AllFromNodeTraverser_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$AllFromNodeTraverser_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromNodeTraverser
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantOrSelfTraverser

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantOrSelfTraverser.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class DTMDefaultBaseTraversers;
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

class DTMDefaultBaseTraversers$AllFromNodeTraverser : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$DescendantOrSelfTraverser {
	$class(DTMDefaultBaseTraversers$AllFromNodeTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$DescendantOrSelfTraverser)
public:
	DTMDefaultBaseTraversers$AllFromNodeTraverser();
	using ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$DescendantOrSelfTraverser::first;
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers* this$0);
	using ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$DescendantOrSelfTraverser::next;
	virtual int32_t next(int32_t context, int32_t current) override;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers* this$0 = nullptr;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$AllFromNodeTraverser_h_