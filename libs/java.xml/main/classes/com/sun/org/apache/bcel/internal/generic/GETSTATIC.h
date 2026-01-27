#ifndef _com_sun_org_apache_bcel_internal_generic_GETSTATIC_h_
#define _com_sun_org_apache_bcel_internal_generic_GETSTATIC_h_
//$ class com.sun.org.apache.bcel.internal.generic.GETSTATIC
//$ extends com.sun.org.apache.bcel.internal.generic.FieldInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.PushInstruction,com.sun.org.apache.bcel.internal.generic.ExceptionThrower

#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <java/lang/Array.h>

#pragma push_macro("GETSTATIC")
#undef GETSTATIC

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

class GETSTATIC : public ::com::sun::org::apache::bcel::internal::generic::FieldInstruction, public ::com::sun::org::apache::bcel::internal::generic::PushInstruction, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower {
	$class(GETSTATIC, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::FieldInstruction, ::com::sun::org::apache::bcel::internal::generic::PushInstruction, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower)
public:
	GETSTATIC();
	using ::com::sun::org::apache::bcel::internal::generic::FieldInstruction::getName;
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t index);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual $ClassArray* getExceptions() override;
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
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

#pragma pop_macro("GETSTATIC")

#endif // _com_sun_org_apache_bcel_internal_generic_GETSTATIC_h_