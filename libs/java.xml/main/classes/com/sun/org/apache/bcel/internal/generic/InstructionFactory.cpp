#include <com/sun/org/apache/bcel/internal/generic/InstructionFactory.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/DLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/DSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/FLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/FSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/GETSTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO_W.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGT.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLT.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNONNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ACMPEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ACMPNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGT.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLT.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPNE.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INSTANCEOF.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEDYNAMIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionFactory$MethodObject.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/JSR.h>
#include <com/sun/org/apache/bcel/internal/generic/JSR_W.h>
#include <com/sun/org/apache/bcel/internal/generic/JsrInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/LSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/MULTIANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/NEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTSTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Number.h>
#include <java/lang/reflect/Constructor.h>
#include <jcpp.h>

#undef AALOAD
#undef AASTORE
#undef ACONST_NULL
#undef ARETURN
#undef BALOAD
#undef BASTORE
#undef BOOLEAN
#undef CALOAD
#undef CASTORE
#undef CHAR
#undef DADD
#undef DALOAD
#undef DASTORE
#undef DCONST_0
#undef DDIV
#undef DMUL
#undef DOUBLE
#undef DREM
#undef DRETURN
#undef DSUB
#undef DUP
#undef DUP2
#undef DUP2_X1
#undef DUP2_X2
#undef DUP_X1
#undef DUP_X2
#undef FADD
#undef FALOAD
#undef FASTORE
#undef FCONST_0
#undef FDIV
#undef FLOAT
#undef FMUL
#undef FREM
#undef FRETURN
#undef FSUB
#undef GETFIELD
#undef GETSTATIC
#undef GOTO
#undef GOTO_W
#undef IADD
#undef IALOAD
#undef IAND
#undef IASTORE
#undef ICONST_0
#undef IDIV
#undef IFEQ
#undef IFGE
#undef IFGT
#undef IFLE
#undef IFLT
#undef IFNE
#undef IFNONNULL
#undef IFNULL
#undef IF_ACMPEQ
#undef IF_ACMPNE
#undef IF_ICMPEQ
#undef IF_ICMPGE
#undef IF_ICMPGT
#undef IF_ICMPLE
#undef IF_ICMPLT
#undef IF_ICMPNE
#undef IMUL
#undef INT
#undef INVOKEDYNAMIC
#undef INVOKEINTERFACE
#undef INVOKESPECIAL
#undef INVOKESTATIC
#undef INVOKEVIRTUAL
#undef IOR
#undef IREM
#undef IRETURN
#undef ISHL
#undef ISHR
#undef ISUB
#undef IUSHR
#undef IXOR
#undef JSR
#undef JSR_W
#undef LADD
#undef LALOAD
#undef LAND
#undef LASTORE
#undef LCONST_0
#undef LDIV
#undef LMUL
#undef LONG
#undef LOR
#undef LREM
#undef LRETURN
#undef LSHL
#undef LSHR
#undef LSUB
#undef LUSHR
#undef LXOR
#undef NOP
#undef OBJECT
#undef POP
#undef POP2
#undef PUTFIELD
#undef PUTSTATIC
#undef RETURN
#undef SALOAD
#undef SASTORE
#undef STRING
#undef STRINGBUFFER
#undef T_ARRAY
#undef T_BOOLEAN
#undef T_BYTE
#undef T_CHAR
#undef T_DOUBLE
#undef T_FLOAT
#undef T_INT
#undef T_LONG
#undef T_OBJECT
#undef T_SHORT
#undef T_VOID

