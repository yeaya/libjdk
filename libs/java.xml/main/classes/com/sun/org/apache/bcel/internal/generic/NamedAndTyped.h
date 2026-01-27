#ifndef _com_sun_org_apache_bcel_internal_generic_NamedAndTyped_h_
#define _com_sun_org_apache_bcel_internal_generic_NamedAndTyped_h_
//$ interface com.sun.org.apache.bcel.internal.generic.NamedAndTyped
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Type;
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

class NamedAndTyped : public ::java::lang::Object {
	$interface(NamedAndTyped, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getName() {return nullptr;}
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType() {return nullptr;}
	virtual void setName($String* name) {}
	virtual void setType(::com::sun::org::apache::bcel::internal::generic::Type* type) {}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_NamedAndTyped_h_