#include <com/sun/org/apache/bcel/internal/generic/InstructionConst.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/AALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/AASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ACONST_NULL.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ARETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/ARRAYLENGTH.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ATHROW.h>
#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/BALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/BASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/CALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/CASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/D2F.h>
#include <com/sun/org/apache/bcel/internal/generic/D2I.h>
#include <com/sun/org/apache/bcel/internal/generic/D2L.h>
#include <com/sun/org/apache/bcel/internal/generic/DADD.h>
#include <com/sun/org/apache/bcel/internal/generic/DALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/DASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/DCMPG.h>
#include <com/sun/org/apache/bcel/internal/generic/DCMPL.h>
#include <com/sun/org/apache/bcel/internal/generic/DCONST.h>
#include <com/sun/org/apache/bcel/internal/generic/DDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/DMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/DNEG.h>
#include <com/sun/org/apache/bcel/internal/generic/DREM.h>
#include <com/sun/org/apache/bcel/internal/generic/DRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/DSUB.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP2.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP2_X1.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP2_X2.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP_X1.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP_X2.h>
#include <com/sun/org/apache/bcel/internal/generic/F2D.h>
#include <com/sun/org/apache/bcel/internal/generic/F2I.h>
#include <com/sun/org/apache/bcel/internal/generic/F2L.h>
#include <com/sun/org/apache/bcel/internal/generic/FADD.h>
#include <com/sun/org/apache/bcel/internal/generic/FALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/FASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/FCMPG.h>
#include <com/sun/org/apache/bcel/internal/generic/FCMPL.h>
#include <com/sun/org/apache/bcel/internal/generic/FCONST.h>
#include <com/sun/org/apache/bcel/internal/generic/FDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/FMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/FNEG.h>
#include <com/sun/org/apache/bcel/internal/generic/FREM.h>
#include <com/sun/org/apache/bcel/internal/generic/FRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/FSUB.h>
#include <com/sun/org/apache/bcel/internal/generic/I2B.h>
#include <com/sun/org/apache/bcel/internal/generic/I2C.h>
#include <com/sun/org/apache/bcel/internal/generic/I2D.h>
#include <com/sun/org/apache/bcel/internal/generic/I2F.h>
#include <com/sun/org/apache/bcel/internal/generic/I2L.h>
#include <com/sun/org/apache/bcel/internal/generic/I2S.h>
#include <com/sun/org/apache/bcel/internal/generic/IADD.h>
#include <com/sun/org/apache/bcel/internal/generic/IALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/IAND.h>
#include <com/sun/org/apache/bcel/internal/generic/IASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ICONST.h>
#include <com/sun/org/apache/bcel/internal/generic/IDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/IMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/INEG.h>
#include <com/sun/org/apache/bcel/internal/generic/IOR.h>
#include <com/sun/org/apache/bcel/internal/generic/IREM.h>
#include <com/sun/org/apache/bcel/internal/generic/IRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/ISHL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISHR.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ISUB.h>
#include <com/sun/org/apache/bcel/internal/generic/IUSHR.h>
#include <com/sun/org/apache/bcel/internal/generic/IXOR.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/L2D.h>
#include <com/sun/org/apache/bcel/internal/generic/L2F.h>
#include <com/sun/org/apache/bcel/internal/generic/L2I.h>
#include <com/sun/org/apache/bcel/internal/generic/LADD.h>
#include <com/sun/org/apache/bcel/internal/generic/LALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/LAND.h>
#include <com/sun/org/apache/bcel/internal/generic/LASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/LCMP.h>
#include <com/sun/org/apache/bcel/internal/generic/LCONST.h>
#include <com/sun/org/apache/bcel/internal/generic/LDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/LMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/LNEG.h>
#include <com/sun/org/apache/bcel/internal/generic/LOR.h>
#include <com/sun/org/apache/bcel/internal/generic/LREM.h>
#include <com/sun/org/apache/bcel/internal/generic/LRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/LSHL.h>
#include <com/sun/org/apache/bcel/internal/generic/LSHR.h>
#include <com/sun/org/apache/bcel/internal/generic/LSUB.h>
#include <com/sun/org/apache/bcel/internal/generic/LUSHR.h>
#include <com/sun/org/apache/bcel/internal/generic/LXOR.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/MONITORENTER.h>
#include <com/sun/org/apache/bcel/internal/generic/MONITOREXIT.h>
#include <com/sun/org/apache/bcel/internal/generic/NOP.h>
#include <com/sun/org/apache/bcel/internal/generic/POP.h>
#include <com/sun/org/apache/bcel/internal/generic/POP2.h>
#include <com/sun/org/apache/bcel/internal/generic/RETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/SALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/SASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/SWAP.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <jcpp.h>

