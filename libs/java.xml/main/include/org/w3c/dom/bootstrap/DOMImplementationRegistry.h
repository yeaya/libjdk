#ifndef _org_w3c_dom_bootstrap_DOMImplementationRegistry_h_
#define _org_w3c_dom_bootstrap_DOMImplementationRegistry_h_
//$ class org.w3c.dom.bootstrap.DOMImplementationRegistry
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_LINE_LENGTH")
#undef DEFAULT_LINE_LENGTH
#pragma push_macro("DEFAULT_PACKAGE")
#undef DEFAULT_PACKAGE
#pragma push_macro("FALLBACK_CLASS")
#undef FALLBACK_CLASS
#pragma push_macro("PROPERTY")
#undef PROPERTY

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
			class DOMImplementationList;
			class DOMImplementationSource;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace bootstrap {

class $import DOMImplementationRegistry : public ::java::lang::Object {
	$class(DOMImplementationRegistry, 0, ::java::lang::Object)
public:
	DOMImplementationRegistry();
	void init$(::java::util::List* srcs);
	void addSource(::org::w3c::dom::DOMImplementationSource* s);
	static ::java::lang::ClassLoader* getClassLoader();
	static ::java::lang::ClassLoader* getContextClassLoader();
	::org::w3c::dom::DOMImplementation* getDOMImplementation($String* features);
	::org::w3c::dom::DOMImplementationList* getDOMImplementationList($String* features);
	static ::java::io::InputStream* getResourceAsStream(::java::lang::ClassLoader* classLoader, $String* name);
	static $String* getServiceValue(::java::lang::ClassLoader* classLoader);
	static $String* getSystemProperty($String* name);
	static ::org::w3c::dom::bootstrap::DOMImplementationRegistry* newInstance();
	static $String* PROPERTY;
	static const int32_t DEFAULT_LINE_LENGTH = 80;
	::java::util::List* sources = nullptr;
	static $String* FALLBACK_CLASS;
	static $String* DEFAULT_PACKAGE;
};

			} // bootstrap
		} // dom
	} // w3c
} // org

#pragma pop_macro("DEFAULT_LINE_LENGTH")
#pragma pop_macro("DEFAULT_PACKAGE")
#pragma pop_macro("FALLBACK_CLASS")
#pragma pop_macro("PROPERTY")

#endif // _org_w3c_dom_bootstrap_DOMImplementationRegistry_h_