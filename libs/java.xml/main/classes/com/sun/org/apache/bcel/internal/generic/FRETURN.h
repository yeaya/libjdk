#ifndef _com_sun_org_apache_bcel_internal_generic_FRETURN_h_
#define _com_sun_org_apache_bcel_internal_generic_FRETURN_h_
//$ class com.sun.org.apache.bcel.internal.generic.FRETURN
//$ extends com.sun.org.apache.bcel.internal.generic.ReturnInstruction

#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>

#pragma push_macro("FRETURN")
#undef FRETURN

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

class FRETURN : public ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction {
	$class(FRETURN, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction)
public:
	FRETURN();
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

#pragma pop_macro("FRETURN")

#endif // _com_sun_org_apache_bcel_internal_generic_FRETURN_h_