#ifndef _com_sun_org_apache_bcel_internal_generic_InstructionHandle_h_
#define _com_sun_org_apache_bcel_internal_generic_InstructionHandle_h_
//$ class com.sun.org.apache.bcel.internal.generic.InstructionHandle
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Instruction;
							class InstructionTargeter;
							class Visitor;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class InstructionHandle : public ::java::lang::Object {
	$class(InstructionHandle, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InstructionHandle();
	void init$(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v);
	virtual void addAttribute(Object$* key, Object$* attr);
	virtual void addHandle();
	virtual void addTargeter(::com::sun::org::apache::bcel::internal::generic::InstructionTargeter* t);
	virtual void dispose();
	virtual $Object* getAttribute(Object$* key);
	virtual ::java::util::Collection* getAttributes();
	::com::sun::org::apache::bcel::internal::generic::Instruction* getInstruction();
	static ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getInstructionHandle(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getNext();
	virtual int32_t getPosition();
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getPrev();
	virtual $Array<::com::sun::org::apache::bcel::internal::generic::InstructionTargeter>* getTargeters();
	virtual bool hasTargeters();
	virtual void removeAllTargeters();
	virtual void removeAttribute(Object$* key);
	virtual void removeTargeter(::com::sun::org::apache::bcel::internal::generic::InstructionTargeter* t);
	virtual void setInstruction(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* setNext(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* next);
	virtual void setPosition(int32_t pos);
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* setPrev(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* prev);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* swapInstruction(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	virtual $String* toString(bool verbose);
	virtual $String* toString() override;
	virtual int32_t updatePosition(int32_t offset, int32_t max_offset);
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* next = nullptr;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* prev = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Instruction* instruction = nullptr;
	int32_t i_position = 0;
	::java::util::Set* targeters = nullptr;
	::java::util::Map* attributes = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_InstructionHandle_h_