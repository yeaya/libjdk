#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$RootTraverser_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$RootTraverser_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$RootTraverser
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromRootTraverser

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AllFromRootTraverser.h>

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

class DTMDefaultBaseTraversers$RootTraverser : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AllFromRootTraverser {
	$class(DTMDefaultBaseTraversers$RootTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AllFromRootTraverser)
public:
	DTMDefaultBaseTraversers$RootTraverser();
	using ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AllFromRootTraverser::first;
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers* this$0);
	virtual int32_t first(int32_t context, int32_t expandedTypeID) override;
	virtual int32_t next(int32_t context, int32_t current) override;
	virtual int32_t next(int32_t context, int32_t current, int32_t expandedTypeID) override;
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

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$RootTraverser_h_