#undef AALOAD
#undef AASTORE
#undef ACONST_NULL
#undef ALOAD_0
#undef ALOAD_1
#undef ALOAD_2
#undef ARETURN
#undef ARRAYLENGTH
#undef ASTORE_0
#undef ASTORE_1
#undef ASTORE_2
#undef ATHROW
#undef BALOAD
#undef BASTORE
#undef CALOAD
#undef CASTORE
#undef D2F
#undef D2I
#undef D2L
#undef DADD
#undef DALOAD
#undef DASTORE
#undef DCMPG
#undef DCMPL
#undef DCONST_0
#undef DCONST_1
#undef DDIV
#undef DMUL
#undef DNEG
#undef DREM
#undef DRETURN
#undef DSUB
#undef DUP
#undef DUP2
#undef DUP2_X1
#undef DUP2_X2
#undef DUP_X1
#undef DUP_X2
#undef F2D
#undef F2I
#undef F2L
#undef FADD
#undef FALOAD
#undef FASTORE
#undef FCMPG
#undef FCMPL
#undef FCONST_0
#undef FCONST_1
#undef FCONST_2
#undef FDIV
#undef FMUL
#undef FNEG
#undef FREM
#undef FRETURN
#undef FSUB
#undef I2B
#undef I2C
#undef I2D
#undef I2F
#undef I2L
#undef I2S
#undef IADD
#undef IALOAD
#undef IAND
#undef IASTORE
#undef ICONST_0
#undef ICONST_1
#undef ICONST_2
#undef ICONST_3
#undef ICONST_4
#undef ICONST_5
#undef ICONST_M1
#undef IDIV
#undef ILOAD_0
#undef ILOAD_1
#undef ILOAD_2
#undef IMUL
#undef INEG
#undef INSTRUCTIONS
#undef IOR
#undef IREM
#undef IRETURN
#undef ISHL
#undef ISHR
#undef ISTORE_0
#undef ISTORE_1
#undef ISTORE_2
#undef ISUB
#undef IUSHR
#undef IXOR
#undef L2D
#undef L2F
#undef L2I
#undef LADD
#undef LALOAD
#undef LAND
#undef LASTORE
#undef LCMP
#undef LCONST_0
#undef LCONST_1
#undef LDIV
#undef LMUL
#undef LNEG
#undef LOR
#undef LREM
#undef LRETURN
#undef LSHL
#undef LSHR
#undef LSUB
#undef LUSHR
#undef LXOR
#undef MONITORENTER
#undef MONITOREXIT
#undef NOP
#undef POP
#undef POP2
#undef RETURN
#undef SALOAD
#undef SASTORE
#undef SWAP
#undef THIS