using $InstructionFactory$MethodObjectArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionFactory$MethodObject>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ANEWARRAY = ::com::sun::org::apache::bcel::internal::generic::ANEWARRAY;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $ArithmeticInstruction = ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction;
using $ArrayInstruction = ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction;
using $ArrayType = ::com::sun::org::apache::bcel::internal::generic::ArrayType;
using $BasicType = ::com::sun::org::apache::bcel::internal::generic::BasicType;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $DLOAD = ::com::sun::org::apache::bcel::internal::generic::DLOAD;
using $DSTORE = ::com::sun::org::apache::bcel::internal::generic::DSTORE;
using $FLOAD = ::com::sun::org::apache::bcel::internal::generic::FLOAD;
using $FSTORE = ::com::sun::org::apache::bcel::internal::generic::FSTORE;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $GETSTATIC = ::com::sun::org::apache::bcel::internal::generic::GETSTATIC;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GOTO_W = ::com::sun::org::apache::bcel::internal::generic::GOTO_W;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $IFGE = ::com::sun::org::apache::bcel::internal::generic::IFGE;
using $IFGT = ::com::sun::org::apache::bcel::internal::generic::IFGT;
using $IFLE = ::com::sun::org::apache::bcel::internal::generic::IFLE;
using $IFLT = ::com::sun::org::apache::bcel::internal::generic::IFLT;
using $IFNE = ::com::sun::org::apache::bcel::internal::generic::IFNE;
using $IFNONNULL = ::com::sun::org::apache::bcel::internal::generic::IFNONNULL;
using $IFNULL = ::com::sun::org::apache::bcel::internal::generic::IFNULL;
using $IF_ACMPEQ = ::com::sun::org::apache::bcel::internal::generic::IF_ACMPEQ;
using $IF_ACMPNE = ::com::sun::org::apache::bcel::internal::generic::IF_ACMPNE;
using $IF_ICMPEQ = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPEQ;
using $IF_ICMPGE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPGE;
using $IF_ICMPGT = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPGT;
using $IF_ICMPLE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPLE;
using $IF_ICMPLT = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPLT;
using $IF_ICMPNE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPNE;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INSTANCEOF = ::com::sun::org::apache::bcel::internal::generic::INSTANCEOF;
using $INVOKEDYNAMIC = ::com::sun::org::apache::bcel::internal::generic::INVOKEDYNAMIC;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionConst = ::com::sun::org::apache::bcel::internal::generic::InstructionConst;
using $InstructionFactory$MethodObject = ::com::sun::org::apache::bcel::internal::generic::InstructionFactory$MethodObject;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $JSR = ::com::sun::org::apache::bcel::internal::generic::JSR;
using $JSR_W = ::com::sun::org::apache::bcel::internal::generic::JSR_W;
using $JsrInstruction = ::com::sun::org::apache::bcel::internal::generic::JsrInstruction;
using $LLOAD = ::com::sun::org::apache::bcel::internal::generic::LLOAD;
using $LSTORE = ::com::sun::org::apache::bcel::internal::generic::LSTORE;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $MULTIANEWARRAY = ::com::sun::org::apache::bcel::internal::generic::MULTIANEWARRAY;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $NEWARRAY = ::com::sun::org::apache::bcel::internal::generic::NEWARRAY;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $PUTSTATIC = ::com::sun::org::apache::bcel::internal::generic::PUTSTATIC;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $ReturnInstruction = ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Constructor = ::java::lang::reflect::Constructor;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _InstructionFactory_FieldInfo_[] = {
	{"short_names", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InstructionFactory, short_names)},
	{"cg", "Lcom/sun/org/apache/bcel/internal/generic/ClassGen;", nullptr, $PRIVATE, $field(InstructionFactory, cg)},
	{"cp", "Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PRIVATE, $field(InstructionFactory, cp)},
	{"append_mos", "[Lcom/sun/org/apache/bcel/internal/generic/InstructionFactory$MethodObject;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InstructionFactory, append_mos)},
	{}
};

$MethodInfo _InstructionFactory_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ClassGen;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(InstructionFactory, init$, void, $ClassGen*, $ConstantPoolGen*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ClassGen;)V", nullptr, $PUBLIC, $method(InstructionFactory, init$, void, $ClassGen*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(InstructionFactory, init$, void, $ConstantPoolGen*)},
	{"createAppend", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createAppend, $Instruction*, $Type*)},
	{"createArrayLoad", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createArrayLoad, $ArrayInstruction*, $Type*)},
	{"createArrayStore", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createArrayStore, $ArrayInstruction*, $Type*)},
	{"createBinaryDoubleOp", "(C)Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PRIVATE | $STATIC, $staticMethod(InstructionFactory, createBinaryDoubleOp, $ArithmeticInstruction*, char16_t)},
	{"createBinaryFloatOp", "(C)Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PRIVATE | $STATIC, $staticMethod(InstructionFactory, createBinaryFloatOp, $ArithmeticInstruction*, char16_t)},
	{"createBinaryIntOp", "(CLjava/lang/String;)Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PRIVATE | $STATIC, $staticMethod(InstructionFactory, createBinaryIntOp, $ArithmeticInstruction*, char16_t, $String*)},
	{"createBinaryLongOp", "(CLjava/lang/String;)Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PRIVATE | $STATIC, $staticMethod(InstructionFactory, createBinaryLongOp, $ArithmeticInstruction*, char16_t, $String*)},
	{"createBinaryOperation", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createBinaryOperation, $ArithmeticInstruction*, $String*, $Type*)},
	{"createBranchInstruction", "(SLcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createBranchInstruction, $BranchInstruction*, int16_t, $InstructionHandle*)},
	{"createCast", "(Lcom/sun/org/apache/bcel/internal/generic/Type;Lcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createCast, $Instruction*, $Type*, $Type*)},
	{"createCheckCast", "(Lcom/sun/org/apache/bcel/internal/generic/ReferenceType;)Lcom/sun/org/apache/bcel/internal/generic/CHECKCAST;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createCheckCast, $CHECKCAST*, $ReferenceType*)},
	{"createConstant", "(Ljava/lang/Object;)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createConstant, $Instruction*, Object$*)},
	{"createDup", "(I)Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createDup, $StackInstruction*, int32_t)},
	{"createDup_1", "(I)Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createDup_1, $StackInstruction*, int32_t)},
	{"createDup_2", "(I)Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createDup_2, $StackInstruction*, int32_t)},
	{"createFieldAccess", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;S)Lcom/sun/org/apache/bcel/internal/generic/FieldInstruction;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createFieldAccess, $FieldInstruction*, $String*, $String*, $Type*, int16_t)},
	{"createGetField", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/GETFIELD;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createGetField, $GETFIELD*, $String*, $String*, $Type*)},
	{"createGetStatic", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/GETSTATIC;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createGetStatic, $GETSTATIC*, $String*, $String*, $Type*)},
	{"createInstanceOf", "(Lcom/sun/org/apache/bcel/internal/generic/ReferenceType;)Lcom/sun/org/apache/bcel/internal/generic/INSTANCEOF;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createInstanceOf, $INSTANCEOF*, $ReferenceType*)},
	{"createInvoke", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;S)Lcom/sun/org/apache/bcel/internal/generic/InvokeInstruction;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createInvoke, $InvokeInstruction*, $String*, $String*, $Type*, $TypeArray*, int16_t)},
	{"createInvoke", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;SZ)Lcom/sun/org/apache/bcel/internal/generic/InvokeInstruction;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createInvoke, $InvokeInstruction*, $String*, $String*, $Type*, $TypeArray*, int16_t, bool)},
	{"createInvoke", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionFactory$MethodObject;S)Lcom/sun/org/apache/bcel/internal/generic/InvokeInstruction;", nullptr, $PRIVATE, $method(InstructionFactory, createInvoke, $InvokeInstruction*, $InstructionFactory$MethodObject*, int16_t)},
	{"createLoad", "(Lcom/sun/org/apache/bcel/internal/generic/Type;I)Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createLoad, $LocalVariableInstruction*, $Type*, int32_t)},
	{"createNew", "(Lcom/sun/org/apache/bcel/internal/generic/ObjectType;)Lcom/sun/org/apache/bcel/internal/generic/NEW;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createNew, $NEW*, $ObjectType*)},
	{"createNew", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/generic/NEW;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createNew, $NEW*, $String*)},
	{"createNewArray", "(Lcom/sun/org/apache/bcel/internal/generic/Type;S)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createNewArray, $Instruction*, $Type*, int16_t)},
	{"createNull", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createNull, $Instruction*, $Type*)},
	{"createPop", "(I)Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createPop, $StackInstruction*, int32_t)},
	{"createPrintln", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createPrintln, $InstructionList*, $String*)},
	{"createPutField", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/PUTFIELD;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createPutField, $PUTFIELD*, $String*, $String*, $Type*)},
	{"createPutStatic", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/PUTSTATIC;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, createPutStatic, $PUTSTATIC*, $String*, $String*, $Type*)},
	{"createReturn", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createReturn, $ReturnInstruction*, $Type*)},
	{"createStore", "(Lcom/sun/org/apache/bcel/internal/generic/Type;I)Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createStore, $LocalVariableInstruction*, $Type*, int32_t)},
	{"createThis", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(InstructionFactory, createThis, $Instruction*)},
	{"getClassGen", "()Lcom/sun/org/apache/bcel/internal/generic/ClassGen;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, getClassGen, $ClassGen*)},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, getConstantPool, $ConstantPoolGen*)},
	{"isString", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(InstructionFactory, isString, bool, $Type*)},
	{"setClassGen", "(Lcom/sun/org/apache/bcel/internal/generic/ClassGen;)V", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, setClassGen, void, $ClassGen*)},
	{"setConstantPool", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $virtualMethod(InstructionFactory, setConstantPool, void, $ConstantPoolGen*)},
	{}
};

$InnerClassInfo _InstructionFactory_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.InstructionFactory$MethodObject", "com.sun.org.apache.bcel.internal.generic.InstructionFactory", "MethodObject", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _InstructionFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.InstructionFactory",
	"java.lang.Object",
	nullptr,
	_InstructionFactory_FieldInfo_,
	_InstructionFactory_MethodInfo_,
	nullptr,
	nullptr,
	_InstructionFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.InstructionFactory$MethodObject"
};

