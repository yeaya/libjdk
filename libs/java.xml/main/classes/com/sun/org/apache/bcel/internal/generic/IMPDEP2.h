#ifndef _com_sun_org_apache_bcel_internal_generic_IMPDEP2_h_
#define _com_sun_org_apache_bcel_internal_generic_IMPDEP2_h_
//$ class com.sun.org.apache.bcel.internal.generic.IMPDEP2
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>

#pragma push_macro("IMPDEP2")
#undef IMPDEP2

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

class IMPDEP2 : public ::com::sun::org::apache::bcel::internal::generic::Instruction {
	$class(IMPDEP2, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction)
public:
	IMPDEP2();
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

#pragma pop_macro("IMPDEP2")

#endif // _com_sun_org_apache_bcel_internal_generic_IMPDEP2_h_