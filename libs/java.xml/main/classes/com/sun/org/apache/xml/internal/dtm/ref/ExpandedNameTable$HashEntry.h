#ifndef _com_sun_org_apache_xml_internal_dtm_ref_ExpandedNameTable$HashEntry_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_ExpandedNameTable$HashEntry_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.ExpandedNameTable$HashEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class ExtendedType;
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

class ExpandedNameTable$HashEntry : public ::java::lang::Object {
	$class(ExpandedNameTable$HashEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExpandedNameTable$HashEntry();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType* key, int32_t value, int32_t hash, ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable$HashEntry* next);
	::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType* key = nullptr;
	int32_t value = 0;
	int32_t hash = 0;
	::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable$HashEntry* next = nullptr;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_ExpandedNameTable$HashEntry_h_