$Object* allocate$InstructionFactory($Class* clazz) {
	return $of($alloc(InstructionFactory));
}

$StringArray* InstructionFactory::short_names = nullptr;
$InstructionFactory$MethodObjectArray* InstructionFactory::append_mos = nullptr;

void InstructionFactory::init$($ClassGen* cg, $ConstantPoolGen* cp) {
	$set(this, cg, cg);
	$set(this, cp, cp);
}

void InstructionFactory::init$($ClassGen* cg) {
	InstructionFactory::init$(cg, $($nc(cg)->getConstantPool()));
}

void InstructionFactory::init$($ConstantPoolGen* cp) {
	InstructionFactory::init$(nullptr, cp);
}

$InvokeInstruction* InstructionFactory::createInvoke($String* class_name, $String* name, $Type* ret_type, $TypeArray* arg_types, int16_t kind) {
	return createInvoke(class_name, name, ret_type, arg_types, kind, kind == $Const::INVOKEINTERFACE);
}

$InvokeInstruction* InstructionFactory::createInvoke($String* class_name, $String* name, $Type* ret_type, $TypeArray* arg_types, int16_t kind, bool use_interface) {
	$useLocalCurrentObjectStackCache();
	if (kind != $Const::INVOKESPECIAL && kind != $Const::INVOKEVIRTUAL && kind != $Const::INVOKESTATIC && kind != $Const::INVOKEINTERFACE && kind != $Const::INVOKEDYNAMIC) {
		$throwNew($IllegalArgumentException, $$str({"Unknown invoke kind: "_s, $$str(kind)}));
	}
	int32_t index = 0;
	int32_t nargs = 0;
	$var($String, signature, $Type::getMethodSignature(ret_type, arg_types));
	{
		$var($TypeArray, arr$, arg_types);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Type, arg_type, arr$->get(i$));
			{
				nargs += $nc(arg_type)->getSize();
			}
		}
	}
	if (use_interface) {
		index = $nc(this->cp)->addInterfaceMethodref(class_name, name, signature);
	} else {
		index = $nc(this->cp)->addMethodref(class_name, name, signature);
	}
	switch (kind) {
	case $Const::INVOKESPECIAL:
		{
			return $new($INVOKESPECIAL, index);
		}
	case $Const::INVOKEVIRTUAL:
		{
			return $new($INVOKEVIRTUAL, index);
		}
	case $Const::INVOKESTATIC:
		{
			return $new($INVOKESTATIC, index);
		}
	case $Const::INVOKEINTERFACE:
		{
			return $new($INVOKEINTERFACE, index, nargs + 1);
		}
	case $Const::INVOKEDYNAMIC:
		{
			return $new($INVOKEDYNAMIC, index);
		}
	default:
		{
			$throwNew($IllegalStateException, $$str({"Unknown invoke kind: "_s, $$str(kind)}));
		}
	}
}

