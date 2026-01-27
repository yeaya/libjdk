#ifndef _jdk_xml_internal_SecuritySupport_h_
#define _jdk_xml_internal_SecuritySupport_h_
//$ class jdk.xml.internal.SecuritySupport
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NEWLINE")
#undef NEWLINE

namespace java {
	namespace io {
		class File;
		class FileInputStream;
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class ClassLoader;
		class Long;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Properties;
		class ResourceBundle;
	}
}

namespace jdk {
	namespace xml {
		namespace internal {

class SecuritySupport : public ::java::lang::Object {
	$class(SecuritySupport, 0, ::java::lang::Object)
public:
	SecuritySupport();
	void init$();
	static $String* checkAccess($String* systemId, $String* allowedProtocols, $String* accessAny);
	static bool doesFileExist(::java::io::File* f);
	static ::java::lang::ClassLoader* getClassLoader();
	static $String* getClassSource($Class* cls);
	static ::java::lang::ClassLoader* getContextClassLoader();
	static $String* getErrorMessage(::java::util::Locale* locale, $String* bundle, $String* key, $ObjectArray* arguments);
	static ::java::io::FileInputStream* getFileInputStream(::java::io::File* file);
	static $Object* getJAXPSystemProperty($Class* type, $String* propName, $String* defValue);
	static $String* getJAXPSystemProperty($String* propName);
	static int64_t getLastModified(::java::io::File* f);
	static ::java::lang::ClassLoader* getParentClassLoader(::java::lang::ClassLoader* cl);
	static ::java::io::InputStream* getResourceAsStream($String* name);
	static ::java::io::InputStream* getResourceAsStream(::java::lang::ClassLoader* cl, $String* name);
	static ::java::util::ResourceBundle* getResourceBundle($String* bundle);
	static ::java::util::ResourceBundle* getResourceBundle($String* bundle, ::java::util::Locale* locale);
	static ::java::lang::ClassLoader* getSystemClassLoader();
	static $String* getSystemProperty($String* propName);
	static $String* getSystemProperty($String* propName, $String* defValue);
	static $Object* getSystemProperty($Class* type, $String* propName, $String* defValue);
	static bool isDirectory(::java::io::File* f);
	static bool isFileExists(::java::io::File* f);
	static bool isProtocolAllowed($String* protocol, $String* allowedProtocols);
	static ::java::lang::ClassLoader* lambda$getClassLoader$12();
	static $String* lambda$getClassSource$11($Class* cls);
	static ::java::lang::ClassLoader* lambda$getContextClassLoader$8();
	static ::java::io::FileInputStream* lambda$getFileInputStream$3(::java::io::File* file);
	static ::java::lang::Long* lambda$getLastModified$7(::java::io::File* f);
	static ::java::lang::ClassLoader* lambda$getParentClassLoader$10(::java::lang::ClassLoader* cl);
	static ::java::io::InputStream* lambda$getResourceAsStream$13(::java::lang::ClassLoader* cl, $String* name);
	static ::java::io::InputStream* lambda$getResourceAsStream$4($String* name);
	static ::java::util::ResourceBundle* lambda$getResourceBundle$5($String* bundle, ::java::util::Locale* locale);
	static ::java::lang::ClassLoader* lambda$getSystemClassLoader$9();
	static $String* lambda$getSystemProperty$0($String* propName);
	static ::java::lang::Boolean* lambda$isDirectory$1(::java::io::File* f);
	static ::java::lang::Boolean* lambda$isFileExists$2(::java::io::File* f);
	static $String* readJAXPProperty($String* propName);
	static $String* sanitizePath($String* uri);
	static $String* NEWLINE;
	static ::java::util::Properties* cacheProps;
	static $volatile(bool) firstTime;
};

		} // internal
	} // xml
} // jdk

#pragma pop_macro("NEWLINE")

#endif // _jdk_xml_internal_SecuritySupport_h_