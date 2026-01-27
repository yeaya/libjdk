#ifndef _com_sun_org_apache_bcel_internal_generic_StoreInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_StoreInstruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.StoreInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.LocalVariableInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.PopInstruction

#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PopInstruction.h>

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

class StoreInstruction : public ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction, public ::com::sun::org::apache::bcel::internal::generic::PopInstruction {
	$class(StoreInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction, ::com::sun::org::apache::bcel::internal::generic::PopInstruction)
public:
	StoreInstruction();
	virtual $Object* clone() override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int16_t canon_tag, int16_t c_tag);
	void init$(int16_t opcode, int16_t c_tag, int32_t n);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	using ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction::toString;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_StoreInstruction_h_