$InstructionList* InstructionFactory::createPrintln($String* s) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $new($InstructionList));
	int32_t out = $nc(this->cp)->addFieldref("java.lang.System"_s, "out"_s, "Ljava/io/PrintStream;"_s);
	int32_t println = $nc(this->cp)->addMethodref("java.io.PrintStream"_s, "println"_s, "(Ljava/lang/String;)V"_s);
	il->append(static_cast<$Instruction*>($$new($GETSTATIC, out)));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, this->cp, s)));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, println)));
	return il;
}

$Instruction* InstructionFactory::createConstant(Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($PUSH, push, nullptr);
	if ($instanceOf($Number, value)) {
		$assign(push, $new($PUSH, this->cp, $cast($Number, value)));
	} else if ($instanceOf($String, value)) {
		$assign(push, $new($PUSH, this->cp, $cast($String, value)));
	} else if ($instanceOf($Boolean, value)) {
		$assign(push, $new($PUSH, this->cp, $cast($Boolean, value)));
	} else if ($instanceOf($Character, value)) {
		$assign(push, $new($PUSH, this->cp, $cast($Character, value)));
	} else {
		$throwNew($ClassGenException, $$str({"Illegal type: "_s, $nc($of(value))->getClass()}));
	}
	return $nc(push)->getInstruction();
}

$InvokeInstruction* InstructionFactory::createInvoke($InstructionFactory$MethodObject* m, int16_t kind) {
	return createInvoke($nc(m)->class_name, m->name, m->result_type, m->arg_types, kind);
}

bool InstructionFactory::isString($Type* type) {
	$init(InstructionFactory);
	return ($instanceOf($ObjectType, type)) && $nc($($nc(($cast($ObjectType, type)))->getClassName()))->equals("java.lang.String"_s);
}

$Instruction* InstructionFactory::createAppend($Type* type) {
	int8_t t = $nc(type)->getType();
	if (isString(type)) {
		return createInvoke($nc(InstructionFactory::append_mos)->get(0), $Const::INVOKEVIRTUAL);
	}
	switch (t) {
	case $Const::T_BOOLEAN:
		{}
	case $Const::T_CHAR:
		{}
	case $Const::T_FLOAT:
		{}
	case $Const::T_DOUBLE:
		{}
	case $Const::T_BYTE:
		{}
	case $Const::T_SHORT:
		{}
	case $Const::T_INT:
		{}
	case $Const::T_LONG:
		{
			return createInvoke($nc(InstructionFactory::append_mos)->get(t), $Const::INVOKEVIRTUAL);
		}
	case $Const::T_ARRAY:
		{}
	case $Const::T_OBJECT:
		{
			return createInvoke($nc(InstructionFactory::append_mos)->get(1), $Const::INVOKEVIRTUAL);
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"No append for this type? "_s, type}));
		}
	}
}

$FieldInstruction* InstructionFactory::createFieldAccess($String* class_name, $String* name, $Type* type, int16_t kind) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	$var($String, signature, $nc(type)->getSignature());
	index = $nc(this->cp)->addFieldref(class_name, name, signature);
	switch (kind) {
	case $Const::GETFIELD:
		{
			return $new($GETFIELD, index);
		}
	case $Const::PUTFIELD:
		{
			return $new($PUTFIELD, index);
		}
	case $Const::GETSTATIC:
		{
			return $new($GETSTATIC, index);
		}
	case $Const::PUTSTATIC:
		{
			return $new($PUTSTATIC, index);
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unknown getfield kind:"_s, $$str(kind)}));
		}
	}
}

$Instruction* InstructionFactory::createThis() {
	$init(InstructionFactory);
	return $new($ALOAD, 0);
}

$ReturnInstruction* InstructionFactory::createReturn($Type* type) {
	$init(InstructionFactory);
	switch ($nc(type)->getType()) {
	case $Const::T_ARRAY:
		{}
	case $Const::T_OBJECT:
		{
			$init($InstructionConst);
			return $InstructionConst::ARETURN;
		}
	case $Const::T_INT:
		{}
	case $Const::T_SHORT:
		{}
	case $Const::T_BOOLEAN:
		{}
	case $Const::T_CHAR:
		{}
	case $Const::T_BYTE:
		{
			$init($InstructionConst);
			return $InstructionConst::IRETURN;
		}
	case $Const::T_FLOAT:
		{
			$init($InstructionConst);
			return $InstructionConst::FRETURN;
		}
	case $Const::T_DOUBLE:
		{
			$init($InstructionConst);
			return $InstructionConst::DRETURN;
		}
	case $Const::T_LONG:
		{
			$init($InstructionConst);
			return $InstructionConst::LRETURN;
		}
	case $Const::T_VOID:
		{
			$init($InstructionConst);
			return $InstructionConst::RETURN;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid type: "_s, type}));
		}
	}
}

