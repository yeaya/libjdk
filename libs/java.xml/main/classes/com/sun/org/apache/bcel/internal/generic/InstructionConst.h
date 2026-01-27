#ifndef _com_sun_org_apache_bcel_internal_generic_InstructionConst_h_
#define _com_sun_org_apache_bcel_internal_generic_InstructionConst_h_
//$ class com.sun.org.apache.bcel.internal.generic.InstructionConst
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AALOAD")
#undef AALOAD
#pragma push_macro("AASTORE")
#undef AASTORE
#pragma push_macro("ACONST_NULL")
#undef ACONST_NULL
#pragma push_macro("ALOAD_0")
#undef ALOAD_0
#pragma push_macro("ALOAD_1")
#undef ALOAD_1
#pragma push_macro("ALOAD_2")
#undef ALOAD_2
#pragma push_macro("ARETURN")
#undef ARETURN
#pragma push_macro("ARRAYLENGTH")
#undef ARRAYLENGTH
#pragma push_macro("ASTORE_0")
#undef ASTORE_0
#pragma push_macro("ASTORE_1")
#undef ASTORE_1
#pragma push_macro("ASTORE_2")
#undef ASTORE_2
#pragma push_macro("ATHROW")
#undef ATHROW
#pragma push_macro("BALOAD")
#undef BALOAD
#pragma push_macro("BASTORE")
#undef BASTORE
#pragma push_macro("CALOAD")
#undef CALOAD
#pragma push_macro("CASTORE")
#undef CASTORE
#pragma push_macro("D2F")
#undef D2F
#pragma push_macro("D2I")
#undef D2I
#pragma push_macro("D2L")
#undef D2L
#pragma push_macro("DADD")
#undef DADD
#pragma push_macro("DALOAD")
#undef DALOAD
#pragma push_macro("DASTORE")
#undef DASTORE
#pragma push_macro("DCMPG")
#undef DCMPG
#pragma push_macro("DCMPL")
#undef DCMPL
#pragma push_macro("DCONST_0")
#undef DCONST_0
#pragma push_macro("DCONST_1")
#undef DCONST_1
#pragma push_macro("DDIV")
#undef DDIV
#pragma push_macro("DMUL")
#undef DMUL
#pragma push_macro("DNEG")
#undef DNEG
#pragma push_macro("DREM")
#undef DREM
#pragma push_macro("DRETURN")
#undef DRETURN
#pragma push_macro("DSUB")
#undef DSUB
#pragma push_macro("DUP")
#undef DUP
#pragma push_macro("DUP2")
#undef DUP2
#pragma push_macro("DUP2_X1")
#undef DUP2_X1
#pragma push_macro("DUP2_X2")
#undef DUP2_X2
#pragma push_macro("DUP_X1")
#undef DUP_X1
#pragma push_macro("DUP_X2")
#undef DUP_X2
#pragma push_macro("F2D")
#undef F2D
#pragma push_macro("F2I")
#undef F2I
#pragma push_macro("F2L")
#undef F2L
#pragma push_macro("FADD")
#undef FADD
#pragma push_macro("FALOAD")
#undef FALOAD
#pragma push_macro("FASTORE")
#undef FASTORE
#pragma push_macro("FCMPG")
#undef FCMPG
#pragma push_macro("FCMPL")
#undef FCMPL
#pragma push_macro("FCONST_0")
#undef FCONST_0
#pragma push_macro("FCONST_1")
#undef FCONST_1
#pragma push_macro("FCONST_2")
#undef FCONST_2
#pragma push_macro("FDIV")
#undef FDIV
#pragma push_macro("FMUL")
#undef FMUL
#pragma push_macro("FNEG")
#undef FNEG
#pragma push_macro("FREM")
#undef FREM
#pragma push_macro("FRETURN")
#undef FRETURN
#pragma push_macro("FSUB")
#undef FSUB
#pragma push_macro("I2B")
#undef I2B
#pragma push_macro("I2C")
#undef I2C
#pragma push_macro("I2D")
#undef I2D
#pragma push_macro("I2F")
#undef I2F
#pragma push_macro("I2L")
#undef I2L
#pragma push_macro("I2S")
#undef I2S
#pragma push_macro("IADD")
#undef IADD
#pragma push_macro("IALOAD")
#undef IALOAD
#pragma push_macro("IAND")
#undef IAND
#pragma push_macro("IASTORE")
#undef IASTORE
#pragma push_macro("ICONST_0")
#undef ICONST_0
#pragma push_macro("ICONST_1")
#undef ICONST_1
#pragma push_macro("ICONST_2")
#undef ICONST_2
#pragma push_macro("ICONST_3")
#undef ICONST_3
#pragma push_macro("ICONST_4")
#undef ICONST_4
#pragma push_macro("ICONST_5")
#undef ICONST_5
#pragma push_macro("ICONST_M1")
#undef ICONST_M1
#pragma push_macro("IDIV")
#undef IDIV
#pragma push_macro("ILOAD_0")
#undef ILOAD_0
#pragma push_macro("ILOAD_1")
#undef ILOAD_1
#pragma push_macro("ILOAD_2")
#undef ILOAD_2
#pragma push_macro("IMUL")
#undef IMUL
#pragma push_macro("INEG")
#undef INEG
#pragma push_macro("INSTRUCTIONS")
#undef INSTRUCTIONS
#pragma push_macro("IOR")
#undef IOR
#pragma push_macro("IREM")
#undef IREM
#pragma push_macro("IRETURN")
#undef IRETURN
#pragma push_macro("ISHL")
#undef ISHL
#pragma push_macro("ISHR")
#undef ISHR
#pragma push_macro("ISTORE_0")
#undef ISTORE_0
#pragma push_macro("ISTORE_1")
#undef ISTORE_1
#pragma push_macro("ISTORE_2")
#undef ISTORE_2
#pragma push_macro("ISUB")
#undef ISUB
#pragma push_macro("IUSHR")
#undef IUSHR
#pragma push_macro("IXOR")
#undef IXOR
#pragma push_macro("L2D")
#undef L2D
#pragma push_macro("L2F")
#undef L2F
#pragma push_macro("L2I")
#undef L2I
#pragma push_macro("LADD")
#undef LADD
#pragma push_macro("LALOAD")
#undef LALOAD
#pragma push_macro("LAND")
#undef LAND
#pragma push_macro("LASTORE")
#undef LASTORE
#pragma push_macro("LCMP")
#undef LCMP
#pragma push_macro("LCONST_0")
#undef LCONST_0
#pragma push_macro("LCONST_1")
#undef LCONST_1
#pragma push_macro("LDIV")
#undef LDIV
#pragma push_macro("LMUL")
#undef LMUL
#pragma push_macro("LNEG")
#undef LNEG
#pragma push_macro("LOR")
#undef LOR
#pragma push_macro("LREM")
#undef LREM
#pragma push_macro("LRETURN")
#undef LRETURN
#pragma push_macro("LSHL")
#undef LSHL
#pragma push_macro("LSHR")
#undef LSHR
#pragma push_macro("LSUB")
#undef LSUB
#pragma push_macro("LUSHR")
#undef LUSHR
#pragma push_macro("LXOR")
#undef LXOR
#pragma push_macro("MONITORENTER")
#undef MONITORENTER
#pragma push_macro("MONITOREXIT")
#undef MONITOREXIT
#pragma push_macro("NOP")
#undef NOP
#pragma push_macro("POP")
#undef POP
#pragma push_macro("POP2")
#undef POP2
#pragma push_macro("RETURN")
#undef RETURN
#pragma push_macro("SALOAD")
#undef SALOAD
#pragma push_macro("SASTORE")
#undef SASTORE
#pragma push_macro("SWAP")
#undef SWAP
#pragma push_macro("THIS")
#undef THIS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ArithmeticInstruction;
							class ArrayInstruction;
							class ConversionInstruction;
							class Instruction;
							class LocalVariableInstruction;
							class ReturnInstruction;
							class StackInstruction;
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

