#ifndef _com_sun_org_apache_xml_internal_utils_SystemIDResolver_h_
#define _com_sun_org_apache_xml_internal_utils_SystemIDResolver_h_
//$ class com.sun.org.apache.xml.internal.utils.SystemIDResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export SystemIDResolver : public ::java::lang::Object {
	$class(SystemIDResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SystemIDResolver();
	void init$();
	static $String* getAbsolutePathFromRelativePath($String* relativePath);
	static $String* getAbsoluteURI($String* systemId);
	static $String* getAbsoluteURI($String* urlString, $String* base);
	static $String* getAbsoluteURIFromRelative($String* localPath);
	static bool isAbsolutePath($String* systemId);
	static bool isAbsoluteURI($String* systemId);
	static bool isWindowsAbsolutePath($String* systemId);
	static $String* replaceChars($String* str);
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_SystemIDResolver_h_