$ArithmeticInstruction* InstructionFactory::createBinaryIntOp(char16_t first, $String* op) {
	$init(InstructionFactory);
	switch (first) {
	case u'-':
		{
			$init($InstructionConst);
			return $InstructionConst::ISUB;
		}
	case u'+':
		{
			$init($InstructionConst);
			return $InstructionConst::IADD;
		}
	case u'%':
		{
			$init($InstructionConst);
			return $InstructionConst::IREM;
		}
	case u'*':
		{
			$init($InstructionConst);
			return $InstructionConst::IMUL;
		}
	case u'/':
		{
			$init($InstructionConst);
			return $InstructionConst::IDIV;
		}
	case u'&':
		{
			$init($InstructionConst);
			return $InstructionConst::IAND;
		}
	case u'|':
		{
			$init($InstructionConst);
			return $InstructionConst::IOR;
		}
	case u'^':
		{
			$init($InstructionConst);
			return $InstructionConst::IXOR;
		}
	case u'<':
		{
			$init($InstructionConst);
			return $InstructionConst::ISHL;
		}
	case u'>':
		{
			$init($InstructionConst);
			return $nc(op)->equals(">>>"_s) ? $InstructionConst::IUSHR : $InstructionConst::ISHR;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid operand "_s, op}));
		}
	}
}

$ArithmeticInstruction* InstructionFactory::createBinaryLongOp(char16_t first, $String* op) {
	$init(InstructionFactory);
	switch (first) {
	case u'-':
		{
			$init($InstructionConst);
			return $InstructionConst::LSUB;
		}
	case u'+':
		{
			$init($InstructionConst);
			return $InstructionConst::LADD;
		}
	case u'%':
		{
			$init($InstructionConst);
			return $InstructionConst::LREM;
		}
	case u'*':
		{
			$init($InstructionConst);
			return $InstructionConst::LMUL;
		}
	case u'/':
		{
			$init($InstructionConst);
			return $InstructionConst::LDIV;
		}
	case u'&':
		{
			$init($InstructionConst);
			return $InstructionConst::LAND;
		}
	case u'|':
		{
			$init($InstructionConst);
			return $InstructionConst::LOR;
		}
	case u'^':
		{
			$init($InstructionConst);
			return $InstructionConst::LXOR;
		}
	case u'<':
		{
			$init($InstructionConst);
			return $InstructionConst::LSHL;
		}
	case u'>':
		{
			$init($InstructionConst);
			return $nc(op)->equals(">>>"_s) ? $InstructionConst::LUSHR : $InstructionConst::LSHR;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid operand "_s, op}));
		}
	}
}

$ArithmeticInstruction* InstructionFactory::createBinaryFloatOp(char16_t op) {
	$init(InstructionFactory);
	$useLocalCurrentObjectStackCache();
	switch (op) {
	case u'-':
		{
			$init($InstructionConst);
			return $InstructionConst::FSUB;
		}
	case u'+':
		{
			$init($InstructionConst);
			return $InstructionConst::FADD;
		}
	case u'*':
		{
			$init($InstructionConst);
			return $InstructionConst::FMUL;
		}
	case u'/':
		{
			$init($InstructionConst);
			return $InstructionConst::FDIV;
		}
	case u'%':
		{
			$init($InstructionConst);
			return $InstructionConst::FREM;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid operand "_s, $$str(op)}));
		}
	}
}

$ArithmeticInstruction* InstructionFactory::createBinaryDoubleOp(char16_t op) {
	$init(InstructionFactory);
	$useLocalCurrentObjectStackCache();
	switch (op) {
	case u'-':
		{
			$init($InstructionConst);
			return $InstructionConst::DSUB;
		}
	case u'+':
		{
			$init($InstructionConst);
			return $InstructionConst::DADD;
		}
	case u'*':
		{
			$init($InstructionConst);
			return $InstructionConst::DMUL;
		}
	case u'/':
		{
			$init($InstructionConst);
			return $InstructionConst::DDIV;
		}
	case u'%':
		{
			$init($InstructionConst);
			return $InstructionConst::DREM;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid operand "_s, $$str(op)}));
		}
	}
}

$ArithmeticInstruction* InstructionFactory::createBinaryOperation($String* op, $Type* type) {
	$init(InstructionFactory);
	char16_t first = $nc(op)->charAt(0);
	switch ($nc(type)->getType()) {
	case $Const::T_BYTE:
		{}
	case $Const::T_SHORT:
		{}
	case $Const::T_INT:
		{}
	case $Const::T_CHAR:
		{
			return createBinaryIntOp(first, op);
		}
	case $Const::T_LONG:
		{
			return createBinaryLongOp(first, op);
		}
	case $Const::T_FLOAT:
		{
			return createBinaryFloatOp(first);
		}
	case $Const::T_DOUBLE:
		{
			return createBinaryDoubleOp(first);
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid type "_s, type}));
		}
	}
}

$StackInstruction* InstructionFactory::createPop(int32_t size) {
	$init(InstructionFactory);
	$init($InstructionConst);
	return (size == 2) ? $InstructionConst::POP2 : $InstructionConst::POP;
}

