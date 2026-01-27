#ifndef _com_sun_org_apache_bcel_internal_generic_ConstantPushInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_ConstantPushInstruction_h_
//$ interface com.sun.org.apache.bcel.internal.generic.ConstantPushInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.PushInstruction,com.sun.org.apache.bcel.internal.generic.TypedInstruction

#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>

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

class ConstantPushInstruction : public ::com::sun::org::apache::bcel::internal::generic::PushInstruction, public ::com::sun::org::apache::bcel::internal::generic::TypedInstruction {
	$interface(ConstantPushInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::PushInstruction, ::com::sun::org::apache::bcel::internal::generic::TypedInstruction)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::Number* getValue() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_ConstantPushInstruction_h_