#ifndef _com_sun_org_apache_bcel_internal_generic_FieldObserver_h_
#define _com_sun_org_apache_bcel_internal_generic_FieldObserver_h_
//$ interface com.sun.org.apache.bcel.internal.generic.FieldObserver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class FieldGen;
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

class FieldObserver : public ::java::lang::Object {
	$interface(FieldObserver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void notify(::com::sun::org::apache::bcel::internal::generic::FieldGen* field) {}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_FieldObserver_h_