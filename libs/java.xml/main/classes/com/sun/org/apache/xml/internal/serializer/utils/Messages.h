#ifndef _com_sun_org_apache_xml_internal_serializer_utils_Messages_h_
#define _com_sun_org_apache_xml_internal_serializer_utils_Messages_h_
//$ class com.sun.org.apache.xml.internal.serializer.utils.Messages
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
		class ResourceBundle;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

class Messages : public ::java::lang::Object {
	$class(Messages, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Messages();
	void init$($String* resourceBundle);
	$String* createMessage($String* msgKey, $ObjectArray* args);
	$String* createMsg(::java::util::ResourceBundle* fResourceBundle, $String* msgKey, $ObjectArray* args);
	::java::util::Locale* getLocale();
	::java::util::Locale* m_locale = nullptr;
	::java::util::ResourceBundle* m_resourceBundle = nullptr;
	$String* m_resourceBundleName = nullptr;
};

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_utils_Messages_h_