using $InstructionArray = $Array<::com::sun::org::apache::bcel::internal::generic::Instruction>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $AALOAD = ::com::sun::org::apache::bcel::internal::generic::AALOAD;
using $AASTORE = ::com::sun::org::apache::bcel::internal::generic::AASTORE;
using $ACONST_NULL = ::com::sun::org::apache::bcel::internal::generic::ACONST_NULL;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ARETURN = ::com::sun::org::apache::bcel::internal::generic::ARETURN;
using $ARRAYLENGTH = ::com::sun::org::apache::bcel::internal::generic::ARRAYLENGTH;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $ATHROW = ::com::sun::org::apache::bcel::internal::generic::ATHROW;
using $ArithmeticInstruction = ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction;
using $ArrayInstruction = ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction;
using $BALOAD = ::com::sun::org::apache::bcel::internal::generic::BALOAD;
using $BASTORE = ::com::sun::org::apache::bcel::internal::generic::BASTORE;
using $CALOAD = ::com::sun::org::apache::bcel::internal::generic::CALOAD;
using $CASTORE = ::com::sun::org::apache::bcel::internal::generic::CASTORE;
using $ConversionInstruction = ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction;
using $D2F = ::com::sun::org::apache::bcel::internal::generic::D2F;
using $D2I = ::com::sun::org::apache::bcel::internal::generic::D2I;
using $D2L = ::com::sun::org::apache::bcel::internal::generic::D2L;
using $DADD = ::com::sun::org::apache::bcel::internal::generic::DADD;
using $DALOAD = ::com::sun::org::apache::bcel::internal::generic::DALOAD;
using $DASTORE = ::com::sun::org::apache::bcel::internal::generic::DASTORE;
using $DCMPG = ::com::sun::org::apache::bcel::internal::generic::DCMPG;
using $DCMPL = ::com::sun::org::apache::bcel::internal::generic::DCMPL;
using $DCONST = ::com::sun::org::apache::bcel::internal::generic::DCONST;
using $DDIV = ::com::sun::org::apache::bcel::internal::generic::DDIV;
using $DMUL = ::com::sun::org::apache::bcel::internal::generic::DMUL;
using $DNEG = ::com::sun::org::apache::bcel::internal::generic::DNEG;
using $DREM = ::com::sun::org::apache::bcel::internal::generic::DREM;
using $DRETURN = ::com::sun::org::apache::bcel::internal::generic::DRETURN;
using $DSUB = ::com::sun::org::apache::bcel::internal::generic::DSUB;
using $DUP = ::com::sun::org::apache::bcel::internal::generic::DUP;
using $DUP2 = ::com::sun::org::apache::bcel::internal::generic::DUP2;
using $DUP2_X1 = ::com::sun::org::apache::bcel::internal::generic::DUP2_X1;
using $DUP2_X2 = ::com::sun::org::apache::bcel::internal::generic::DUP2_X2;
using $DUP_X1 = ::com::sun::org::apache::bcel::internal::generic::DUP_X1;
using $DUP_X2 = ::com::sun::org::apache::bcel::internal::generic::DUP_X2;
using $F2D = ::com::sun::org::apache::bcel::internal::generic::F2D;
using $F2I = ::com::sun::org::apache::bcel::internal::generic::F2I;
using $F2L = ::com::sun::org::apache::bcel::internal::generic::F2L;
using $FADD = ::com::sun::org::apache::bcel::internal::generic::FADD;
using $FALOAD = ::com::sun::org::apache::bcel::internal::generic::FALOAD;
using $FASTORE = ::com::sun::org::apache::bcel::internal::generic::FASTORE;
using $FCMPG = ::com::sun::org::apache::bcel::internal::generic::FCMPG;
using $FCMPL = ::com::sun::org::apache::bcel::internal::generic::FCMPL;
using $FCONST = ::com::sun::org::apache::bcel::internal::generic::FCONST;
using $FDIV = ::com::sun::org::apache::bcel::internal::generic::FDIV;
using $FMUL = ::com::sun::org::apache::bcel::internal::generic::FMUL;
using $FNEG = ::com::sun::org::apache::bcel::internal::generic::FNEG;
using $FREM = ::com::sun::org::apache::bcel::internal::generic::FREM;
using $FRETURN = ::com::sun::org::apache::bcel::internal::generic::FRETURN;
using $FSUB = ::com::sun::org::apache::bcel::internal::generic::FSUB;
using $I2B = ::com::sun::org::apache::bcel::internal::generic::I2B;
using $I2C = ::com::sun::org::apache::bcel::internal::generic::I2C;
using $I2D = ::com::sun::org::apache::bcel::internal::generic::I2D;
using $I2F = ::com::sun::org::apache::bcel::internal::generic::I2F;
using $I2L = ::com::sun::org::apache::bcel::internal::generic::I2L;
using $I2S = ::com::sun::org::apache::bcel::internal::generic::I2S;
using $IADD = ::com::sun::org::apache::bcel::internal::generic::IADD;
using $IALOAD = ::com::sun::org::apache::bcel::internal::generic::IALOAD;
using $IAND = ::com::sun::org::apache::bcel::internal::generic::IAND;
using $IASTORE = ::com::sun::org::apache::bcel::internal::generic::IASTORE;
using $ICONST = ::com::sun::org::apache::bcel::internal::generic::ICONST;
using $IDIV = ::com::sun::org::apache::bcel::internal::generic::IDIV;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $IMUL = ::com::sun::org::apache::bcel::internal::generic::IMUL;
using $INEG = ::com::sun::org::apache::bcel::internal::generic::INEG;
using $IOR = ::com::sun::org::apache::bcel::internal::generic::IOR;
using $IREM = ::com::sun::org::apache::bcel::internal::generic::IREM;
using $IRETURN = ::com::sun::org::apache::bcel::internal::generic::IRETURN;
using $ISHL = ::com::sun::org::apache::bcel::internal::generic::ISHL;
using $ISHR = ::com::sun::org::apache::bcel::internal::generic::ISHR;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $ISUB = ::com::sun::org::apache::bcel::internal::generic::ISUB;
using $IUSHR = ::com::sun::org::apache::bcel::internal::generic::IUSHR;
using $IXOR = ::com::sun::org::apache::bcel::internal::generic::IXOR;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $L2D = ::com::sun::org::apache::bcel::internal::generic::L2D;
using $L2F = ::com::sun::org::apache::bcel::internal::generic::L2F;
using $L2I = ::com::sun::org::apache::bcel::internal::generic::L2I;
using $LADD = ::com::sun::org::apache::bcel::internal::generic::LADD;
using $LALOAD = ::com::sun::org::apache::bcel::internal::generic::LALOAD;
using $LAND = ::com::sun::org::apache::bcel::internal::generic::LAND;
using $LASTORE = ::com::sun::org::apache::bcel::internal::generic::LASTORE;
using $LCMP = ::com::sun::org::apache::bcel::internal::generic::LCMP;
using $LCONST = ::com::sun::org::apache::bcel::internal::generic::LCONST;
using $LDIV = ::com::sun::org::apache::bcel::internal::generic::LDIV;
using $LMUL = ::com::sun::org::apache::bcel::internal::generic::LMUL;
using $LNEG = ::com::sun::org::apache::bcel::internal::generic::LNEG;
using $LOR = ::com::sun::org::apache::bcel::internal::generic::LOR;
using $LREM = ::com::sun::org::apache::bcel::internal::generic::LREM;
using $LRETURN = ::com::sun::org::apache::bcel::internal::generic::LRETURN;
using $LSHL = ::com::sun::org::apache::bcel::internal::generic::LSHL;
using $LSHR = ::com::sun::org::apache::bcel::internal::generic::LSHR;
using $LSUB = ::com::sun::org::apache::bcel::internal::generic::LSUB;
using $LUSHR = ::com::sun::org::apache::bcel::internal::generic::LUSHR;
using $LXOR = ::com::sun::org::apache::bcel::internal::generic::LXOR;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $MONITORENTER = ::com::sun::org::apache::bcel::internal::generic::MONITORENTER;
using $MONITOREXIT = ::com::sun::org::apache::bcel::internal::generic::MONITOREXIT;
using $NOP = ::com::sun::org::apache::bcel::internal::generic::NOP;
using $POP = ::com::sun::org::apache::bcel::internal::generic::POP;
using $POP2 = ::com::sun::org::apache::bcel::internal::generic::POP2;
using $RETURN = ::com::sun::org::apache::bcel::internal::generic::RETURN;
using $ReturnInstruction = ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction;
using $SALOAD = ::com::sun::org::apache::bcel::internal::generic::SALOAD;
using $SASTORE = ::com::sun::org::apache::bcel::internal::generic::SASTORE;
using $SWAP = ::com::sun::org::apache::bcel::internal::generic::SWAP;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _InstructionConst_FieldInfo_[] = {
	{"NOP", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, NOP)},
	{"ACONST_NULL", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ACONST_NULL)},
	{"ICONST_M1", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ICONST_M1)},
	{"ICONST_0", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ICONST_0)},
	{"ICONST_1", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ICONST_1)},
	{"ICONST_2", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ICONST_2)},
	{"ICONST_3", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ICONST_3)},
	{"ICONST_4", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ICONST_4)},
	{"ICONST_5", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ICONST_5)},
	{"LCONST_0", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LCONST_0)},
	{"LCONST_1", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LCONST_1)},
	{"FCONST_0", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FCONST_0)},
	{"FCONST_1", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FCONST_1)},
	{"FCONST_2", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FCONST_2)},
	{"DCONST_0", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DCONST_0)},
	{"DCONST_1", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DCONST_1)},
	{"IALOAD", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, IALOAD)},
	{"LALOAD", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LALOAD)},
	{"FALOAD", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FALOAD)},
	{"DALOAD", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DALOAD)},
	{"AALOAD", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, AALOAD)},
	{"BALOAD", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, BALOAD)},
	{"CALOAD", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, CALOAD)},
	{"SALOAD", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, SALOAD)},
	{"IASTORE", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, IASTORE)},
	{"LASTORE", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LASTORE)},
	{"FASTORE", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FASTORE)},
	{"DASTORE", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DASTORE)},
	{"AASTORE", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, AASTORE)},
	{"BASTORE", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, BASTORE)},
	{"CASTORE", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, CASTORE)},
	{"SASTORE", "Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, SASTORE)},
	{"POP", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, POP)},
	{"POP2", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, POP2)},
	{"DUP", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DUP)},
	{"DUP_X1", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DUP_X1)},
	{"DUP_X2", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DUP_X2)},
	{"DUP2", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DUP2)},
	{"DUP2_X1", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DUP2_X1)},
	{"DUP2_X2", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DUP2_X2)},
	{"SWAP", "Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, SWAP)},
	{"IADD", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, IADD)},
	{"LADD", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LADD)},
	{"FADD", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FADD)},
	{"DADD", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DADD)},
	{"ISUB", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ISUB)},
	{"LSUB", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LSUB)},
	{"FSUB", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FSUB)},
	{"DSUB", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DSUB)},
	{"IMUL", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, IMUL)},
	{"LMUL", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LMUL)},
	{"FMUL", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FMUL)},
	{"DMUL", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DMUL)},
	{"IDIV", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, IDIV)},
	{"LDIV", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LDIV)},
	{"FDIV", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FDIV)},
	{"DDIV", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DDIV)},
	{"IREM", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, IREM)},
	{"LREM", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LREM)},
	{"FREM", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FREM)},
	{"DREM", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DREM)},
	{"INEG", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, INEG)},
	{"LNEG", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LNEG)},
	{"FNEG", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FNEG)},
	{"DNEG", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DNEG)},
	{"ISHL", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ISHL)},
	{"LSHL", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LSHL)},
	{"ISHR", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ISHR)},
	{"LSHR", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LSHR)},
	{"IUSHR", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, IUSHR)},
	{"LUSHR", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LUSHR)},
	{"IAND", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, IAND)},
	{"LAND", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LAND)},
	{"IOR", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, IOR)},
	{"LOR", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LOR)},
	{"IXOR", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, IXOR)},
	{"LXOR", "Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LXOR)},
	{"I2L", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, I2L)},
	{"I2F", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, I2F)},
	{"I2D", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, I2D)},
	{"L2I", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, L2I)},
	{"L2F", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, L2F)},
	{"L2D", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, L2D)},
	{"F2I", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, F2I)},
	{"F2L", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, F2L)},
	{"F2D", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, F2D)},
	{"D2I", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, D2I)},
	{"D2L", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, D2L)},
	{"D2F", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, D2F)},
	{"I2B", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, I2B)},
	{"I2C", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, I2C)},
	{"I2S", "Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, I2S)},
	{"LCMP", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LCMP)},
	{"FCMPL", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FCMPL)},
	{"FCMPG", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FCMPG)},
	{"DCMPL", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DCMPL)},
	{"DCMPG", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DCMPG)},
	{"IRETURN", "Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, IRETURN)},
	{"LRETURN", "Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, LRETURN)},
	{"FRETURN", "Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, FRETURN)},
	{"DRETURN", "Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, DRETURN)},
	{"ARETURN", "Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ARETURN)},
	{"RETURN", "Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, RETURN)},
	{"ARRAYLENGTH", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ARRAYLENGTH)},
	{"ATHROW", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ATHROW)},
	{"MONITORENTER", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, MONITORENTER)},
	{"MONITOREXIT", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, MONITOREXIT)},
	{"THIS", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, THIS)},
	{"ALOAD_0", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ALOAD_0)},
	{"ALOAD_1", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ALOAD_1)},
	{"ALOAD_2", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ALOAD_2)},
	{"ILOAD_0", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ILOAD_0)},
	{"ILOAD_1", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ILOAD_1)},
	{"ILOAD_2", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ILOAD_2)},
	{"ASTORE_0", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ASTORE_0)},
	{"ASTORE_1", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ASTORE_1)},
	{"ASTORE_2", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ASTORE_2)},
	{"ISTORE_0", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ISTORE_0)},
	{"ISTORE_1", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ISTORE_1)},
	{"ISTORE_2", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionConst, ISTORE_2)},
	{"INSTRUCTIONS", "[Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InstructionConst, INSTRUCTIONS)},
	{}
};

