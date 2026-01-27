#ifndef _com_sun_org_apache_bcel_internal_generic_IMPDEP1_h_
#define _com_sun_org_apache_bcel_internal_generic_IMPDEP1_h_
//$ class com.sun.org.apache.bcel.internal.generic.IMPDEP1
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>

#pragma push_macro("IMPDEP1")
#undef IMPDEP1

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Visitor;
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

class IMPDEP1 : public ::com::sun::org::apache::bcel::internal::generic::Instruction {
	$class(IMPDEP1, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction)
public:
	IMPDEP1();
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("IMPDEP1")

#endif // _com_sun_org_apache_bcel_internal_generic_IMPDEP1_h_