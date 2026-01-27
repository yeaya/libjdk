#ifndef _com_sun_org_apache_bcel_internal_generic_INVOKESTATIC_h_
#define _com_sun_org_apache_bcel_internal_generic_INVOKESTATIC_h_
//$ class com.sun.org.apache.bcel.internal.generic.INVOKESTATIC
//$ extends com.sun.org.apache.bcel.internal.generic.InvokeInstruction

#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <java/lang/Array.h>

#pragma push_macro("INVOKESTATIC")
#undef INVOKESTATIC

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
namespace java {
	namespace io {
		class DataOutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class INVOKESTATIC : public ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction {
	$class(INVOKESTATIC, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction)
public:
	INVOKESTATIC();
	using ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction::getName;
	void init$();
	void init$(int32_t index);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	virtual $ClassArray* getExceptions() override;
	using ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction::toString;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INVOKESTATIC")

#endif // _com_sun_org_apache_bcel_internal_generic_INVOKESTATIC_h_