#ifndef _com_sun_org_apache_bcel_internal_generic_MethodObserver_h_
#define _com_sun_org_apache_bcel_internal_generic_MethodObserver_h_
//$ interface com.sun.org.apache.bcel.internal.generic.MethodObserver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class MethodGen;
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

class MethodObserver : public ::java::lang::Object {
	$interface(MethodObserver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void notify(::com::sun::org::apache::bcel::internal::generic::MethodGen* method) {}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_MethodObserver_h_