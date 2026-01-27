#ifndef _com_sun_org_apache_bcel_internal_generic_StackProducer_h_
#define _com_sun_org_apache_bcel_internal_generic_StackProducer_h_
//$ interface com.sun.org.apache.bcel.internal.generic.StackProducer
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

class StackProducer : public ::java::lang::Object {
	$interface(StackProducer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) {return 0;}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_StackProducer_h_