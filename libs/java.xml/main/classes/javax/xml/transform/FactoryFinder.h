#ifndef _javax_xml_transform_FactoryFinder_h_
#define _javax_xml_transform_FactoryFinder_h_
//$ class javax.xml.transform.FactoryFinder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_PACKAGE")
#undef DEFAULT_PACKAGE

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
		namespace transform {

class FactoryFinder : public ::java::lang::Object {
	$class(FactoryFinder, 0, ::java::lang::Object)
public:
	FactoryFinder();
	void init$();
	static void dPrint(::java::util::function::Supplier* msgGen);
	static $Object* find($Class* type, $String* fallbackClassName);
	static $Object* findServiceProvider($Class* type);
	static $Class* getProviderClass($String* className, ::java::lang::ClassLoader* cl, bool doFallback, bool useBSClsLoader);
	static $String* lambda$find$1($String* factoryId);
	static $String* lambda$find$2($String* systemProp);
	static $String* lambda$find$3(::java::io::File* f);
	static $String* lambda$find$4($String* factoryClassName);
	static $String* lambda$find$5($String* fallbackClassName);
	static $String* lambda$newInstance$0($Class* providerClass, ::java::lang::ClassLoader* clD);
	static $Object* newInstance($Class* type, $String* className, ::java::lang::ClassLoader* cl, bool doFallback);
	static bool $assertionsDisabled;
	static $String* DEFAULT_PACKAGE;
	static bool debug;
	static ::java::util::Properties* cacheProps;
	static $volatile(bool) firstTime;
};

		} // transform
	} // xml
} // javax

#pragma pop_macro("DEFAULT_PACKAGE")

#endif // _javax_xml_transform_FactoryFinder_h_