#ifndef _com_sun_org_apache_bcel_internal_generic_DSTORE_h_
#define _com_sun_org_apache_bcel_internal_generic_DSTORE_h_
//$ class com.sun.org.apache.bcel.internal.generic.DSTORE
//$ extends com.sun.org.apache.bcel.internal.generic.StoreInstruction

#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>

#pragma push_macro("DSTORE")
#undef DSTORE

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

class DSTORE : public ::com::sun::org::apache::bcel::internal::generic::StoreInstruction {
	$class(DSTORE, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::StoreInstruction)
public:
	DSTORE();
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

#pragma pop_macro("DSTORE")

#endif // _com_sun_org_apache_bcel_internal_generic_DSTORE_h_