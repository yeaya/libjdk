#ifndef _com_sun_org_apache_xerces_internal_xs_XSMultiValueFacet_h_
#define _com_sun_org_apache_xerces_internal_xs_XSMultiValueFacet_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSMultiValueFacet
//$ extends com.sun.org.apache.xerces.internal.xs.XSObject

#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class StringList;
							class XSObjectList;
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
				namespace xerces {
					namespace internal {
						namespace xs {
							namespace datatypes {
								class ObjectList;
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
				namespace xerces {
					namespace internal {
						namespace xs {

class XSMultiValueFacet : public ::com::sun::org::apache::xerces::internal::xs::XSObject {
	$interface(XSMultiValueFacet, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSObject)
public:
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList* getEnumerationValues() {return nullptr;}
	virtual int16_t getFacetKind() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getLexicalFacetValues() {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSMultiValueFacet_h_