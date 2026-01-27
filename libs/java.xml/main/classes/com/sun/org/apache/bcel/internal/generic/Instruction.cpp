#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BIPUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/BREAKPOINT.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
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
#include <com/sun/org/apache/bcel/internal/generic/IINC.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/IMPDEP1.h>
#include <com/sun/org/apache/bcel/internal/generic/IMPDEP2.h>
#include <com/sun/org/apache/bcel/internal/generic/INSTANCEOF.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEDYNAMIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionComparator.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/JSR.h>
#include <com/sun/org/apache/bcel/internal/generic/JSR_W.h>
#include <com/sun/org/apache/bcel/internal/generic/JsrInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC2_W.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC_W.h>
#include <com/sun/org/apache/bcel/internal/generic/LLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/LOOKUPSWITCH.h>
#include <com/sun/org/apache/bcel/internal/generic/LSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/MULTIANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/NEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTSTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/RET.h>
#include <com/sun/org/apache/bcel/internal/generic/SIPUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/Select.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/TABLESWITCH.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef ALOAD
#undef ALOAD_0
#undef ALOAD_1
#undef ALOAD_2
#undef ALOAD_3
#undef ANEWARRAY
#undef ASTORE
#undef ASTORE_0
#undef ASTORE_1
#undef ASTORE_2
#undef ASTORE_3
#undef BIPUSH
#undef BREAKPOINT
#undef CHECKCAST
#undef DEFAULT
#undef DLOAD
#undef DLOAD_0
#undef DLOAD_1
#undef DLOAD_2
#undef DLOAD_3
#undef DSTORE
#undef DSTORE_0
#undef DSTORE_1
#undef DSTORE_2
#undef DSTORE_3
#undef FLOAD
#undef FLOAD_0
#undef FLOAD_1
#undef FLOAD_2
#undef FLOAD_3
#undef FSTORE
#undef FSTORE_0
#undef FSTORE_1
#undef FSTORE_2
#undef FSTORE_3
#undef GETFIELD
#undef GETSTATIC
#undef GOTO
#undef GOTO_W
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
#undef IINC
#undef ILOAD
#undef ILOAD_0
#undef ILOAD_1
#undef ILOAD_2
#undef ILOAD_3
#undef IMPDEP1
#undef IMPDEP2
#undef INSTANCEOF
#undef INVOKEDYNAMIC
#undef INVOKEINTERFACE
#undef INVOKESPECIAL
#undef INVOKESTATIC
#undef INVOKEVIRTUAL
#undef ISTORE
#undef ISTORE_0
#undef ISTORE_1
#undef ISTORE_2
#undef ISTORE_3
#undef JSR
#undef JSR_W
#undef LDC
#undef LDC2_W
#undef LDC_W
#undef LLOAD
#undef LLOAD_0
#undef LLOAD_1
#undef LLOAD_2
#undef LLOAD_3
#undef LOOKUPSWITCH
#undef LSTORE
#undef LSTORE_0
#undef LSTORE_1
#undef LSTORE_2
#undef LSTORE_3
#undef MAX_VALUE
#undef MIN_VALUE
#undef MULTIANEWARRAY
#undef NEW
#undef NEWARRAY
#undef PUTFIELD
#undef PUTSTATIC
#undef RET
#undef SIPUSH
#undef TABLESWITCH
#undef WIDE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ANEWARRAY = ::com::sun::org::apache::bcel::internal::generic::ANEWARRAY;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $BIPUSH = ::com::sun::org::apache::bcel::internal::generic::BIPUSH;
using $BREAKPOINT = ::com::sun::org::apache::bcel::internal::generic::BREAKPOINT;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
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
using $IINC = ::com::sun::org::apache::bcel::internal::generic::IINC;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $IMPDEP1 = ::com::sun::org::apache::bcel::internal::generic::IMPDEP1;
using $IMPDEP2 = ::com::sun::org::apache::bcel::internal::generic::IMPDEP2;
using $INSTANCEOF = ::com::sun::org::apache::bcel::internal::generic::INSTANCEOF;
using $INVOKEDYNAMIC = ::com::sun::org::apache::bcel::internal::generic::INVOKEDYNAMIC;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $InstructionComparator = ::com::sun::org::apache::bcel::internal::generic::InstructionComparator;
using $InstructionConst = ::com::sun::org::apache::bcel::internal::generic::InstructionConst;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $JSR = ::com::sun::org::apache::bcel::internal::generic::JSR;
using $JSR_W = ::com::sun::org::apache::bcel::internal::generic::JSR_W;
using $JsrInstruction = ::com::sun::org::apache::bcel::internal::generic::JsrInstruction;
using $LDC = ::com::sun::org::apache::bcel::internal::generic::LDC;
using $LDC2_W = ::com::sun::org::apache::bcel::internal::generic::LDC2_W;
using $LDC_W = ::com::sun::org::apache::bcel::internal::generic::LDC_W;
using $LLOAD = ::com::sun::org::apache::bcel::internal::generic::LLOAD;
using $LOOKUPSWITCH = ::com::sun::org::apache::bcel::internal::generic::LOOKUPSWITCH;
using $LSTORE = ::com::sun::org::apache::bcel::internal::generic::LSTORE;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $MULTIANEWARRAY = ::com::sun::org::apache::bcel::internal::generic::MULTIANEWARRAY;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $NEWARRAY = ::com::sun::org::apache::bcel::internal::generic::NEWARRAY;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $PUTSTATIC = ::com::sun::org::apache::bcel::internal::generic::PUTSTATIC;
using $RET = ::com::sun::org::apache::bcel::internal::generic::RET;
using $SIPUSH = ::com::sun::org::apache::bcel::internal::generic::SIPUSH;
using $Select = ::com::sun::org::apache::bcel::internal::generic::Select;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $TABLESWITCH = ::com::sun::org::apache::bcel::internal::generic::TABLESWITCH;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$CompoundAttribute _Instruction_MethodAnnotations_getComparator8[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Instruction_MethodAnnotations_setComparator18[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Instruction_FieldInfo_[] = {
	{"length", "S", nullptr, $PRIVATE, $field(Instruction, length)},
	{"opcode", "S", nullptr, $PRIVATE, $field(Instruction, opcode)},
	{"cmp", "Lcom/sun/org/apache/bcel/internal/generic/InstructionComparator;", nullptr, $PRIVATE | $STATIC, $staticField(Instruction, cmp)},
	{}
};

$MethodInfo _Instruction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Instruction, init$, void)},
	{"<init>", "(SS)V", nullptr, $PUBLIC, $method(Instruction, init$, void, int16_t, int16_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instruction, accept, void, $Visitor*)},
	{"consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC, $virtualMethod(Instruction, consumeStack, int32_t, $ConstantPoolGen*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Instruction, copy, Instruction*)},
	{"dispose", "()V", nullptr, 0, $virtualMethod(Instruction, dispose, void)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Instruction, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Instruction, equals, bool, Object$*)},
	{"getComparator", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionComparator;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Instruction, getComparator, $InstructionComparator*), nullptr, nullptr, _Instruction_MethodAnnotations_getComparator8},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(Instruction, getLength, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Instruction, getName, $String*)},
	{"getOpcode", "()S", nullptr, $PUBLIC, $virtualMethod(Instruction, getOpcode, int16_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Instruction, hashCode, int32_t)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(Instruction, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"isValidByte", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Instruction, isValidByte, bool, int32_t)},
	{"isValidShort", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Instruction, isValidShort, bool, int32_t)},
	{"produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC, $virtualMethod(Instruction, produceStack, int32_t, $ConstantPoolGen*)},
	{"readInstruction", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC, $staticMethod(Instruction, readInstruction, Instruction*, $ByteSequence*), "java.io.IOException"},
	{"setComparator", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionComparator;)V", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Instruction, setComparator, void, $InstructionComparator*), nullptr, nullptr, _Instruction_MethodAnnotations_setComparator18},
	{"setLength", "(I)V", nullptr, $FINAL, $method(Instruction, setLength, void, int32_t)},
	{"setOpcode", "(S)V", nullptr, 0, $virtualMethod(Instruction, setOpcode, void, int16_t)},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Instruction, toString, $String*, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Instruction, toString, $String*)},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Instruction, toString, $String*, $ConstantPool*)},
	{}
};

