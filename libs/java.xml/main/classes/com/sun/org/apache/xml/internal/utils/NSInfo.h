#ifndef _com_sun_org_apache_xml_internal_utils_NSInfo_h_
#define _com_sun_org_apache_xml_internal_utils_NSInfo_h_
//$ class com.sun.org.apache.xml.internal.utils.NSInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ANCESTORHASXMLNS")
#undef ANCESTORHASXMLNS
#pragma push_macro("ANCESTORNOXMLNS")
#undef ANCESTORNOXMLNS
#pragma push_macro("ANCESTORXMLNSUNPROCESSED")
#undef ANCESTORXMLNSUNPROCESSED

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export NSInfo : public ::java::lang::Object {
	$class(NSInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NSInfo();
	void init$(bool hasProcessedNS, bool hasXMLNSAttrs);
	void init$(bool hasProcessedNS, bool hasXMLNSAttrs, int32_t ancestorHasXMLNSAttrs);
	void init$($String* namespace$, bool hasXMLNSAttrs);
	$String* m_namespace = nullptr;
	bool m_hasXMLNSAttrs = false;
	bool m_hasProcessedNS = false;
	int32_t m_ancestorHasXMLNSAttrs = 0;
	static const int32_t ANCESTORXMLNSUNPROCESSED = 0;
	static const int32_t ANCESTORHASXMLNS = 1;
	static const int32_t ANCESTORNOXMLNS = 2;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ANCESTORHASXMLNS")
#pragma pop_macro("ANCESTORNOXMLNS")
#pragma pop_macro("ANCESTORXMLNSUNPROCESSED")

#endif // _com_sun_org_apache_xml_internal_utils_NSInfo_h_