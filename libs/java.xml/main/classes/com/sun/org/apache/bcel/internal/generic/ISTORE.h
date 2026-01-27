#ifndef _com_sun_org_apache_bcel_internal_generic_ISTORE_h_
#define _com_sun_org_apache_bcel_internal_generic_ISTORE_h_
//$ class com.sun.org.apache.bcel.internal.generic.ISTORE
//$ extends com.sun.org.apache.bcel.internal.generic.StoreInstruction

#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>

#pragma push_macro("ISTORE")
#undef ISTORE

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

class ISTORE : public ::com::sun::org::apache::bcel::internal::generic::StoreInstruction {
	$class(ISTORE, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::StoreInstruction)
public:
	ISTORE();
	void init$();
	void init$(int32_t n);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	using ::com::sun::org::apache::bcel::internal::generic::StoreInstruction::toString;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ISTORE")

#endif // _com_sun_org_apache_bcel_internal_generic_ISTORE_h_