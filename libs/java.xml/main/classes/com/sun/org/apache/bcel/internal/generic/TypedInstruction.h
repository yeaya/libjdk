#ifndef _com_sun_org_apache_bcel_internal_generic_TypedInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_TypedInstruction_h_
//$ interface com.sun.org.apache.bcel.internal.generic.TypedInstruction
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

class TypedInstruction : public ::java::lang::Object {
	$interface(TypedInstruction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) {return nullptr;}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_TypedInstruction_h_