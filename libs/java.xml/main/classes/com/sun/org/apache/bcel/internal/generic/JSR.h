#ifndef _com_sun_org_apache_bcel_internal_generic_JSR_h_
#define _com_sun_org_apache_bcel_internal_generic_JSR_h_
//$ class com.sun.org.apache.bcel.internal.generic.JSR
//$ extends com.sun.org.apache.bcel.internal.generic.JsrInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.VariableLengthInstruction

#include <com/sun/org/apache/bcel/internal/generic/JsrInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/VariableLengthInstruction.h>

#pragma push_macro("JSR")
#undef JSR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
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

class JSR : public ::com::sun::org::apache::bcel::internal::generic::JsrInstruction, public ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction {
	$class(JSR, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::JsrInstruction, ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction)
public:
	JSR();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	using ::com::sun::org::apache::bcel::internal::generic::JsrInstruction::toString;
	virtual $String* toString() override;
	virtual int32_t updatePosition(int32_t offset, int32_t max_offset) override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("JSR")

#endif // _com_sun_org_apache_bcel_internal_generic_JSR_h_