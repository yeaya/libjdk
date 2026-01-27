#ifndef _com_sun_org_apache_bcel_internal_generic_LineNumberGen_h_
#define _com_sun_org_apache_bcel_internal_generic_LineNumberGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.LineNumberGen
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
							class LineNumber;
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
							class InstructionHandle;
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

class LineNumberGen : public ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter, public ::java::lang::Cloneable {
	$class(LineNumberGen, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter, ::java::lang::Cloneable)
public:
	LineNumberGen();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih, int32_t src_line);
	virtual $Object* clone() override;
	virtual bool containsTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getInstruction();
	virtual ::com::sun::org::apache::bcel::internal::classfile::LineNumber* getLineNumber();
	virtual int32_t getSourceLine();
	virtual void setInstruction(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* instructionHandle);
	virtual void setSourceLine(int32_t src_line);
	virtual $String* toString() override;
	virtual void updateTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* old_ih, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* new_ih) override;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih = nullptr;
	int32_t srcLine = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_LineNumberGen_h_