$StackInstruction* InstructionFactory::createDup(int32_t size) {
	$init(InstructionFactory);
	$init($InstructionConst);
	return (size == 2) ? $InstructionConst::DUP2 : $InstructionConst::DUP;
}

$StackInstruction* InstructionFactory::createDup_2(int32_t size) {
	$init(InstructionFactory);
	$init($InstructionConst);
	return (size == 2) ? $InstructionConst::DUP2_X2 : $InstructionConst::DUP_X2;
}

$StackInstruction* InstructionFactory::createDup_1(int32_t size) {
	$init(InstructionFactory);
	$init($InstructionConst);
	return (size == 2) ? $InstructionConst::DUP2_X1 : $InstructionConst::DUP_X1;
}

$LocalVariableInstruction* InstructionFactory::createStore($Type* type, int32_t index) {
	$init(InstructionFactory);
	switch ($nc(type)->getType()) {
	case $Const::T_BOOLEAN:
		{}
	case $Const::T_CHAR:
		{}
	case $Const::T_BYTE:
		{}
	case $Const::T_SHORT:
		{}
	case $Const::T_INT:
		{
			return $new($ISTORE, index);
		}
	case $Const::T_FLOAT:
		{
			return $new($FSTORE, index);
		}
	case $Const::T_DOUBLE:
		{
			return $new($DSTORE, index);
		}
	case $Const::T_LONG:
		{
			return $new($LSTORE, index);
		}
	case $Const::T_ARRAY:
		{}
	case $Const::T_OBJECT:
		{
			return $new($ASTORE, index);
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid type "_s, type}));
		}
	}
}

$LocalVariableInstruction* InstructionFactory::createLoad($Type* type, int32_t index) {
	$init(InstructionFactory);
	switch ($nc(type)->getType()) {
	case $Const::T_BOOLEAN:
		{}
	case $Const::T_CHAR:
		{}
	case $Const::T_BYTE:
		{}
	case $Const::T_SHORT:
		{}
	case $Const::T_INT:
		{
			return $new($ILOAD, index);
		}
	case $Const::T_FLOAT:
		{
			return $new($FLOAD, index);
		}
	case $Const::T_DOUBLE:
		{
			return $new($DLOAD, index);
		}
	case $Const::T_LONG:
		{
			return $new($LLOAD, index);
		}
	case $Const::T_ARRAY:
		{}
	case $Const::T_OBJECT:
		{
			return $new($ALOAD, index);
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid type "_s, type}));
		}
	}
}

$ArrayInstruction* InstructionFactory::createArrayLoad($Type* type) {
	$init(InstructionFactory);
	switch ($nc(type)->getType()) {
	case $Const::T_BOOLEAN:
		{}
	case $Const::T_BYTE:
		{
			$init($InstructionConst);
			return $InstructionConst::BALOAD;
		}
	case $Const::T_CHAR:
		{
			$init($InstructionConst);
			return $InstructionConst::CALOAD;
		}
	case $Const::T_SHORT:
		{
			$init($InstructionConst);
			return $InstructionConst::SALOAD;
		}
	case $Const::T_INT:
		{
			$init($InstructionConst);
			return $InstructionConst::IALOAD;
		}
	case $Const::T_FLOAT:
		{
			$init($InstructionConst);
			return $InstructionConst::FALOAD;
		}
	case $Const::T_DOUBLE:
		{
			$init($InstructionConst);
			return $InstructionConst::DALOAD;
		}
	case $Const::T_LONG:
		{
			$init($InstructionConst);
			return $InstructionConst::LALOAD;
		}
	case $Const::T_ARRAY:
		{}
	case $Const::T_OBJECT:
		{
			$init($InstructionConst);
			return $InstructionConst::AALOAD;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid type "_s, type}));
		}
	}
}

$ArrayInstruction* InstructionFactory::createArrayStore($Type* type) {
	$init(InstructionFactory);
	switch ($nc(type)->getType()) {
	case $Const::T_BOOLEAN:
		{}
	case $Const::T_BYTE:
		{
			$init($InstructionConst);
			return $InstructionConst::BASTORE;
		}
	case $Const::T_CHAR:
		{
			$init($InstructionConst);
			return $InstructionConst::CASTORE;
		}
	case $Const::T_SHORT:
		{
			$init($InstructionConst);
			return $InstructionConst::SASTORE;
		}
	case $Const::T_INT:
		{
			$init($InstructionConst);
			return $InstructionConst::IASTORE;
		}
	case $Const::T_FLOAT:
		{
			$init($InstructionConst);
			return $InstructionConst::FASTORE;
		}
	case $Const::T_DOUBLE:
		{
			$init($InstructionConst);
			return $InstructionConst::DASTORE;
		}
	case $Const::T_LONG:
		{
			$init($InstructionConst);
			return $InstructionConst::LASTORE;
		}
	case $Const::T_ARRAY:
		{}
	case $Const::T_OBJECT:
		{
			$init($InstructionConst);
			return $InstructionConst::AASTORE;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid type "_s, type}));
		}
	}
}

