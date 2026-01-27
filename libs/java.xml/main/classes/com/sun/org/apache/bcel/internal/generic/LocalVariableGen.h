#ifndef _com_sun_org_apache_bcel_internal_generic_LocalVariableGen_h_
#define _com_sun_org_apache_bcel_internal_generic_LocalVariableGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.LocalVariableGen
//$ extends com.sun.org.apache.bcel.internal.generic.InstructionTargeter
//$ implements com.sun.org.apache.bcel.internal.generic.NamedAndTyped,java.lang.Cloneable

#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>
#include <com/sun/org/apache/bcel/internal/generic/NamedAndTyped.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class LocalVariable;
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

class LocalVariableGen : public ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter, public ::com::sun::org::apache::bcel::internal::generic::NamedAndTyped, public ::java::lang::Cloneable {
	$class(LocalVariableGen, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter, ::com::sun::org::apache::bcel::internal::generic::NamedAndTyped, ::java::lang::Cloneable)
public:
	LocalVariableGen();
	virtual void finalize() override;
	void init$(int32_t index, $String* name, ::com::sun::org::apache::bcel::internal::generic::Type* type, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end);
	void init$(int32_t index, $String* name, ::com::sun::org::apache::bcel::internal::generic::Type* type, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end, int32_t origIndex);
	virtual $Object* clone() override;
	virtual bool containsTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih) override;
	virtual void dispose();
	virtual bool equals(Object$* o) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getEnd();
	virtual int32_t getIndex();
	virtual bool getLiveToEnd();
	virtual ::com::sun::org::apache::bcel::internal::classfile::LocalVariable* getLocalVariable(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	virtual $String* getName() override;
	virtual int32_t getOrigIndex();
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getStart();
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType() override;
	virtual int32_t hashCode() override;
	virtual void setEnd(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end);
	virtual void setIndex(int32_t index);
	virtual void setLiveToEnd(bool live_to_end);
	virtual void setName($String* name) override;
	virtual void setStart(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start);
	virtual void setType(::com::sun::org::apache::bcel::internal::generic::Type* type) override;
	virtual $String* toString() override;
	virtual void updateTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* old_ih, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* new_ih) override;
	int32_t index = 0;
	$String* name = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Type* type = nullptr;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start = nullptr;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end = nullptr;
	int32_t origIndex = 0;
	bool liveToEnd = false;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_LocalVariableGen_h_