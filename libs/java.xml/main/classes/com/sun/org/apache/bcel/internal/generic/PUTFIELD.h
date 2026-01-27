#ifndef _com_sun_org_apache_bcel_internal_generic_PUTFIELD_h_
#define _com_sun_org_apache_bcel_internal_generic_PUTFIELD_h_
//$ class com.sun.org.apache.bcel.internal.generic.PUTFIELD
//$ extends com.sun.org.apache.bcel.internal.generic.FieldInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.PopInstruction,com.sun.org.apache.bcel.internal.generic.ExceptionThrower

#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PopInstruction.h>
#include <java/lang/Array.h>

#pragma push_macro("PUTFIELD")
#undef PUTFIELD

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

class PUTFIELD : public ::com::sun::org::apache::bcel::internal::generic::FieldInstruction, public ::com::sun::org::apache::bcel::internal::generic::PopInstruction, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower {
	$class(PUTFIELD, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::FieldInstruction, ::com::sun::org::apache::bcel::internal::generic::PopInstruction, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower)
public:
	PUTFIELD();
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

#pragma pop_macro("PUTFIELD")

#endif // _com_sun_org_apache_bcel_internal_generic_PUTFIELD_h_