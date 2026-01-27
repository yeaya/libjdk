#ifndef _com_sun_org_apache_bcel_internal_generic_InstructionFactory$MethodObject_h_
#define _com_sun_org_apache_bcel_internal_generic_InstructionFactory$MethodObject_h_
//$ class com.sun.org.apache.bcel.internal.generic.InstructionFactory$MethodObject
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class InstructionFactory$MethodObject : public ::java::lang::Object {
	$class(InstructionFactory$MethodObject, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InstructionFactory$MethodObject();
	void init$($String* c, $String* n, ::com::sun::org::apache::bcel::internal::generic::Type* r, $Array<::com::sun::org::apache::bcel::internal::generic::Type>* a);
	$Array<::com::sun::org::apache::bcel::internal::generic::Type>* arg_types = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Type* result_type = nullptr;
	$String* class_name = nullptr;
	$String* name = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_InstructionFactory$MethodObject_h_