#ifndef _com_sun_org_apache_bcel_internal_generic_LRETURN_h_
#define _com_sun_org_apache_bcel_internal_generic_LRETURN_h_
//$ class com.sun.org.apache.bcel.internal.generic.LRETURN
//$ extends com.sun.org.apache.bcel.internal.generic.ReturnInstruction

#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>

#pragma push_macro("LRETURN")
#undef LRETURN

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

class LRETURN : public ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction {
	$class(LRETURN, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction)
public:
	LRETURN();
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

#pragma pop_macro("LRETURN")

#endif // _com_sun_org_apache_bcel_internal_generic_LRETURN_h_