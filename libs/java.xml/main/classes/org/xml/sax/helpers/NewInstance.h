#ifndef _org_xml_sax_helpers_NewInstance_h_
#define _org_xml_sax_helpers_NewInstance_h_
//$ class org.xml.sax.helpers.NewInstance
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_CLASS")
#undef DEFAULT_CLASS
#pragma push_macro("DEFAULT_PACKAGE")
#undef DEFAULT_PACKAGE

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class NewInstance : public ::java::lang::Object {
	$class(NewInstance, 0, ::java::lang::Object)
public:
	NewInstance();
	void init$();
	static $Object* newInstance($Class* type, ::java::lang::ClassLoader* loader, $String* clsName);
	static $String* DEFAULT_PACKAGE;
	static $String* DEFAULT_CLASS;
};

			} // helpers
		} // sax
	} // xml
} // org

#pragma pop_macro("DEFAULT_CLASS")
#pragma pop_macro("DEFAULT_PACKAGE")

#endif // _org_xml_sax_helpers_NewInstance_h_