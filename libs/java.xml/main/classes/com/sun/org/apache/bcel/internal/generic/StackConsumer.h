#ifndef _com_sun_org_apache_bcel_internal_generic_StackConsumer_h_
#define _com_sun_org_apache_bcel_internal_generic_StackConsumer_h_
//$ interface com.sun.org.apache.bcel.internal.generic.StackConsumer
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

class StackConsumer : public ::java::lang::Object {
	$interface(StackConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) {return 0;}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_StackConsumer_h_