#ifndef _com_sun_org_apache_bcel_internal_generic_PUTSTATIC_h_
#define _com_sun_org_apache_bcel_internal_generic_PUTSTATIC_h_
//$ class com.sun.org.apache.bcel.internal.generic.PUTSTATIC
//$ extends com.sun.org.apache.bcel.internal.generic.FieldInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.PopInstruction

#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PopInstruction.h>
#include <java/lang/Array.h>

#pragma push_macro("PUTSTATIC")
#undef PUTSTATIC

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
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

class PUTSTATIC : public ::com::sun::org::apache::bcel::internal::generic::FieldInstruction, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, public ::com::sun::org::apache::bcel::internal::generic::PopInstruction {
	$class(PUTSTATIC, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::FieldInstruction, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, ::com::sun::org::apache::bcel::internal::generic::PopInstruction)
public:
	PUTSTATIC();
	using ::com::sun::org::apache::bcel::internal::generic::FieldInstruction::getName;
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t index);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual $ClassArray* getExceptions() override;
	using ::com::sun::org::apache::bcel::internal::generic::FieldInstruction::toString;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("PUTSTATIC")

#endif // _com_sun_org_apache_bcel_internal_generic_PUTSTATIC_h_