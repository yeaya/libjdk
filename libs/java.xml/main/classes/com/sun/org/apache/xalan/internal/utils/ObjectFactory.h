#ifndef _com_sun_org_apache_xalan_internal_utils_ObjectFactory_h_
#define _com_sun_org_apache_xalan_internal_utils_ObjectFactory_h_
//$ class com.sun.org.apache.xalan.internal.utils.ObjectFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("JAXP_INTERNAL")
#undef JAXP_INTERNAL
#pragma push_macro("STAX_INTERNAL")
#undef STAX_INTERNAL

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

class ObjectFactory : public ::java::lang::Object {
	$class(ObjectFactory, 0, ::java::lang::Object)
public:
	ObjectFactory();
	void init$();
	static void debugPrintln(::java::util::function::Supplier* msgGen);
	static ::java::lang::ClassLoader* findClassLoader();
	static $Class* findProviderClass($String* className, bool doFallback);
	static $Class* findProviderClass($String* className, ::java::lang::ClassLoader* cl, bool doFallback);
	static $String* lambda$newInstance$0($Class* providerClass, ::java::lang::ClassLoader* cl);
	static $Object* newInstance($String* className, bool doFallback);
	static $String* JAXP_INTERNAL;
	static $String* STAX_INTERNAL;
	static const bool DEBUG = false;
};

						} // utils
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("JAXP_INTERNAL")
#pragma pop_macro("STAX_INTERNAL")

#endif // _com_sun_org_apache_xalan_internal_utils_ObjectFactory_h_