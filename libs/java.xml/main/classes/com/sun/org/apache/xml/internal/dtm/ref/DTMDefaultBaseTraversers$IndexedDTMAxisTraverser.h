#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$IndexedDTMAxisTraverser_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$IndexedDTMAxisTraverser_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$IndexedDTMAxisTraverser
//$ extends com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>

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

class DTMDefaultBaseTraversers$IndexedDTMAxisTraverser : public ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser {
	$class(DTMDefaultBaseTraversers$IndexedDTMAxisTraverser, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser)
public:
	DTMDefaultBaseTraversers$IndexedDTMAxisTraverser();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers* this$0);
	virtual bool axisHasBeenProcessed(int32_t axisRoot) {return false;}
	virtual int32_t getNextIndexed(int32_t axisRoot, int32_t nextPotential, int32_t expandedTypeID);
	virtual bool isAfterAxis(int32_t axisRoot, int32_t identity) {return false;}
	bool isIndexed(int32_t expandedTypeID);
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

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseTraversers$IndexedDTMAxisTraverser_h_