#ifndef _com_sun_org_apache_bcel_internal_generic_IDIV_h_
#define _com_sun_org_apache_bcel_internal_generic_IDIV_h_
//$ class com.sun.org.apache.bcel.internal.generic.IDIV
//$ extends com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.ExceptionThrower

#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <java/lang/Array.h>

#pragma push_macro("IDIV")
#undef IDIV

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

class IDIV : public ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower {
	$class(IDIV, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower)
public:
	IDIV();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual $ClassArray* getExceptions() override;
	using ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction::toString;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("IDIV")

#endif // _com_sun_org_apache_bcel_internal_generic_IDIV_h_