$MethodInfo _InstructionConst_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(InstructionConst, init$, void)},
	{"getInstruction", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionConst, getInstruction, $Instruction*, int32_t)},
	{}
};

$ClassInfo _InstructionConst_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.InstructionConst",
	"java.lang.Object",
	nullptr,
	_InstructionConst_FieldInfo_,
	_InstructionConst_MethodInfo_
};

$Object* allocate$InstructionConst($Class* clazz) {
	return $of($alloc(InstructionConst));
}

$Instruction* InstructionConst::NOP = nullptr;
$Instruction* InstructionConst::ACONST_NULL = nullptr;
$Instruction* InstructionConst::ICONST_M1 = nullptr;
$Instruction* InstructionConst::ICONST_0 = nullptr;
$Instruction* InstructionConst::ICONST_1 = nullptr;
$Instruction* InstructionConst::ICONST_2 = nullptr;
$Instruction* InstructionConst::ICONST_3 = nullptr;
$Instruction* InstructionConst::ICONST_4 = nullptr;
$Instruction* InstructionConst::ICONST_5 = nullptr;
$Instruction* InstructionConst::LCONST_0 = nullptr;
$Instruction* InstructionConst::LCONST_1 = nullptr;
$Instruction* InstructionConst::FCONST_0 = nullptr;
$Instruction* InstructionConst::FCONST_1 = nullptr;
$Instruction* InstructionConst::FCONST_2 = nullptr;
$Instruction* InstructionConst::DCONST_0 = nullptr;
$Instruction* InstructionConst::DCONST_1 = nullptr;
$ArrayInstruction* InstructionConst::IALOAD = nullptr;
$ArrayInstruction* InstructionConst::LALOAD = nullptr;
$ArrayInstruction* InstructionConst::FALOAD = nullptr;
$ArrayInstruction* InstructionConst::DALOAD = nullptr;
$ArrayInstruction* InstructionConst::AALOAD = nullptr;
$ArrayInstruction* InstructionConst::BALOAD = nullptr;
$ArrayInstruction* InstructionConst::CALOAD = nullptr;
$ArrayInstruction* InstructionConst::SALOAD = nullptr;
$ArrayInstruction* InstructionConst::IASTORE = nullptr;
$ArrayInstruction* InstructionConst::LASTORE = nullptr;
$ArrayInstruction* InstructionConst::FASTORE = nullptr;
$ArrayInstruction* InstructionConst::DASTORE = nullptr;
$ArrayInstruction* InstructionConst::AASTORE = nullptr;
$ArrayInstruction* InstructionConst::BASTORE = nullptr;
$ArrayInstruction* InstructionConst::CASTORE = nullptr;
$ArrayInstruction* InstructionConst::SASTORE = nullptr;
$StackInstruction* InstructionConst::POP = nullptr;
$StackInstruction* InstructionConst::POP2 = nullptr;
$StackInstruction* InstructionConst::DUP = nullptr;
$StackInstruction* InstructionConst::DUP_X1 = nullptr;
$StackInstruction* InstructionConst::DUP_X2 = nullptr;
$StackInstruction* InstructionConst::DUP2 = nullptr;
$StackInstruction* InstructionConst::DUP2_X1 = nullptr;
$StackInstruction* InstructionConst::DUP2_X2 = nullptr;
$StackInstruction* InstructionConst::SWAP = nullptr;
$ArithmeticInstruction* InstructionConst::IADD = nullptr;
$ArithmeticInstruction* InstructionConst::LADD = nullptr;
$ArithmeticInstruction* InstructionConst::FADD = nullptr;
$ArithmeticInstruction* InstructionConst::DADD = nullptr;
$ArithmeticInstruction* InstructionConst::ISUB = nullptr;
$ArithmeticInstruction* InstructionConst::LSUB = nullptr;
$ArithmeticInstruction* InstructionConst::FSUB = nullptr;
$ArithmeticInstruction* InstructionConst::DSUB = nullptr;
$ArithmeticInstruction* InstructionConst::IMUL = nullptr;
$ArithmeticInstruction* InstructionConst::LMUL = nullptr;
$ArithmeticInstruction* InstructionConst::FMUL = nullptr;
$ArithmeticInstruction* InstructionConst::DMUL = nullptr;
$ArithmeticInstruction* InstructionConst::IDIV = nullptr;
$ArithmeticInstruction* InstructionConst::LDIV = nullptr;
$ArithmeticInstruction* InstructionConst::FDIV = nullptr;
$ArithmeticInstruction* InstructionConst::DDIV = nullptr;
$ArithmeticInstruction* InstructionConst::IREM = nullptr;
$ArithmeticInstruction* InstructionConst::LREM = nullptr;
$ArithmeticInstruction* InstructionConst::FREM = nullptr;
$ArithmeticInstruction* InstructionConst::DREM = nullptr;
$ArithmeticInstruction* InstructionConst::INEG = nullptr;
$ArithmeticInstruction* InstructionConst::LNEG = nullptr;
$ArithmeticInstruction* InstructionConst::FNEG = nullptr;
$ArithmeticInstruction* InstructionConst::DNEG = nullptr;
$ArithmeticInstruction* InstructionConst::ISHL = nullptr;
$ArithmeticInstruction* InstructionConst::LSHL = nullptr;
$ArithmeticInstruction* InstructionConst::ISHR = nullptr;
$ArithmeticInstruction* InstructionConst::LSHR = nullptr;
$ArithmeticInstruction* InstructionConst::IUSHR = nullptr;
$ArithmeticInstruction* InstructionConst::LUSHR = nullptr;
$ArithmeticInstruction* InstructionConst::IAND = nullptr;
$ArithmeticInstruction* InstructionConst::LAND = nullptr;
$ArithmeticInstruction* InstructionConst::IOR = nullptr;
$ArithmeticInstruction* InstructionConst::LOR = nullptr;
$ArithmeticInstruction* InstructionConst::IXOR = nullptr;
$ArithmeticInstruction* InstructionConst::LXOR = nullptr;
$ConversionInstruction* InstructionConst::I2L = nullptr;
$ConversionInstruction* InstructionConst::I2F = nullptr;
$ConversionInstruction* InstructionConst::I2D = nullptr;
$ConversionInstruction* InstructionConst::L2I = nullptr;
$ConversionInstruction* InstructionConst::L2F = nullptr;
$ConversionInstruction* InstructionConst::L2D = nullptr;
$ConversionInstruction* InstructionConst::F2I = nullptr;
$ConversionInstruction* InstructionConst::F2L = nullptr;
$ConversionInstruction* InstructionConst::F2D = nullptr;
$ConversionInstruction* InstructionConst::D2I = nullptr;
$ConversionInstruction* InstructionConst::D2L = nullptr;
$ConversionInstruction* InstructionConst::D2F = nullptr;
$ConversionInstruction* InstructionConst::I2B = nullptr;
$ConversionInstruction* InstructionConst::I2C = nullptr;
$ConversionInstruction* InstructionConst::I2S = nullptr;
$Instruction* InstructionConst::LCMP = nullptr;
$Instruction* InstructionConst::FCMPL = nullptr;
$Instruction* InstructionConst::FCMPG = nullptr;
$Instruction* InstructionConst::DCMPL = nullptr;
$Instruction* InstructionConst::DCMPG = nullptr;
$ReturnInstruction* InstructionConst::IRETURN = nullptr;
$ReturnInstruction* InstructionConst::LRETURN = nullptr;
$ReturnInstruction* InstructionConst::FRETURN = nullptr;
$ReturnInstruction* InstructionConst::DRETURN = nullptr;
$ReturnInstruction* InstructionConst::ARETURN = nullptr;
$ReturnInstruction* InstructionConst::RETURN = nullptr;
$Instruction* InstructionConst::ARRAYLENGTH = nullptr;
$Instruction* InstructionConst::ATHROW = nullptr;
$Instruction* InstructionConst::MONITORENTER = nullptr;
$Instruction* InstructionConst::MONITOREXIT = nullptr;
$LocalVariableInstruction* InstructionConst::THIS = nullptr;
$LocalVariableInstruction* InstructionConst::ALOAD_0 = nullptr;
$LocalVariableInstruction* InstructionConst::ALOAD_1 = nullptr;
$LocalVariableInstruction* InstructionConst::ALOAD_2 = nullptr;
$LocalVariableInstruction* InstructionConst::ILOAD_0 = nullptr;
$LocalVariableInstruction* InstructionConst::ILOAD_1 = nullptr;
$LocalVariableInstruction* InstructionConst::ILOAD_2 = nullptr;
$LocalVariableInstruction* InstructionConst::ASTORE_0 = nullptr;
$LocalVariableInstruction* InstructionConst::ASTORE_1 = nullptr;
$LocalVariableInstruction* InstructionConst::ASTORE_2 = nullptr;
$LocalVariableInstruction* InstructionConst::ISTORE_0 = nullptr;
$LocalVariableInstruction* InstructionConst::ISTORE_1 = nullptr;
$LocalVariableInstruction* InstructionConst::ISTORE_2 = nullptr;
$InstructionArray* InstructionConst::INSTRUCTIONS = nullptr;

