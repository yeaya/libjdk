#ifndef _com_sun_org_apache_bcel_internal_generic_ASTORE_h_
#define _com_sun_org_apache_bcel_internal_generic_ASTORE_h_
//$ class com.sun.org.apache.bcel.internal.generic.ASTORE
//$ extends com.sun.org.apache.bcel.internal.generic.StoreInstruction

#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>

#pragma push_macro("ASTORE")
#undef ASTORE

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

class ASTORE : public ::com::sun::org::apache::bcel::internal::generic::StoreInstruction {
	$class(ASTORE, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::StoreInstruction)
public:
	ASTORE();
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

#pragma pop_macro("ASTORE")

#endif // _com_sun_org_apache_bcel_internal_generic_ASTORE_h_