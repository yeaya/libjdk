#ifndef _com_sun_org_apache_xml_internal_dtm_DTMWSFilter_h_
#define _com_sun_org_apache_xml_internal_dtm_DTMWSFilter_h_
//$ interface com.sun.org.apache.xml.internal.dtm.DTMWSFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INHERIT")
#undef INHERIT
#pragma push_macro("NOTSTRIP")
#undef NOTSTRIP
#pragma push_macro("STRIP")
#undef STRIP

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

class $export DTMWSFilter : public ::java::lang::Object {
	$interface(DTMWSFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int16_t getShouldStripSpace(int32_t elementHandle, ::com::sun::org::apache::xml::internal::dtm::DTM* dtm) {return 0;}
	static const int16_t NOTSTRIP = 1;
	static const int16_t STRIP = 2;
	static const int16_t INHERIT = 3;
};

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INHERIT")
#pragma pop_macro("NOTSTRIP")
#pragma pop_macro("STRIP")

#endif // _com_sun_org_apache_xml_internal_dtm_DTMWSFilter_h_