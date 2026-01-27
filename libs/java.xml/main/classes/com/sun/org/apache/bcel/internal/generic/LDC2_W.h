#ifndef _com_sun_org_apache_bcel_internal_generic_LDC2_W_h_
#define _com_sun_org_apache_bcel_internal_generic_LDC2_W_h_
//$ class com.sun.org.apache.bcel.internal.generic.LDC2_W
//$ extends com.sun.org.apache.bcel.internal.generic.CPInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.PushInstruction

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>

#pragma push_macro("LDC2_W")
#undef LDC2_W

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class Type;
							class Visitor;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
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

class LDC2_W : public ::com::sun::org::apache::bcel::internal::generic::CPInstruction, public ::com::sun::org::apache::bcel::internal::generic::PushInstruction {
	$class(LDC2_W, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::CPInstruction, ::com::sun::org::apache::bcel::internal::generic::PushInstruction)
public:
	LDC2_W();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t index);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual ::java::lang::Number* getValue(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	using ::com::sun::org::apache::bcel::internal::generic::CPInstruction::toString;
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LDC2_W")

#endif // _com_sun_org_apache_bcel_internal_generic_LDC2_W_h_