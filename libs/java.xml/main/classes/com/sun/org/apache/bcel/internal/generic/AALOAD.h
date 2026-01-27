#ifndef _com_sun_org_apache_bcel_internal_generic_AALOAD_h_
#define _com_sun_org_apache_bcel_internal_generic_AALOAD_h_
//$ class com.sun.org.apache.bcel.internal.generic.AALOAD
//$ extends com.sun.org.apache.bcel.internal.generic.ArrayInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.StackProducer

#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>

#pragma push_macro("AALOAD")
#undef AALOAD

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

class AALOAD : public ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction, public ::com::sun::org::apache::bcel::internal::generic::StackProducer {
	$class(AALOAD, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction, ::com::sun::org::apache::bcel::internal::generic::StackProducer)
public:
	AALOAD();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	using ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction::toString;
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

#pragma pop_macro("AALOAD")

#endif // _com_sun_org_apache_bcel_internal_generic_AALOAD_h_