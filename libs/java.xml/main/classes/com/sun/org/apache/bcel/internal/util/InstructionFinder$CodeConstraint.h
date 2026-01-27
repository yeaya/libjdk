#ifndef _com_sun_org_apache_bcel_internal_util_InstructionFinder$CodeConstraint_h_
#define _com_sun_org_apache_bcel_internal_util_InstructionFinder$CodeConstraint_h_
//$ interface com.sun.org.apache.bcel.internal.util.InstructionFinder$CodeConstraint
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
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
						namespace util {

class InstructionFinder$CodeConstraint : public ::java::lang::Object {
	$interface(InstructionFinder$CodeConstraint, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool checkCode($Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* match) {return false;}
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_InstructionFinder$CodeConstraint_h_