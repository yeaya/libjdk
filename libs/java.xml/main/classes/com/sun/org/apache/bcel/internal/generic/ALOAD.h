#ifndef _com_sun_org_apache_bcel_internal_generic_ALOAD_h_
#define _com_sun_org_apache_bcel_internal_generic_ALOAD_h_
//$ class com.sun.org.apache.bcel.internal.generic.ALOAD
//$ extends com.sun.org.apache.bcel.internal.generic.LoadInstruction

#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>

#pragma push_macro("ALOAD")
#undef ALOAD

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

class ALOAD : public ::com::sun::org::apache::bcel::internal::generic::LoadInstruction {
	$class(ALOAD, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::LoadInstruction)
public:
	ALOAD();
	void init$();
	void init$(int32_t n);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	using ::com::sun::org::apache::bcel::internal::generic::LoadInstruction::toString;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALOAD")

#endif // _com_sun_org_apache_bcel_internal_generic_ALOAD_h_