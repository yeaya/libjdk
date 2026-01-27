#ifndef _com_sun_org_apache_bcel_internal_generic_PUSH_h_
#define _com_sun_org_apache_bcel_internal_generic_PUSH_h_
//$ class com.sun.org.apache.bcel.internal.generic.PUSH
//$ extends com.sun.org.apache.bcel.internal.generic.CompoundInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.VariableLengthInstruction

#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/VariableLengthInstruction.h>

#pragma push_macro("PUSH")
#undef PUSH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class Instruction;
							class InstructionList;
							class ObjectType;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class Character;
		class Number;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class PUSH : public ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction, public ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction {
	$class(PUSH, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction, ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction)
public:
	PUSH();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, int32_t value);
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, bool value);
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, float value);
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, int64_t value);
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, double value);
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, $String* value);
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, ::com::sun::org::apache::bcel::internal::generic::ObjectType* value);
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, ::java::lang::Number* value);
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, ::java::lang::Character* value);
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, ::java::lang::Boolean* value);
	::com::sun::org::apache::bcel::internal::generic::Instruction* getInstruction();
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionList* getInstructionList() override;
	virtual $String* toString() override;
	::com::sun::org::apache::bcel::internal::generic::Instruction* instruction = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("PUSH")

#endif // _com_sun_org_apache_bcel_internal_generic_PUSH_h_