$ClassInfo _Instruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"java.lang.Object",
	"java.lang.Cloneable",
	_Instruction_FieldInfo_,
	_Instruction_MethodInfo_
};

$Object* allocate$Instruction($Class* clazz) {
	return $of($alloc(Instruction));
}

$InstructionComparator* Instruction::cmp = nullptr;

void Instruction::init$() {
	this->length = (int16_t)1;
	this->opcode = (int16_t)-1;
}

void Instruction::init$(int16_t opcode, int16_t length) {
	this->length = (int16_t)1;
	this->opcode = (int16_t)-1;
	this->length = length;
	this->opcode = opcode;
}

void Instruction::dump($DataOutputStream* out) {
	$nc(out)->writeByte(this->opcode);
}

$String* Instruction::getName() {
	return $Const::getOpcodeName(this->opcode);
}

$String* Instruction::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	if (verbose) {
		return $str({$(getName()), "["_s, $$str(this->opcode), "]("_s, $$str(this->length), ")"_s});
	}
	return getName();
}

$String* Instruction::toString() {
	return toString(true);
}

$String* Instruction::toString($ConstantPool* cp) {
	return toString(false);
}

Instruction* Instruction::copy() {
	$var(Instruction, i, nullptr);
	if ($InstructionConst::getInstruction(this->getOpcode()) != nullptr) {
		$assign(i, this);
	} else {
		try {
			$assign(i, $cast(Instruction, clone()));
		} catch ($CloneNotSupportedException& e) {
			$nc($System::err)->println($of(e));
		}
	}
	return i;
}

