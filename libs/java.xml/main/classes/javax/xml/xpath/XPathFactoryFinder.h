#ifndef _javax_xml_xpath_XPathFactoryFinder_h_
#define _javax_xml_xpath_XPathFactoryFinder_h_
//$ class javax.xml.xpath.XPathFactoryFinder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_PACKAGE")
#undef DEFAULT_PACKAGE
#pragma push_macro("SERVICE_CLASS")
#undef SERVICE_CLASS

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class Properties;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}
namespace javax {
	namespace xml {
		namespace xpath {
			class XPathFactory;
		}
	}
}

namespace javax {
	namespace xml {
		namespace xpath {

class XPathFactoryFinder : public ::java::lang::Object {
	$class(XPathFactoryFinder, 0, ::java::lang::Object)
public:
	XPathFactoryFinder();
	void init$(::java::lang::ClassLoader* loader);
	::javax::xml::xpath::XPathFactory* _newFactory($String* uri);
	$Class* createClass($String* className);
	virtual ::javax::xml::xpath::XPathFactory* createInstance($String* className);
	void debugDisplayClassLoader();
	static void debugPrintln(::java::util::function::Supplier* msgGen);
	::javax::xml::xpath::XPathFactory* findServiceProvider($String* objectModel);
	bool isObjectModelSupportedBy(::javax::xml::xpath::XPathFactory* factory, $String* objectModel, ::java::security::AccessControlContext* acc);
	static $String* lambda$_newFactory$10($String* factoryClassName);
	static $String* lambda$_newFactory$11();
	static $String* lambda$_newFactory$12();
	static $String* lambda$_newFactory$5($String* propertyName);
	static $String* lambda$_newFactory$6($String* r);
	static $String* lambda$_newFactory$7();
	static $String* lambda$_newFactory$8($String* propertyName);
	static $String* lambda$_newFactory$9(::java::io::File* f);
	static $String* lambda$createInstance$13($String* className);
	static $String* lambda$createInstance$14($String* className);
	static $String* lambda$createInstance$15($String* className, $Class* clazz);
	static $String* lambda$createInstance$16($Class* clazz);
	$String* lambda$debugDisplayClassLoader$0();
	$String* lambda$debugDisplayClassLoader$1();
	$String* lambda$debugDisplayClassLoader$2();
	static $String* lambda$newFactory$3(::javax::xml::xpath::XPathFactory* f, $String* uri);
	static $String* lambda$newFactory$4($String* uri);
	virtual ::javax::xml::xpath::XPathFactory* newFactory($String* uri);
	static $String* which($Class* clazz);
	static bool $assertionsDisabled;
	static $String* DEFAULT_PACKAGE;
	static bool debug;
	static ::java::util::Properties* cacheProps;
	static $volatile(bool) firstTime;
	::java::lang::ClassLoader* classLoader = nullptr;
	static $Class* SERVICE_CLASS;
};

		} // xpath
	} // xml
} // javax

#pragma pop_macro("DEFAULT_PACKAGE")
#pragma pop_macro("SERVICE_CLASS")

#endif // _javax_xml_xpath_XPathFactoryFinder_h_