$Instruction* InstructionFactory::createCast($Type* src_type, $Type* dest_type) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (($instanceOf($BasicType, src_type)) && ($instanceOf($BasicType, dest_type))) {
		int8_t dest = $nc(dest_type)->getType();
		int8_t src = $nc(src_type)->getType();
		if (dest == $Const::T_LONG && (src == $Const::T_CHAR || src == $Const::T_BYTE || src == $Const::T_SHORT)) {
			src = $Const::T_INT;
		}
		$var($String, name, $str({"com.sun.org.apache.bcel.internal.generic."_s, $nc(InstructionFactory::short_names)->get(src - $Const::T_CHAR), "2"_s, $nc(InstructionFactory::short_names)->get(dest - $Const::T_CHAR)}));
		$var($Instruction, i, nullptr);
		try {
			$assign(i, $cast($Instruction, $nc($($Class::forName(name)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
		} catch ($Exception& e) {
			$throwNew($IllegalArgumentException, $$str({"Could not find instruction: "_s, name}), e);
		}
		return i;
	} else if (($instanceOf($ReferenceType, src_type)) && ($instanceOf($ReferenceType, dest_type))) {
		if ($instanceOf($ArrayType, dest_type)) {
			return $new($CHECKCAST, $nc(this->cp)->addArrayClass($cast($ArrayType, dest_type)));
		}
		return $new($CHECKCAST, $nc(this->cp)->addClass($($nc(($cast($ObjectType, dest_type)))->getClassName())));
	} else {
		$throwNew($IllegalArgumentException, $$str({"Cannot cast "_s, src_type, " to "_s, dest_type}));
	}
}

$GETFIELD* InstructionFactory::createGetField($String* class_name, $String* name, $Type* t) {
	return $new($GETFIELD, $nc(this->cp)->addFieldref(class_name, name, $($nc(t)->getSignature())));
}

$GETSTATIC* InstructionFactory::createGetStatic($String* class_name, $String* name, $Type* t) {
	return $new($GETSTATIC, $nc(this->cp)->addFieldref(class_name, name, $($nc(t)->getSignature())));
}

$PUTFIELD* InstructionFactory::createPutField($String* class_name, $String* name, $Type* t) {
	return $new($PUTFIELD, $nc(this->cp)->addFieldref(class_name, name, $($nc(t)->getSignature())));
}

$PUTSTATIC* InstructionFactory::createPutStatic($String* class_name, $String* name, $Type* t) {
	return $new($PUTSTATIC, $nc(this->cp)->addFieldref(class_name, name, $($nc(t)->getSignature())));
}

$CHECKCAST* InstructionFactory::createCheckCast($ReferenceType* t) {
	if ($instanceOf($ArrayType, t)) {
		return $new($CHECKCAST, $nc(this->cp)->addArrayClass($cast($ArrayType, t)));
	}
	return $new($CHECKCAST, $nc(this->cp)->addClass($cast($ObjectType, t)));
}

$INSTANCEOF* InstructionFactory::createInstanceOf($ReferenceType* t) {
	if ($instanceOf($ArrayType, t)) {
		return $new($INSTANCEOF, $nc(this->cp)->addArrayClass($cast($ArrayType, t)));
	}
	return $new($INSTANCEOF, $nc(this->cp)->addClass($cast($ObjectType, t)));
}

$NEW* InstructionFactory::createNew($ObjectType* t) {
	return $new($NEW, $nc(this->cp)->addClass(t));
}

$NEW* InstructionFactory::createNew($String* s) {
	return createNew($($ObjectType::getInstance(s)));
}

$Instruction* InstructionFactory::createNewArray($Type* t, int16_t dim) {
	if (dim == 1) {
		if ($instanceOf($ObjectType, t)) {
			return $new($ANEWARRAY, $nc(this->cp)->addClass($cast($ObjectType, t)));
		} else if ($instanceOf($ArrayType, t)) {
			return $new($ANEWARRAY, $nc(this->cp)->addArrayClass($cast($ArrayType, t)));
		} else {
			return $new($NEWARRAY, $nc(t)->getType());
		}
	}
	$var($ArrayType, at, nullptr);
	if ($instanceOf($ArrayType, t)) {
		$assign(at, $cast($ArrayType, t));
	} else {
		$assign(at, $new($ArrayType, t, (int32_t)dim));
	}
	return $new($MULTIANEWARRAY, $nc(this->cp)->addArrayClass(at), dim);
}

$Instruction* InstructionFactory::createNull($Type* type) {
	$init(InstructionFactory);
	switch ($nc(type)->getType()) {
	case $Const::T_ARRAY:
		{}
	case $Const::T_OBJECT:
		{
			$init($InstructionConst);
			return $InstructionConst::ACONST_NULL;
		}
	case $Const::T_INT:
		{}
	case $Const::T_SHORT:
		{}
	case $Const::T_BOOLEAN:
		{}
	case $Const::T_CHAR:
		{}
	case $Const::T_BYTE:
		{
			$init($InstructionConst);
			return $InstructionConst::ICONST_0;
		}
	case $Const::T_FLOAT:
		{
			$init($InstructionConst);
			return $InstructionConst::FCONST_0;
		}
	case $Const::T_DOUBLE:
		{
			$init($InstructionConst);
			return $InstructionConst::DCONST_0;
		}
	case $Const::T_LONG:
		{
			$init($InstructionConst);
			return $InstructionConst::LCONST_0;
		}
	case $Const::T_VOID:
		{
			$init($InstructionConst);
			return $InstructionConst::NOP;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid type: "_s, type}));
		}
	}
}

$BranchInstruction* InstructionFactory::createBranchInstruction(int16_t opcode, $InstructionHandle* target) {
	$init(InstructionFactory);
	$useLocalCurrentObjectStackCache();
	switch (opcode) {
	case $Const::IFEQ:
		{
			return $new($IFEQ, target);
		}
	case $Const::IFNE:
		{
			return $new($IFNE, target);
		}
	case $Const::IFLT:
		{
			return $new($IFLT, target);
		}
	case $Const::IFGE:
		{
			return $new($IFGE, target);
		}
	case $Const::IFGT:
		{
			return $new($IFGT, target);
		}
	case $Const::IFLE:
		{
			return $new($IFLE, target);
		}
	case $Const::IF_ICMPEQ:
		{
			return $new($IF_ICMPEQ, target);
		}
	case $Const::IF_ICMPNE:
		{
			return $new($IF_ICMPNE, target);
		}
	case $Const::IF_ICMPLT:
		{
			return $new($IF_ICMPLT, target);
		}
	case $Const::IF_ICMPGE:
		{
			return $new($IF_ICMPGE, target);
		}
	case $Const::IF_ICMPGT:
		{
			return $new($IF_ICMPGT, target);
		}
	case $Const::IF_ICMPLE:
		{
			return $new($IF_ICMPLE, target);
		}
	case $Const::IF_ACMPEQ:
		{
			return $new($IF_ACMPEQ, target);
		}
	case $Const::IF_ACMPNE:
		{
			return $new($IF_ACMPNE, target);
		}
	case $Const::GOTO:
		{
			return $new($GOTO, target);
		}
	case $Const::JSR:
		{
			return $new($JSR, target);
		}
	case $Const::IFNULL:
		{
			return $new($IFNULL, target);
		}
	case $Const::IFNONNULL:
		{
			return $new($IFNONNULL, target);
		}
	case $Const::GOTO_W:
		{
			return $new($GOTO_W, target);
		}
	case $Const::JSR_W:
		{
			return $new($JSR_W, target);
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid opcode: "_s, $$str(opcode)}));
		}
	}
}

void InstructionFactory::setClassGen($ClassGen* c) {
	$set(this, cg, c);
}

$ClassGen* InstructionFactory::getClassGen() {
	return this->cg;
}

void InstructionFactory::setConstantPool($ConstantPoolGen* c) {
	$set(this, cp, c);
}

$ConstantPoolGen* InstructionFactory::getConstantPool() {
	return this->cp;
}

void clinit$InstructionFactory($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(InstructionFactory::short_names, $new($StringArray, {
		"C"_s,
		"F"_s,
		"D"_s,
		"B"_s,
		"S"_s,
		"I"_s,
		"L"_s
	}));
	$init($Type);
	$assignStatic(InstructionFactory::append_mos, $new($InstructionFactory$MethodObjectArray, {
		$$new($InstructionFactory$MethodObject, "java.lang.StringBuffer"_s, "append"_s, $Type::STRINGBUFFER, $$new($TypeArray, {static_cast<$Type*>($Type::STRING)})),
		$$new($InstructionFactory$MethodObject, "java.lang.StringBuffer"_s, "append"_s, $Type::STRINGBUFFER, $$new($TypeArray, {static_cast<$Type*>($Type::OBJECT)})),
		($InstructionFactory$MethodObject*)nullptr,
		($InstructionFactory$MethodObject*)nullptr,
		$$new($InstructionFactory$MethodObject, "java.lang.StringBuffer"_s, "append"_s, $Type::STRINGBUFFER, $$new($TypeArray, {static_cast<$Type*>($Type::BOOLEAN)})),
		$$new($InstructionFactory$MethodObject, "java.lang.StringBuffer"_s, "append"_s, $Type::STRINGBUFFER, $$new($TypeArray, {static_cast<$Type*>($Type::CHAR)})),
		$$new($InstructionFactory$MethodObject, "java.lang.StringBuffer"_s, "append"_s, $Type::STRINGBUFFER, $$new($TypeArray, {static_cast<$Type*>($Type::FLOAT)})),
		$$new($InstructionFactory$MethodObject, "java.lang.StringBuffer"_s, "append"_s, $Type::STRINGBUFFER, $$new($TypeArray, {static_cast<$Type*>($Type::DOUBLE)})),
		$$new($InstructionFactory$MethodObject, "java.lang.StringBuffer"_s, "append"_s, $Type::STRINGBUFFER, $$new($TypeArray, {static_cast<$Type*>($Type::INT)})),
		$$new($InstructionFactory$MethodObject, "java.lang.StringBuffer"_s, "append"_s, $Type::STRINGBUFFER, $$new($TypeArray, {static_cast<$Type*>($Type::INT)})),
		$$new($InstructionFactory$MethodObject, "java.lang.StringBuffer"_s, "append"_s, $Type::STRINGBUFFER, $$new($TypeArray, {static_cast<$Type*>($Type::INT)})),
		$$new($InstructionFactory$MethodObject, "java.lang.StringBuffer"_s, "append"_s, $Type::STRINGBUFFER, $$new($TypeArray, {static_cast<$Type*>($Type::LONG)}))
	}));
}

InstructionFactory::InstructionFactory() {
}

$Class* InstructionFactory::load$($String* name, bool initialize) {
	$loadClass(InstructionFactory, name, initialize, &_InstructionFactory_ClassInfo_, clinit$InstructionFactory, allocate$InstructionFactory);
	return class$;
}

$Class* InstructionFactory::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com