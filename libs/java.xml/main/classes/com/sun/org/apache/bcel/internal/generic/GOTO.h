#ifndef _com_sun_org_apache_bcel_internal_generic_GOTO_h_
#define _com_sun_org_apache_bcel_internal_generic_GOTO_h_
//$ class com.sun.org.apache.bcel.internal.generic.GOTO
//$ extends com.sun.org.apache.bcel.internal.generic.GotoInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.VariableLengthInstruction

#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/VariableLengthInstruction.h>

#pragma push_macro("GOTO")
#undef GOTO

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

class GOTO : public ::com::sun::org::apache::bcel::internal::generic::GotoInstruction, public ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction {
	$class(GOTO, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::GotoInstruction, ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction)
public:
	GOTO();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	using ::com::sun::org::apache::bcel::internal::generic::GotoInstruction::toString;
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

#pragma pop_macro("GOTO")

#endif // _com_sun_org_apache_bcel_internal_generic_GOTO_h_