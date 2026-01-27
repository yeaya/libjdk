#ifndef _com_sun_org_apache_bcel_internal_generic_LDC_h_
#define _com_sun_org_apache_bcel_internal_generic_LDC_h_
//$ class com.sun.org.apache.bcel.internal.generic.LDC
//$ extends com.sun.org.apache.bcel.internal.generic.CPInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.PushInstruction,com.sun.org.apache.bcel.internal.generic.ExceptionThrower

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <java/lang/Array.h>

#pragma push_macro("LDC")
#undef LDC

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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {
							class ByteSequence;
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

class LDC : public ::com::sun::org::apache::bcel::internal::generic::CPInstruction, public ::com::sun::org::apache::bcel::internal::generic::PushInstruction, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower {
	$class(LDC, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::CPInstruction, ::com::sun::org::apache::bcel::internal::generic::PushInstruction, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower)
public:
	LDC();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t index);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	virtual $ClassArray* getExceptions() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual $Object* getValue(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual void setIndex(int32_t index) override;
	void setSize();
	using ::com::sun::org::apache::bcel::internal::generic::CPInstruction::toString;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LDC")

#endif // _com_sun_org_apache_bcel_internal_generic_LDC_h_