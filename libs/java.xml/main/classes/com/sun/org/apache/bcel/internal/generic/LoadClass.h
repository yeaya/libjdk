#ifndef _com_sun_org_apache_bcel_internal_generic_LoadClass_h_
#define _com_sun_org_apache_bcel_internal_generic_LoadClass_h_
//$ interface com.sun.org.apache.bcel.internal.generic.LoadClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class ObjectType;
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

class LoadClass : public ::java::lang::Object {
	$interface(LoadClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::bcel::internal::generic::ObjectType* getLoadClassType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) {return nullptr;}
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) {return nullptr;}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_LoadClass_h_