void Instruction::initFromFile($ByteSequence* bytes, bool wide) {
}

Instruction* Instruction::readInstruction($ByteSequence* bytes) {
	$init(Instruction);
	$useLocalCurrentObjectStackCache();
	bool wide = false;
	int16_t opcode = (int16_t)$nc(bytes)->readUnsignedByte();
	$var(Instruction, obj, nullptr);
	if (opcode == $Const::WIDE) {
		wide = true;
		opcode = (int16_t)bytes->readUnsignedByte();
	}
	$var(Instruction, instruction, $InstructionConst::getInstruction(opcode));
	if (instruction != nullptr) {
		return instruction;
	}
	switch (opcode) {
	case $Const::BIPUSH:
		{
			$assign(obj, $new($BIPUSH));
			break;
		}
	case $Const::SIPUSH:
		{
			$assign(obj, $new($SIPUSH));
			break;
		}
	case $Const::LDC:
		{
			$assign(obj, $new($LDC));
			break;
		}
	case $Const::LDC_W:
		{
			$assign(obj, $new($LDC_W));
			break;
		}
	case $Const::LDC2_W:
		{
			$assign(obj, $new($LDC2_W));
			break;
		}
	case $Const::ILOAD:
		{
			$assign(obj, $new($ILOAD));
			break;
		}
	case $Const::LLOAD:
		{
			$assign(obj, $new($LLOAD));
			break;
		}
	case $Const::FLOAD:
		{
			$assign(obj, $new($FLOAD));
			break;
		}
	case $Const::DLOAD:
		{
			$assign(obj, $new($DLOAD));
			break;
		}
	case $Const::ALOAD:
		{
			$assign(obj, $new($ALOAD));
			break;
		}
	case $Const::ILOAD_0:
		{
			$assign(obj, $new($ILOAD, 0));
			break;
		}
	case $Const::ILOAD_1:
		{
			$assign(obj, $new($ILOAD, 1));
			break;
		}
	case $Const::ILOAD_2:
		{
			$assign(obj, $new($ILOAD, 2));
			break;
		}
	case $Const::ILOAD_3:
		{
			$assign(obj, $new($ILOAD, 3));
			break;
		}
	case $Const::LLOAD_0:
		{
			$assign(obj, $new($LLOAD, 0));
			break;
		}
	case $Const::LLOAD_1:
		{
			$assign(obj, $new($LLOAD, 1));
			break;
		}
	case $Const::LLOAD_2:
		{
			$assign(obj, $new($LLOAD, 2));
			break;
		}
	case $Const::LLOAD_3:
		{
			$assign(obj, $new($LLOAD, 3));
			break;
		}
	case $Const::FLOAD_0:
		{
			$assign(obj, $new($FLOAD, 0));
			break;
		}
	case $Const::FLOAD_1:
		{
			$assign(obj, $new($FLOAD, 1));
			break;
		}
	case $Const::FLOAD_2:
		{
			$assign(obj, $new($FLOAD, 2));
			break;
		}
	case $Const::FLOAD_3:
		{
			$assign(obj, $new($FLOAD, 3));
			break;
		}
	case $Const::DLOAD_0:
		{
			$assign(obj, $new($DLOAD, 0));
			break;
		}
	case $Const::DLOAD_1:
		{
			$assign(obj, $new($DLOAD, 1));
			break;
		}
	case $Const::DLOAD_2:
		{
			$assign(obj, $new($DLOAD, 2));
			break;
		}
	case $Const::DLOAD_3:
		{
			$assign(obj, $new($DLOAD, 3));
			break;
		}
	case $Const::ALOAD_0:
		{
			$assign(obj, $new($ALOAD, 0));
			break;
		}
	case $Const::ALOAD_1:
		{
			$assign(obj, $new($ALOAD, 1));
			break;
		}
	case $Const::ALOAD_2:
		{
			$assign(obj, $new($ALOAD, 2));
			break;
		}
	case $Const::ALOAD_3:
		{
			$assign(obj, $new($ALOAD, 3));
			break;
		}
	case $Const::ISTORE:
		{
			$assign(obj, $new($ISTORE));
			break;
		}
	case $Const::LSTORE:
		{
			$assign(obj, $new($LSTORE));
			break;
		}
	case $Const::FSTORE:
		{
			$assign(obj, $new($FSTORE));
			break;
		}
	case $Const::DSTORE:
		{
			$assign(obj, $new($DSTORE));
			break;
		}
	case $Const::ASTORE:
		{
			$assign(obj, $new($ASTORE));
			break;
		}
	case $Const::ISTORE_0:
		{
			$assign(obj, $new($ISTORE, 0));
			break;
		}
	case $Const::ISTORE_1:
		{
			$assign(obj, $new($ISTORE, 1));
			break;
		}
	case $Const::ISTORE_2:
		{
			$assign(obj, $new($ISTORE, 2));
			break;
		}
	case $Const::ISTORE_3:
		{
			$assign(obj, $new($ISTORE, 3));
			break;
		}
	case $Const::LSTORE_0:
		{
			$assign(obj, $new($LSTORE, 0));
			break;
		}
	case $Const::LSTORE_1:
		{
			$assign(obj, $new($LSTORE, 1));
			break;
		}
	case $Const::LSTORE_2:
		{
			$assign(obj, $new($LSTORE, 2));
			break;
		}
	case $Const::LSTORE_3:
		{
			$assign(obj, $new($LSTORE, 3));
			break;
		}
	case $Const::FSTORE_0:
		{
			$assign(obj, $new($FSTORE, 0));
			break;
		}
	case $Const::FSTORE_1:
		{
			$assign(obj, $new($FSTORE, 1));
			break;
		}
	case $Const::FSTORE_2:
		{
			$assign(obj, $new($FSTORE, 2));
			break;
		}
	case $Const::FSTORE_3:
		{
			$assign(obj, $new($FSTORE, 3));
			break;
		}
	case $Const::DSTORE_0:
		{
			$assign(obj, $new($DSTORE, 0));
			break;
		}
	case $Const::DSTORE_1:
		{
			$assign(obj, $new($DSTORE, 1));
			break;
		}
	case $Const::DSTORE_2:
		{
			$assign(obj, $new($DSTORE, 2));
			break;
		}
	case $Const::DSTORE_3:
		{
			$assign(obj, $new($DSTORE, 3));
			break;
		}
	case $Const::ASTORE_0:
		{
			$assign(obj, $new($ASTORE, 0));
			break;
		}
	case $Const::ASTORE_1:
		{
			$assign(obj, $new($ASTORE, 1));
			break;
		}
	case $Const::ASTORE_2:
		{
			$assign(obj, $new($ASTORE, 2));
			break;
		}
	case $Const::ASTORE_3:
		{
			$assign(obj, $new($ASTORE, 3));
			break;
		}
	case $Const::IINC:
		{
			$assign(obj, $new($IINC));
			break;
		}
	case $Const::IFEQ:
		{
			$assign(obj, $new($IFEQ));
			break;
		}
	case $Const::IFNE:
		{
			$assign(obj, $new($IFNE));
			break;
		}
	case $Const::IFLT:
		{
			$assign(obj, $new($IFLT));
			break;
		}
	case $Const::IFGE:
		{
			$assign(obj, $new($IFGE));
			break;
		}
	case $Const::IFGT:
		{
			$assign(obj, $new($IFGT));
			break;
		}
	case $Const::IFLE:
		{
			$assign(obj, $new($IFLE));
			break;
		}
	case $Const::IF_ICMPEQ:
		{
			$assign(obj, $new($IF_ICMPEQ));
			break;
		}
	case $Const::IF_ICMPNE:
		{
			$assign(obj, $new($IF_ICMPNE));
			break;
		}
	case $Const::IF_ICMPLT:
		{
			$assign(obj, $new($IF_ICMPLT));
			break;
		}
	case $Const::IF_ICMPGE:
		{
			$assign(obj, $new($IF_ICMPGE));
			break;
		}
	case $Const::IF_ICMPGT:
		{
			$assign(obj, $new($IF_ICMPGT));
			break;
		}
	case $Const::IF_ICMPLE:
		{
			$assign(obj, $new($IF_ICMPLE));
			break;
		}
	case $Const::IF_ACMPEQ:
		{
			$assign(obj, $new($IF_ACMPEQ));
			break;
		}
	case $Const::IF_ACMPNE:
		{
			$assign(obj, $new($IF_ACMPNE));
			break;
		}
	case $Const::GOTO:
		{
			$assign(obj, $new($GOTO));
			break;
		}
	case $Const::JSR:
		{
			$assign(obj, $new($JSR));
			break;
		}
	case $Const::RET:
		{
			$assign(obj, $new($RET));
			break;
		}
	case $Const::TABLESWITCH:
		{
			$assign(obj, $new($TABLESWITCH));
			break;
		}
	case $Const::LOOKUPSWITCH:
		{
			$assign(obj, $new($LOOKUPSWITCH));
			break;
		}
	case $Const::GETSTATIC:
		{
			$assign(obj, $new($GETSTATIC));
			break;
		}
	case $Const::PUTSTATIC:
		{
			$assign(obj, $new($PUTSTATIC));
			break;
		}
	case $Const::GETFIELD:
		{
			$assign(obj, $new($GETFIELD));
			break;
		}
	case $Const::PUTFIELD:
		{
			$assign(obj, $new($PUTFIELD));
			break;
		}
	case $Const::INVOKEVIRTUAL:
		{
			$assign(obj, $new($INVOKEVIRTUAL));
			break;
		}
	case $Const::INVOKESPECIAL:
		{
			$assign(obj, $new($INVOKESPECIAL));
			break;
		}
	case $Const::INVOKESTATIC:
		{
			$assign(obj, $new($INVOKESTATIC));
			break;
		}
	case $Const::INVOKEINTERFACE:
		{
			$assign(obj, $new($INVOKEINTERFACE));
			break;
		}
	case $Const::INVOKEDYNAMIC:
		{
			$assign(obj, $new($INVOKEDYNAMIC));
			break;
		}
	case $Const::NEW:
		{
			$assign(obj, $new($NEW));
			break;
		}
	case $Const::NEWARRAY:
		{
			$assign(obj, $new($NEWARRAY));
			break;
		}
	case $Const::ANEWARRAY:
		{
			$assign(obj, $new($ANEWARRAY));
			break;
		}
	case $Const::CHECKCAST:
		{
			$assign(obj, $new($CHECKCAST));
			break;
		}
	case $Const::INSTANCEOF:
		{
			$assign(obj, $new($INSTANCEOF));
			break;
		}
	case $Const::MULTIANEWARRAY:
		{
			$assign(obj, $new($MULTIANEWARRAY));
			break;
		}
	case $Const::IFNULL:
		{
			$assign(obj, $new($IFNULL));
			break;
		}
	case $Const::IFNONNULL:
		{
			$assign(obj, $new($IFNONNULL));
			break;
		}
	case $Const::GOTO_W:
		{
			$assign(obj, $new($GOTO_W));
			break;
		}
	case $Const::JSR_W:
		{
			$assign(obj, $new($JSR_W));
			break;
		}
	case $Const::BREAKPOINT:
		{
			$assign(obj, $new($BREAKPOINT));
			break;
		}
	case $Const::IMPDEP1:
		{
			$assign(obj, $new($IMPDEP1));
			break;
		}
	case $Const::IMPDEP2:
		{
			$assign(obj, $new($IMPDEP2));
			break;
		}
	default:
		{
			$throwNew($ClassGenException, $$str({"Illegal opcode detected: "_s, $$str(opcode)}));
		}
	}
	if (wide && !(($instanceOf($LocalVariableInstruction, obj)) || ($instanceOf($IINC, obj)) || ($instanceOf($RET, obj)))) {
		$throwNew($ClassGenException, $$str({"Illegal opcode after wide: "_s, $$str(opcode)}));
	}
	$nc(obj)->setOpcode(opcode);
	obj->initFromFile(bytes, wide);
	return obj;
}

