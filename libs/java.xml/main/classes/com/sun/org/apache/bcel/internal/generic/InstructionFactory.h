#ifndef _com_sun_org_apache_bcel_internal_generic_InstructionFactory_h_
#define _com_sun_org_apache_bcel_internal_generic_InstructionFactory_h_
//$ class com.sun.org.apache.bcel.internal.generic.InstructionFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ArithmeticInstruction;
							class ArrayInstruction;
							class BranchInstruction;
							class CHECKCAST;
							class ClassGen;
							class ConstantPoolGen;
							class FieldInstruction;
							class GETFIELD;
							class GETSTATIC;
							class INSTANCEOF;
							class Instruction;
							class InstructionFactory$MethodObject;
							class InstructionHandle;
							class InstructionList;
							class InvokeInstruction;
							class LocalVariableInstruction;
							class NEW;
							class ObjectType;
							class PUTFIELD;
							class PUTSTATIC;
							class ReferenceType;
							class ReturnInstruction;
							class StackInstruction;
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

class InstructionFactory : public ::java::lang::Object {
	$class(InstructionFactory, 0, ::java::lang::Object)
public:
	InstructionFactory();
	void init$(::com::sun::org::apache::bcel::internal::generic::ClassGen* cg, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	void init$(::com::sun::org::apache::bcel::internal::generic::ClassGen* cg);
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* createAppend(::com::sun::org::apache::bcel::internal::generic::Type* type);
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* createArrayLoad(::com::sun::org::apache::bcel::internal::generic::Type* type);
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* createArrayStore(::com::sun::org::apache::bcel::internal::generic::Type* type);
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* createBinaryDoubleOp(char16_t op);
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* createBinaryFloatOp(char16_t op);
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* createBinaryIntOp(char16_t first, $String* op);
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* createBinaryLongOp(char16_t first, $String* op);
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* createBinaryOperation($String* op, ::com::sun::org::apache::bcel::internal::generic::Type* type);
	static ::com::sun::org::apache::bcel::internal::generic::BranchInstruction* createBranchInstruction(int16_t opcode, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* createCast(::com::sun::org::apache::bcel::internal::generic::Type* src_type, ::com::sun::org::apache::bcel::internal::generic::Type* dest_type);
	virtual ::com::sun::org::apache::bcel::internal::generic::CHECKCAST* createCheckCast(::com::sun::org::apache::bcel::internal::generic::ReferenceType* t);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* createConstant(Object$* value);
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* createDup(int32_t size);
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* createDup_1(int32_t size);
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* createDup_2(int32_t size);
	virtual ::com::sun::org::apache::bcel::internal::generic::FieldInstruction* createFieldAccess($String* class_name, $String* name, ::com::sun::org::apache::bcel::internal::generic::Type* type, int16_t kind);
	virtual ::com::sun::org::apache::bcel::internal::generic::GETFIELD* createGetField($String* class_name, $String* name, ::com::sun::org::apache::bcel::internal::generic::Type* t);
	virtual ::com::sun::org::apache::bcel::internal::generic::GETSTATIC* createGetStatic($String* class_name, $String* name, ::com::sun::org::apache::bcel::internal::generic::Type* t);
	virtual ::com::sun::org::apache::bcel::internal::generic::INSTANCEOF* createInstanceOf(::com::sun::org::apache::bcel::internal::generic::ReferenceType* t);
	virtual ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction* createInvoke($String* class_name, $String* name, ::com::sun::org::apache::bcel::internal::generic::Type* ret_type, $Array<::com::sun::org::apache::bcel::internal::generic::Type>* arg_types, int16_t kind);
	virtual ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction* createInvoke($String* class_name, $String* name, ::com::sun::org::apache::bcel::internal::generic::Type* ret_type, $Array<::com::sun::org::apache::bcel::internal::generic::Type>* arg_types, int16_t kind, bool use_interface);
	::com::sun::org::apache::bcel::internal::generic::InvokeInstruction* createInvoke(::com::sun::org::apache::bcel::internal::generic::InstructionFactory$MethodObject* m, int16_t kind);
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* createLoad(::com::sun::org::apache::bcel::internal::generic::Type* type, int32_t index);
	virtual ::com::sun::org::apache::bcel::internal::generic::NEW* createNew(::com::sun::org::apache::bcel::internal::generic::ObjectType* t);
	virtual ::com::sun::org::apache::bcel::internal::generic::NEW* createNew($String* s);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* createNewArray(::com::sun::org::apache::bcel::internal::generic::Type* t, int16_t dim);
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* createNull(::com::sun::org::apache::bcel::internal::generic::Type* type);
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* createPop(int32_t size);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionList* createPrintln($String* s);
	virtual ::com::sun::org::apache::bcel::internal::generic::PUTFIELD* createPutField($String* class_name, $String* name, ::com::sun::org::apache::bcel::internal::generic::Type* t);
	virtual ::com::sun::org::apache::bcel::internal::generic::PUTSTATIC* createPutStatic($String* class_name, $String* name, ::com::sun::org::apache::bcel::internal::generic::Type* t);
	static ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction* createReturn(::com::sun::org::apache::bcel::internal::generic::Type* type);
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* createStore(::com::sun::org::apache::bcel::internal::generic::Type* type, int32_t index);
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* createThis();
	virtual ::com::sun::org::apache::bcel::internal::generic::ClassGen* getClassGen();
	virtual ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* getConstantPool();
	static bool isString(::com::sun::org::apache::bcel::internal::generic::Type* type);
	virtual void setClassGen(::com::sun::org::apache::bcel::internal::generic::ClassGen* c);
	virtual void setConstantPool(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* c);
	static $StringArray* short_names;
	::com::sun::org::apache::bcel::internal::generic::ClassGen* cg = nullptr;
	::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp = nullptr;
	static $Array<::com::sun::org::apache::bcel::internal::generic::InstructionFactory$MethodObject>* append_mos;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_InstructionFactory_h_