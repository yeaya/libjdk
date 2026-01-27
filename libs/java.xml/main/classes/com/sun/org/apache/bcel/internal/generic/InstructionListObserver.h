#ifndef _com_sun_org_apache_bcel_internal_generic_InstructionListObserver_h_
#define _com_sun_org_apache_bcel_internal_generic_InstructionListObserver_h_
//$ interface com.sun.org.apache.bcel.internal.generic.InstructionListObserver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionList;
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

class InstructionListObserver : public ::java::lang::Object {
	$interface(InstructionListObserver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void notify(::com::sun::org::apache::bcel::internal::generic::InstructionList* list) {}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_InstructionListObserver_h_