int32_t Instruction::consumeStack($ConstantPoolGen* cpg) {
	return $Const::getConsumeStack(this->opcode);
}

int32_t Instruction::produceStack($ConstantPoolGen* cpg) {
	return $Const::getProduceStack(this->opcode);
}

int16_t Instruction::getOpcode() {
	return this->opcode;
}

int32_t Instruction::getLength() {
	return this->length;
}

void Instruction::setOpcode(int16_t opcode) {
	this->opcode = opcode;
}

void Instruction::setLength(int32_t length) {
	this->length = (int16_t)length;
}

void Instruction::dispose() {
}

$InstructionComparator* Instruction::getComparator() {
	$init(Instruction);
	return Instruction::cmp;
}

void Instruction::setComparator($InstructionComparator* c) {
	$init(Instruction);
	$assignStatic(Instruction::cmp, c);
}

bool Instruction::equals(Object$* that) {
	return ($instanceOf(Instruction, that)) ? $nc(Instruction::cmp)->equals(this, $cast(Instruction, that)) : false;
}

int32_t Instruction::hashCode() {
	return this->opcode;
}

bool Instruction::isValidByte(int32_t value) {
	$init(Instruction);
	return value >= $Byte::MIN_VALUE && value <= $Byte::MAX_VALUE;
}

bool Instruction::isValidShort(int32_t value) {
	$init(Instruction);
	return value >= $Short::MIN_VALUE && value <= $Short::MAX_VALUE;
}

void clinit$Instruction($Class* class$) {
	$init($InstructionComparator);
	$assignStatic(Instruction::cmp, $InstructionComparator::DEFAULT);
}

Instruction::Instruction() {
}

$Class* Instruction::load$($String* name, bool initialize) {
	$loadClass(Instruction, name, initialize, &_Instruction_ClassInfo_, clinit$Instruction, allocate$Instruction);
	return class$;
}

$Class* Instruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com