void InstructionConst::init$() {
}

$Instruction* InstructionConst::getInstruction(int32_t index) {
	$init(InstructionConst);
	return $nc(InstructionConst::INSTRUCTIONS)->get(index);
}

void clinit$InstructionConst($Class* class$) {
	$assignStatic(InstructionConst::NOP, $new($NOP));
	$assignStatic(InstructionConst::ACONST_NULL, $new($ACONST_NULL));
	$assignStatic(InstructionConst::ICONST_M1, $new($ICONST, -1));
	$assignStatic(InstructionConst::ICONST_0, $new($ICONST, 0));
	$assignStatic(InstructionConst::ICONST_1, $new($ICONST, 1));
	$assignStatic(InstructionConst::ICONST_2, $new($ICONST, 2));
	$assignStatic(InstructionConst::ICONST_3, $new($ICONST, 3));
	$assignStatic(InstructionConst::ICONST_4, $new($ICONST, 4));
	$assignStatic(InstructionConst::ICONST_5, $new($ICONST, 5));
	$assignStatic(InstructionConst::LCONST_0, $new($LCONST, 0));
	$assignStatic(InstructionConst::LCONST_1, $new($LCONST, 1));
	$assignStatic(InstructionConst::FCONST_0, $new($FCONST, (float)0));
	$assignStatic(InstructionConst::FCONST_1, $new($FCONST, (float)1));
	$assignStatic(InstructionConst::FCONST_2, $new($FCONST, (float)2));
	$assignStatic(InstructionConst::DCONST_0, $new($DCONST, (double)0));
	$assignStatic(InstructionConst::DCONST_1, $new($DCONST, (double)1));
	$assignStatic(InstructionConst::IALOAD, $new($IALOAD));
	$assignStatic(InstructionConst::LALOAD, $new($LALOAD));
	$assignStatic(InstructionConst::FALOAD, $new($FALOAD));
	$assignStatic(InstructionConst::DALOAD, $new($DALOAD));
	$assignStatic(InstructionConst::AALOAD, $new($AALOAD));
	$assignStatic(InstructionConst::BALOAD, $new($BALOAD));
	$assignStatic(InstructionConst::CALOAD, $new($CALOAD));
	$assignStatic(InstructionConst::SALOAD, $new($SALOAD));
	$assignStatic(InstructionConst::IASTORE, $new($IASTORE));
	$assignStatic(InstructionConst::LASTORE, $new($LASTORE));
	$assignStatic(InstructionConst::FASTORE, $new($FASTORE));
	$assignStatic(InstructionConst::DASTORE, $new($DASTORE));
	$assignStatic(InstructionConst::AASTORE, $new($AASTORE));
	$assignStatic(InstructionConst::BASTORE, $new($BASTORE));
	$assignStatic(InstructionConst::CASTORE, $new($CASTORE));
	$assignStatic(InstructionConst::SASTORE, $new($SASTORE));
	$assignStatic(InstructionConst::POP, $new($POP));
	$assignStatic(InstructionConst::POP2, $new($POP2));
	$assignStatic(InstructionConst::DUP, $new($DUP));
	$assignStatic(InstructionConst::DUP_X1, $new($DUP_X1));
	$assignStatic(InstructionConst::DUP_X2, $new($DUP_X2));
	$assignStatic(InstructionConst::DUP2, $new($DUP2));
	$assignStatic(InstructionConst::DUP2_X1, $new($DUP2_X1));
	$assignStatic(InstructionConst::DUP2_X2, $new($DUP2_X2));
	$assignStatic(InstructionConst::SWAP, $new($SWAP));
	$assignStatic(InstructionConst::IADD, $new($IADD));
	$assignStatic(InstructionConst::LADD, $new($LADD));
	$assignStatic(InstructionConst::FADD, $new($FADD));
	$assignStatic(InstructionConst::DADD, $new($DADD));
	$assignStatic(InstructionConst::ISUB, $new($ISUB));
	$assignStatic(InstructionConst::LSUB, $new($LSUB));
	$assignStatic(InstructionConst::FSUB, $new($FSUB));
	$assignStatic(InstructionConst::DSUB, $new($DSUB));
	$assignStatic(InstructionConst::IMUL, $new($IMUL));
	$assignStatic(InstructionConst::LMUL, $new($LMUL));
	$assignStatic(InstructionConst::FMUL, $new($FMUL));
	$assignStatic(InstructionConst::DMUL, $new($DMUL));
	$assignStatic(InstructionConst::IDIV, $new($IDIV));
	$assignStatic(InstructionConst::LDIV, $new($LDIV));
	$assignStatic(InstructionConst::FDIV, $new($FDIV));
	$assignStatic(InstructionConst::DDIV, $new($DDIV));
	$assignStatic(InstructionConst::IREM, $new($IREM));
	$assignStatic(InstructionConst::LREM, $new($LREM));
	$assignStatic(InstructionConst::FREM, $new($FREM));
	$assignStatic(InstructionConst::DREM, $new($DREM));
	$assignStatic(InstructionConst::INEG, $new($INEG));
	$assignStatic(InstructionConst::LNEG, $new($LNEG));
	$assignStatic(InstructionConst::FNEG, $new($FNEG));
	$assignStatic(InstructionConst::DNEG, $new($DNEG));
	$assignStatic(InstructionConst::ISHL, $new($ISHL));
	$assignStatic(InstructionConst::LSHL, $new($LSHL));
	$assignStatic(InstructionConst::ISHR, $new($ISHR));
	$assignStatic(InstructionConst::LSHR, $new($LSHR));
	$assignStatic(InstructionConst::IUSHR, $new($IUSHR));
	$assignStatic(InstructionConst::LUSHR, $new($LUSHR));
	$assignStatic(InstructionConst::IAND, $new($IAND));
	$assignStatic(InstructionConst::LAND, $new($LAND));
	$assignStatic(InstructionConst::IOR, $new($IOR));
	$assignStatic(InstructionConst::LOR, $new($LOR));
	$assignStatic(InstructionConst::IXOR, $new($IXOR));
	$assignStatic(InstructionConst::LXOR, $new($LXOR));
	$assignStatic(InstructionConst::I2L, $new($I2L));
	$assignStatic(InstructionConst::I2F, $new($I2F));
	$assignStatic(InstructionConst::I2D, $new($I2D));
	$assignStatic(InstructionConst::L2I, $new($L2I));
	$assignStatic(InstructionConst::L2F, $new($L2F));
	$assignStatic(InstructionConst::L2D, $new($L2D));
	$assignStatic(InstructionConst::F2I, $new($F2I));
	$assignStatic(InstructionConst::F2L, $new($F2L));
	$assignStatic(InstructionConst::F2D, $new($F2D));
	$assignStatic(InstructionConst::D2I, $new($D2I));
	$assignStatic(InstructionConst::D2L, $new($D2L));
	$assignStatic(InstructionConst::D2F, $new($D2F));
	$assignStatic(InstructionConst::I2B, $new($I2B));
	$assignStatic(InstructionConst::I2C, $new($I2C));
	$assignStatic(InstructionConst::I2S, $new($I2S));
	$assignStatic(InstructionConst::LCMP, $new($LCMP));
	$assignStatic(InstructionConst::FCMPL, $new($FCMPL));
	$assignStatic(InstructionConst::FCMPG, $new($FCMPG));
	$assignStatic(InstructionConst::DCMPL, $new($DCMPL));
	$assignStatic(InstructionConst::DCMPG, $new($DCMPG));
	$assignStatic(InstructionConst::IRETURN, $new($IRETURN));
	$assignStatic(InstructionConst::LRETURN, $new($LRETURN));
	$assignStatic(InstructionConst::FRETURN, $new($FRETURN));
	$assignStatic(InstructionConst::DRETURN, $new($DRETURN));
	$assignStatic(InstructionConst::ARETURN, $new($ARETURN));
	$assignStatic(InstructionConst::RETURN, $new($RETURN));
	$assignStatic(InstructionConst::ARRAYLENGTH, $new($ARRAYLENGTH));
	$assignStatic(InstructionConst::ATHROW, $new($ATHROW));
	$assignStatic(InstructionConst::MONITORENTER, $new($MONITORENTER));
	$assignStatic(InstructionConst::MONITOREXIT, $new($MONITOREXIT));
	$assignStatic(InstructionConst::THIS, $new($ALOAD, 0));
	$assignStatic(InstructionConst::ALOAD_0, InstructionConst::THIS);
	$assignStatic(InstructionConst::ALOAD_1, $new($ALOAD, 1));
	$assignStatic(InstructionConst::ALOAD_2, $new($ALOAD, 2));
	$assignStatic(InstructionConst::ILOAD_0, $new($ILOAD, 0));
	$assignStatic(InstructionConst::ILOAD_1, $new($ILOAD, 1));
	$assignStatic(InstructionConst::ILOAD_2, $new($ILOAD, 2));
	$assignStatic(InstructionConst::ASTORE_0, $new($ASTORE, 0));
	$assignStatic(InstructionConst::ASTORE_1, $new($ASTORE, 1));
	$assignStatic(InstructionConst::ASTORE_2, $new($ASTORE, 2));
	$assignStatic(InstructionConst::ISTORE_0, $new($ISTORE, 0));
	$assignStatic(InstructionConst::ISTORE_1, $new($ISTORE, 1));
	$assignStatic(InstructionConst::ISTORE_2, $new($ISTORE, 2));
	$assignStatic(InstructionConst::INSTRUCTIONS, $new($InstructionArray, 256));
	{
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::NOP, InstructionConst::NOP);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ACONST_NULL, InstructionConst::ACONST_NULL);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ICONST_M1, InstructionConst::ICONST_M1);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ICONST_0, InstructionConst::ICONST_0);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ICONST_1, InstructionConst::ICONST_1);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ICONST_2, InstructionConst::ICONST_2);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ICONST_3, InstructionConst::ICONST_3);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ICONST_4, InstructionConst::ICONST_4);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ICONST_5, InstructionConst::ICONST_5);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LCONST_0, InstructionConst::LCONST_0);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LCONST_1, InstructionConst::LCONST_1);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FCONST_0, InstructionConst::FCONST_0);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FCONST_1, InstructionConst::FCONST_1);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FCONST_2, InstructionConst::FCONST_2);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DCONST_0, InstructionConst::DCONST_0);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DCONST_1, InstructionConst::DCONST_1);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::IALOAD, InstructionConst::IALOAD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LALOAD, InstructionConst::LALOAD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FALOAD, InstructionConst::FALOAD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DALOAD, InstructionConst::DALOAD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::AALOAD, InstructionConst::AALOAD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::BALOAD, InstructionConst::BALOAD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::CALOAD, InstructionConst::CALOAD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::SALOAD, InstructionConst::SALOAD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::IASTORE, InstructionConst::IASTORE);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LASTORE, InstructionConst::LASTORE);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FASTORE, InstructionConst::FASTORE);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DASTORE, InstructionConst::DASTORE);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::AASTORE, InstructionConst::AASTORE);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::BASTORE, InstructionConst::BASTORE);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::CASTORE, InstructionConst::CASTORE);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::SASTORE, InstructionConst::SASTORE);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::POP, InstructionConst::POP);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::POP2, InstructionConst::POP2);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DUP, InstructionConst::DUP);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DUP_X1, InstructionConst::DUP_X1);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DUP_X2, InstructionConst::DUP_X2);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DUP2, InstructionConst::DUP2);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DUP2_X1, InstructionConst::DUP2_X1);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DUP2_X2, InstructionConst::DUP2_X2);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::SWAP, InstructionConst::SWAP);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::IADD, InstructionConst::IADD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LADD, InstructionConst::LADD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FADD, InstructionConst::FADD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DADD, InstructionConst::DADD);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ISUB, InstructionConst::ISUB);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LSUB, InstructionConst::LSUB);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FSUB, InstructionConst::FSUB);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DSUB, InstructionConst::DSUB);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::IMUL, InstructionConst::IMUL);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LMUL, InstructionConst::LMUL);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FMUL, InstructionConst::FMUL);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DMUL, InstructionConst::DMUL);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::IDIV, InstructionConst::IDIV);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LDIV, InstructionConst::LDIV);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FDIV, InstructionConst::FDIV);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DDIV, InstructionConst::DDIV);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::IREM, InstructionConst::IREM);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LREM, InstructionConst::LREM);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FREM, InstructionConst::FREM);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DREM, InstructionConst::DREM);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::INEG, InstructionConst::INEG);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LNEG, InstructionConst::LNEG);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FNEG, InstructionConst::FNEG);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DNEG, InstructionConst::DNEG);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ISHL, InstructionConst::ISHL);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LSHL, InstructionConst::LSHL);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ISHR, InstructionConst::ISHR);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LSHR, InstructionConst::LSHR);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::IUSHR, InstructionConst::IUSHR);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LUSHR, InstructionConst::LUSHR);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::IAND, InstructionConst::IAND);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LAND, InstructionConst::LAND);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::IOR, InstructionConst::IOR);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LOR, InstructionConst::LOR);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::IXOR, InstructionConst::IXOR);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LXOR, InstructionConst::LXOR);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::I2L, InstructionConst::I2L);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::I2F, InstructionConst::I2F);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::I2D, InstructionConst::I2D);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::L2I, InstructionConst::L2I);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::L2F, InstructionConst::L2F);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::L2D, InstructionConst::L2D);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::F2I, InstructionConst::F2I);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::F2L, InstructionConst::F2L);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::F2D, InstructionConst::F2D);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::D2I, InstructionConst::D2I);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::D2L, InstructionConst::D2L);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::D2F, InstructionConst::D2F);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::I2B, InstructionConst::I2B);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::I2C, InstructionConst::I2C);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::I2S, InstructionConst::I2S);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LCMP, InstructionConst::LCMP);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FCMPL, InstructionConst::FCMPL);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FCMPG, InstructionConst::FCMPG);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DCMPL, InstructionConst::DCMPL);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DCMPG, InstructionConst::DCMPG);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::IRETURN, InstructionConst::IRETURN);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::LRETURN, InstructionConst::LRETURN);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::FRETURN, InstructionConst::FRETURN);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::DRETURN, InstructionConst::DRETURN);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ARETURN, InstructionConst::ARETURN);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::RETURN, InstructionConst::RETURN);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ARRAYLENGTH, InstructionConst::ARRAYLENGTH);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::ATHROW, InstructionConst::ATHROW);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::MONITORENTER, InstructionConst::MONITORENTER);
		$nc(InstructionConst::INSTRUCTIONS)->set($Const::MONITOREXIT, InstructionConst::MONITOREXIT);
	}
}

InstructionConst::InstructionConst() {
}

$Class* InstructionConst::load$($String* name, bool initialize) {
	$loadClass(InstructionConst, name, initialize, &_InstructionConst_ClassInfo_, clinit$InstructionConst, allocate$InstructionConst);
	return class$;
}

$Class* InstructionConst::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com