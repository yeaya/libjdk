#ifndef _com_sun_org_apache_bcel_internal_generic_CodeExceptionGen_h_
#define _com_sun_org_apache_bcel_internal_generic_CodeExceptionGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.CodeExceptionGen
//$ extends com.sun.org.apache.bcel.internal.generic.InstructionTargeter
//$ implements java.lang.Cloneable

#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class CodeException;
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
							class InstructionHandle;
							class ObjectType;
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

class CodeExceptionGen : public ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter, public ::java::lang::Cloneable {
	$class(CodeExceptionGen, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter, ::java::lang::Cloneable)
public:
	CodeExceptionGen();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* startPc, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* endPc, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* handlerPc, ::com::sun::org::apache::bcel::internal::generic::ObjectType* catchType);
	virtual $Object* clone() override;
	virtual bool containsTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih) override;
	::com::sun::org::apache::bcel::internal::generic::ObjectType* getCatchType();
	::com::sun::org::apache::bcel::internal::classfile::CodeException* getCodeException(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getEndPC();
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getHandlerPC();
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getStartPC();
	void setCatchType(::com::sun::org::apache::bcel::internal::generic::ObjectType* catchType);
	void setEndPC(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end_pc);
	void setHandlerPC(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* handler_pc);
	void setStartPC(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start_pc);
	virtual $String* toString() override;
	virtual void updateTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* old_ih, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* new_ih) override;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* startPc = nullptr;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* endPc = nullptr;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* handlerPc = nullptr;
	::com::sun::org::apache::bcel::internal::generic::ObjectType* catchType = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_CodeExceptionGen_h_