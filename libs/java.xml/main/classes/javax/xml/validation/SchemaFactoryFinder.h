#ifndef _javax_xml_validation_SchemaFactoryFinder_h_
#define _javax_xml_validation_SchemaFactoryFinder_h_
//$ class javax.xml.validation.SchemaFactoryFinder
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
		namespace validation {
			class SchemaFactory;
		}
	}
}

namespace javax {
	namespace xml {
		namespace validation {

class SchemaFactoryFinder : public ::java::lang::Object {
	$class(SchemaFactoryFinder, 0, ::java::lang::Object)
public:
	SchemaFactoryFinder();
	void init$(::java::lang::ClassLoader* loader);
	::javax::xml::validation::SchemaFactory* _newFactory($String* schemaLanguage);
	$Class* createClass($String* className);
	virtual ::javax::xml::validation::SchemaFactory* createInstance($String* className);
	void debugDisplayClassLoader();
	static void debugPrintln(::java::util::function::Supplier* msgGen);
	::javax::xml::validation::SchemaFactory* findServiceProvider($String* schemaLanguage);
	bool isSchemaLanguageSupportedBy(::javax::xml::validation::SchemaFactory* factory, $String* schemaLanguage, ::java::security::AccessControlContext* acc);
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
	static $String* lambda$newFactory$3(::javax::xml::validation::SchemaFactory* f, $String* schemaLanguage);
	static $String* lambda$newFactory$4($String* schemaLanguage);
	virtual ::javax::xml::validation::SchemaFactory* newFactory($String* schemaLanguage);
	static $String* which($Class* clazz);
	static bool $assertionsDisabled;
	static bool debug;
	static $String* DEFAULT_PACKAGE;
	static ::java::util::Properties* cacheProps;
	static $volatile(bool) firstTime;
	::java::lang::ClassLoader* classLoader = nullptr;
	static $Class* SERVICE_CLASS;
};

		} // validation
	} // xml
} // javax

#pragma pop_macro("DEFAULT_PACKAGE")
#pragma pop_macro("SERVICE_CLASS")

#endif // _javax_xml_validation_SchemaFactoryFinder_h_