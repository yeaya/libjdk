#ifndef _com_sun_org_apache_bcel_internal_generic_DUP2_X1_h_
#define _com_sun_org_apache_bcel_internal_generic_DUP2_X1_h_
//$ class com.sun.org.apache.bcel.internal.generic.DUP2_X1
//$ extends com.sun.org.apache.bcel.internal.generic.StackInstruction

#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>

#pragma push_macro("DUP2_X1")
#undef DUP2_X1

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

class DUP2_X1 : public ::com::sun::org::apache::bcel::internal::generic::StackInstruction {
	$class(DUP2_X1, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::StackInstruction)
public:
	DUP2_X1();
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

#pragma pop_macro("DUP2_X1")

#endif // _com_sun_org_apache_bcel_internal_generic_DUP2_X1_h_