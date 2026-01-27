#ifndef _com_sun_org_apache_xml_internal_serializer_utils_SerializerMessages_cs_h_
#define _com_sun_org_apache_xml_internal_serializer_utils_SerializerMessages_cs_h_
//$ class com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_cs
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

class SerializerMessages_cs : public ::java::util::ListResourceBundle {
	$class(SerializerMessages_cs, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	SerializerMessages_cs();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_utils_SerializerMessages_cs_h_