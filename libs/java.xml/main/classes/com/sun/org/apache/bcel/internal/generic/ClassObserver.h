#ifndef _com_sun_org_apache_bcel_internal_generic_ClassObserver_h_
#define _com_sun_org_apache_bcel_internal_generic_ClassObserver_h_
//$ interface com.sun.org.apache.bcel.internal.generic.ClassObserver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ClassGen;
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
				namespace bcel {
					namespace internal {
						namespace generic {

class ClassObserver : public ::java::lang::Object {
	$interface(ClassObserver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void notify(::com::sun::org::apache::bcel::internal::generic::ClassGen* clazz) {}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_ClassObserver_h_