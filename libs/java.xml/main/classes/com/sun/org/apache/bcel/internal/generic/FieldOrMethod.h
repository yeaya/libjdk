#ifndef _com_sun_org_apache_bcel_internal_generic_FieldOrMethod_h_
#define _com_sun_org_apache_bcel_internal_generic_FieldOrMethod_h_
//$ class com.sun.org.apache.bcel.internal.generic.FieldOrMethod
//$ extends com.sun.org.apache.bcel.internal.generic.CPInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.LoadClass

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class ObjectType;
							class ReferenceType;
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

class FieldOrMethod : public ::com::sun::org::apache::bcel::internal::generic::CPInstruction, public ::com::sun::org::apache::bcel::internal::generic::LoadClass {
	$class(FieldOrMethod, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::CPInstruction, ::com::sun::org::apache::bcel::internal::generic::LoadClass)
public:
	FieldOrMethod();
	using ::com::sun::org::apache::bcel::internal::generic::CPInstruction::getName;
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int16_t opcode, int32_t index);
	virtual $String* getClassName(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual ::com::sun::org::apache::bcel::internal::generic::ObjectType* getClassType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual ::com::sun::org::apache::bcel::internal::generic::ObjectType* getLoadClassType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual $String* getName(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual ::com::sun::org::apache::bcel::internal::generic::ReferenceType* getReferenceType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual $String* getSignature(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
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

#endif // _com_sun_org_apache_bcel_internal_generic_FieldOrMethod_h_