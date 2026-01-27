#ifndef _com_sun_org_apache_xpath_internal_compiler_FuncLoader_h_
#define _com_sun_org_apache_xpath_internal_compiler_FuncLoader_h_
//$ class com.sun.org.apache.xpath.internal.compiler.FuncLoader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {
							class Function;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

class $import FuncLoader : public ::java::lang::Object {
	$class(FuncLoader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FuncLoader();
	void init$($String* funcName, int32_t funcID);
	virtual ::com::sun::org::apache::xpath::internal::functions::Function* getFunction();
	virtual $String* getName();
	int32_t m_funcID = 0;
	$String* m_funcName = nullptr;
};

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_compiler_FuncLoader_h_