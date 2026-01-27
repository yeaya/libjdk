#ifndef _com_sun_org_apache_xml_internal_utils_NameSpace_h_
#define _com_sun_org_apache_xml_internal_utils_NameSpace_h_
//$ class com.sun.org.apache.xml.internal.utils.NameSpace
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export NameSpace : public ::java::io::Serializable {
	$class(NameSpace, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	NameSpace();
	void init$($String* prefix, $String* uri);
	static const int64_t serialVersionUID = (int64_t)0x146ADE9031F800AF;
	::com::sun::org::apache::xml::internal::utils::NameSpace* m_next = nullptr;
	$String* m_prefix = nullptr;
	$String* m_uri = nullptr;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_NameSpace_h_