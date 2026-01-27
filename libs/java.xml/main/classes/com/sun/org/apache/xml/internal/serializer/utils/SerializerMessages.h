#ifndef _com_sun_org_apache_xml_internal_serializer_utils_SerializerMessages_h_
#define _com_sun_org_apache_xml_internal_serializer_utils_SerializerMessages_h_
//$ class com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages
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

class SerializerMessages : public ::java::util::ListResourceBundle {
	$class(SerializerMessages, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	SerializerMessages();
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

#endif // _com_sun_org_apache_xml_internal_serializer_utils_SerializerMessages_h_