class InstructionConst : public ::java::lang::Object {
	$class(InstructionConst, 0, ::java::lang::Object)
public:
	InstructionConst();
	void init$();
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* getInstruction(int32_t index);
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* NOP;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* ACONST_NULL;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* ICONST_M1;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* ICONST_0;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* ICONST_1;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* ICONST_2;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* ICONST_3;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* ICONST_4;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* ICONST_5;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* LCONST_0;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* LCONST_1;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* FCONST_0;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* FCONST_1;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* FCONST_2;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* DCONST_0;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* DCONST_1;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* IALOAD;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* LALOAD;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* FALOAD;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* DALOAD;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* AALOAD;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* BALOAD;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* CALOAD;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* SALOAD;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* IASTORE;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* LASTORE;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* FASTORE;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* DASTORE;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* AASTORE;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* BASTORE;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* CASTORE;
	static ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction* SASTORE;
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* POP;
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* POP2;
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* DUP;
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* DUP_X1;
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* DUP_X2;
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* DUP2;
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* DUP2_X1;
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* DUP2_X2;
	static ::com::sun::org::apache::bcel::internal::generic::StackInstruction* SWAP;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* IADD;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LADD;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* FADD;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* DADD;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* ISUB;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LSUB;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* FSUB;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* DSUB;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* IMUL;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LMUL;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* FMUL;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* DMUL;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* IDIV;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LDIV;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* FDIV;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* DDIV;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* IREM;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LREM;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* FREM;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* DREM;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* INEG;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LNEG;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* FNEG;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* DNEG;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* ISHL;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LSHL;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* ISHR;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LSHR;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* IUSHR;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LUSHR;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* IAND;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LAND;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* IOR;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LOR;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* IXOR;
	static ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction* LXOR;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* I2L;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* I2F;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* I2D;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* L2I;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* L2F;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* L2D;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* F2I;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* F2L;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* F2D;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* D2I;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* D2L;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* D2F;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* I2B;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* I2C;
	static ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction* I2S;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* LCMP;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* FCMPL;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* FCMPG;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* DCMPL;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* DCMPG;
	static ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction* IRETURN;
	static ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction* LRETURN;
	static ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction* FRETURN;
	static ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction* DRETURN;
	static ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction* ARETURN;
	static ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction* RETURN;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* ARRAYLENGTH;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* ATHROW;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* MONITORENTER;
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* MONITOREXIT;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* THIS;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ALOAD_0;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ALOAD_1;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ALOAD_2;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ILOAD_0;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ILOAD_1;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ILOAD_2;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ASTORE_0;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ASTORE_1;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ASTORE_2;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ISTORE_0;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ISTORE_1;
	static ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction* ISTORE_2;
	static $Array<::com::sun::org::apache::bcel::internal::generic::Instruction>* INSTRUCTIONS;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("AALOAD")
#pragma pop_macro("AASTORE")
#pragma pop_macro("ACONST_NULL")
#pragma pop_macro("ALOAD_0")
#pragma pop_macro("ALOAD_1")
#pragma pop_macro("ALOAD_2")
#pragma pop_macro("ARETURN")
#pragma pop_macro("ARRAYLENGTH")
#pragma pop_macro("ASTORE_0")
#pragma pop_macro("ASTORE_1")
#pragma pop_macro("ASTORE_2")
#pragma pop_macro("ATHROW")
#pragma pop_macro("BALOAD")
#pragma pop_macro("BASTORE")
#pragma pop_macro("CALOAD")
#pragma pop_macro("CASTORE")
#pragma pop_macro("D2F")
#pragma pop_macro("D2I")
#pragma pop_macro("D2L")
#pragma pop_macro("DADD")
#pragma pop_macro("DALOAD")
#pragma pop_macro("DASTORE")
#pragma pop_macro("DCMPG")
#pragma pop_macro("DCMPL")
#pragma pop_macro("DCONST_0")
#pragma pop_macro("DCONST_1")
#pragma pop_macro("DDIV")
#pragma pop_macro("DMUL")
#pragma pop_macro("DNEG")
#pragma pop_macro("DREM")
#pragma pop_macro("DRETURN")
#pragma pop_macro("DSUB")
#pragma pop_macro("DUP")
#pragma pop_macro("DUP2")
#pragma pop_macro("DUP2_X1")
#pragma pop_macro("DUP2_X2")
#pragma pop_macro("DUP_X1")
#pragma pop_macro("DUP_X2")
#pragma pop_macro("F2D")
#pragma pop_macro("F2I")
#pragma pop_macro("F2L")
#pragma pop_macro("FADD")
#pragma pop_macro("FALOAD")
#pragma pop_macro("FASTORE")
#pragma pop_macro("FCMPG")
#pragma pop_macro("FCMPL")
#pragma pop_macro("FCONST_0")
#pragma pop_macro("FCONST_1")
#pragma pop_macro("FCONST_2")
#pragma pop_macro("FDIV")
#pragma pop_macro("FMUL")
#pragma pop_macro("FNEG")
#pragma pop_macro("FREM")
#pragma pop_macro("FRETURN")
#pragma pop_macro("FSUB")
#pragma pop_macro("I2B")
#pragma pop_macro("I2C")
#pragma pop_macro("I2D")
#pragma pop_macro("I2F")
#pragma pop_macro("I2L")
#pragma pop_macro("I2S")
#pragma pop_macro("IADD")
#pragma pop_macro("IALOAD")
#pragma pop_macro("IAND")
#pragma pop_macro("IASTORE")
#pragma pop_macro("ICONST_0")
#pragma pop_macro("ICONST_1")
#pragma pop_macro("ICONST_2")
#pragma pop_macro("ICONST_3")
#pragma pop_macro("ICONST_4")
#pragma pop_macro("ICONST_5")
#pragma pop_macro("ICONST_M1")
#pragma pop_macro("IDIV")
#pragma pop_macro("ILOAD_0")
#pragma pop_macro("ILOAD_1")
#pragma pop_macro("ILOAD_2")
#pragma pop_macro("IMUL")
#pragma pop_macro("INEG")
#pragma pop_macro("INSTRUCTIONS")
#pragma pop_macro("IOR")
#pragma pop_macro("IREM")
#pragma pop_macro("IRETURN")
#pragma pop_macro("ISHL")
#pragma pop_macro("ISHR")
#pragma pop_macro("ISTORE_0")
#pragma pop_macro("ISTORE_1")
#pragma pop_macro("ISTORE_2")
#pragma pop_macro("ISUB")
#pragma pop_macro("IUSHR")
#pragma pop_macro("IXOR")
#pragma pop_macro("L2D")
#pragma pop_macro("L2F")
#pragma pop_macro("L2I")
#pragma pop_macro("LADD")
#pragma pop_macro("LALOAD")
#pragma pop_macro("LAND")
#pragma pop_macro("LASTORE")
#pragma pop_macro("LCMP")
#pragma pop_macro("LCONST_0")
#pragma pop_macro("LCONST_1")
#pragma pop_macro("LDIV")
#pragma pop_macro("LMUL")
#pragma pop_macro("LNEG")
#pragma pop_macro("LOR")
#pragma pop_macro("LREM")
#pragma pop_macro("LRETURN")
#pragma pop_macro("LSHL")
#pragma pop_macro("LSHR")
#pragma pop_macro("LSUB")
#pragma pop_macro("LUSHR")
#pragma pop_macro("LXOR")
#pragma pop_macro("MONITORENTER")
#pragma pop_macro("MONITOREXIT")
#pragma pop_macro("NOP")
#pragma pop_macro("POP")
#pragma pop_macro("POP2")
#pragma pop_macro("RETURN")
#pragma pop_macro("SALOAD")
#pragma pop_macro("SASTORE")
#pragma pop_macro("SWAP")
#pragma pop_macro("THIS")

#endif // _com_sun_org_apache_bcel_internal_generic_InstructionConst_h_