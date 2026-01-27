#ifndef _com_sun_org_apache_bcel_internal_generic_InstructionList_h_
#define _com_sun_org_apache_bcel_internal_generic_InstructionList_h_
//$ class com.sun.org.apache.bcel.internal.generic.InstructionList
//$ extends java.lang.Iterable

#include <java/lang/Array.h>
#include <java/lang/Iterable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class BranchHandle;
							class BranchInstruction;
							class CodeExceptionGen;
							class CompoundInstruction;
							class ConstantPoolGen;
							class Instruction;
							class InstructionHandle;
							class InstructionListObserver;
							class LocalVariableGen;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class InstructionList : public ::java::lang::Iterable {
	$class(InstructionList, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	InstructionList();
	void init$();
	void init$(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	void init$(::com::sun::org::apache::bcel::internal::generic::BranchInstruction* i);
	void init$(::com::sun::org::apache::bcel::internal::generic::CompoundInstruction* c);
	void init$($bytes* code);
	virtual void addObserver(::com::sun::org::apache::bcel::internal::generic::InstructionListObserver* o);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* append(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* append(::com::sun::org::apache::bcel::internal::generic::Instruction* i, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* append(::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	void append(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* append(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchHandle* append(::com::sun::org::apache::bcel::internal::generic::BranchInstruction* i);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* append(::com::sun::org::apache::bcel::internal::generic::Instruction* i, ::com::sun::org::apache::bcel::internal::generic::Instruction* j);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* append(::com::sun::org::apache::bcel::internal::generic::Instruction* i, ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction* c);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* append(::com::sun::org::apache::bcel::internal::generic::CompoundInstruction* c);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* append(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih, ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction* c);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* append(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih, ::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchHandle* append(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih, ::com::sun::org::apache::bcel::internal::generic::BranchInstruction* i);
	void clear();
	virtual bool contains(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* i);
	virtual bool contains(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionList* copy();
	virtual void delete$(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih);
	virtual void delete$(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	virtual void delete$(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* from, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* to);
	virtual void delete$(::com::sun::org::apache::bcel::internal::generic::Instruction* from, ::com::sun::org::apache::bcel::internal::generic::Instruction* to);
	virtual void dispose();
	static ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* findHandle($Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* ihs, $ints* pos, int32_t count, int32_t target);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* findHandle(int32_t pos);
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* findInstruction1(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* findInstruction2(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	virtual $bytes* getByteCode();
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getEnd();
	virtual $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* getInstructionHandles();
	virtual $ints* getInstructionPositions();
	virtual $Array<::com::sun::org::apache::bcel::internal::generic::Instruction>* getInstructions();
	virtual int32_t getLength();
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getStart();
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* insert(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* insert(::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	void insert(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* insert(::com::sun::org::apache::bcel::internal::generic::Instruction* i, ::com::sun::org::apache::bcel::internal::generic::InstructionList* il);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* insert(::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchHandle* insert(::com::sun::org::apache::bcel::internal::generic::BranchInstruction* i);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* insert(::com::sun::org::apache::bcel::internal::generic::Instruction* i, ::com::sun::org::apache::bcel::internal::generic::Instruction* j);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* insert(::com::sun::org::apache::bcel::internal::generic::Instruction* i, ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction* c);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* insert(::com::sun::org::apache::bcel::internal::generic::CompoundInstruction* c);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* insert(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih, ::com::sun::org::apache::bcel::internal::generic::Instruction* i);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* insert(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih, ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction* c);
	virtual ::com::sun::org::apache::bcel::internal::generic::BranchHandle* insert(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih, ::com::sun::org::apache::bcel::internal::generic::BranchInstruction* i);
	virtual bool isEmpty();
	virtual ::java::util::Iterator* iterator() override;
	virtual void move(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	virtual void move(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	virtual void redirectBranches(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* old_target, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* new_target);
	virtual void redirectExceptionHandlers($Array<::com::sun::org::apache::bcel::internal::generic::CodeExceptionGen>* exceptions, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* old_target, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* new_target);
	virtual void redirectLocalVariables($Array<::com::sun::org::apache::bcel::internal::generic::LocalVariableGen>* lg, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* old_target, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* new_target);
	void remove(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* prev, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* next);
	virtual void removeObserver(::com::sun::org::apache::bcel::internal::generic::InstructionListObserver* o);
	virtual void replaceConstantPool(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* old_cp, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* new_cp);
	virtual void setPositions();
	virtual void setPositions(bool check);
	virtual int32_t size();
	virtual $String* toString() override;
	virtual $String* toString(bool verbose);
	virtual void update();
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* start = nullptr;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* end = nullptr;
	int32_t length = 0;
	$ints* bytePositions = nullptr;
	::java::util::List* observers = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_InstructionList_h_