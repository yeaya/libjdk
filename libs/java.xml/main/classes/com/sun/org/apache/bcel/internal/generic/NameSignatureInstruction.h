#ifndef _com_sun_org_apache_bcel_internal_generic_NameSignatureInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_NameSignatureInstruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.NameSignatureInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.CPInstruction

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantNameAndType;
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

class NameSignatureInstruction : public ::com::sun::org::apache::bcel::internal::generic::CPInstruction {
	$class(NameSignatureInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::CPInstruction)
public:
	NameSignatureInstruction();
	using ::com::sun::org::apache::bcel::internal::generic::CPInstruction::getName;
	void init$();
	void init$(int16_t opcode, int32_t index);
	virtual $String* getName(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual ::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType* getNameAndType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual $String* getSignature(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	using ::com::sun::org::apache::bcel::internal::generic::CPInstruction::toString;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_NameSignatureInstruction_h_