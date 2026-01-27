#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
							class DTMManager;
							class DTMWSFilter;
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
							class XMLStringFactory;
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Source;
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

class DTMDefaultBaseIterators : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers {
	$class(DTMDefaultBaseIterators, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers)
public:
	DTMDefaultBaseIterators();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr, ::javax::xml::transform::Source* source, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing);
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr, ::javax::xml::transform::Source* source, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing, int32_t blocksize, bool usePrevsib, bool newNameTable);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getAxisIterator(int32_t axis) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getTypedAxisIterator(int32_t axis, int32_t type) override;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators_h_