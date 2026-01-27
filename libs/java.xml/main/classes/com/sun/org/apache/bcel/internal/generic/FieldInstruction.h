#ifndef _com_sun_org_apache_bcel_internal_generic_FieldInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_FieldInstruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.FieldInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.FieldOrMethod

#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
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
							class ConstantPoolGen;
							class Type;
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

class FieldInstruction : public ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod {
	$class(FieldInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod)
public:
	FieldInstruction();
	using ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod::getName;
	void init$();
	void init$(int16_t opcode, int32_t index);
	virtual $String* getFieldName(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual int32_t getFieldSize(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getFieldType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	using ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod::toString;
	virtual $String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp) override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_FieldInstruction_h_