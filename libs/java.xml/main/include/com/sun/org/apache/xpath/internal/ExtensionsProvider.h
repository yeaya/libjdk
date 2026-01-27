#ifndef _com_sun_org_apache_xpath_internal_ExtensionsProvider_h_
#define _com_sun_org_apache_xpath_internal_ExtensionsProvider_h_
//$ interface com.sun.org.apache.xpath.internal.ExtensionsProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {
							class FuncExtFunction;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

class $import ExtensionsProvider : public ::java::lang::Object {
	$interface(ExtensionsProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool elementAvailable($String* ns, $String* elemName) {return false;}
	virtual $Object* extFunction($String* ns, $String* funcName, ::java::util::List* argVec, Object$* methodKey) {return nullptr;}
	virtual $Object* extFunction(::com::sun::org::apache::xpath::internal::functions::FuncExtFunction* extFunction, ::java::util::List* argVec) {return nullptr;}
	virtual bool functionAvailable($String* ns, $String* funcName) {return false;}
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_ExtensionsProvider_h_