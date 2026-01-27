#include <com/sun/org/apache/bcel/internal/generic/LDC.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantFloat.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInteger.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantString.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef CLASS
#undef EXCS_STRING_RESOLUTION
#undef FLOAT
#undef INT
#undef LDC
#undef LDC_W
#undef MAX_BYTE
#undef STRING

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantClass = ::com::sun::org::apache::bcel::internal::classfile::ConstantClass;
using $ConstantFloat = ::com::sun::org::apache::bcel::internal::classfile::ConstantFloat;
using $ConstantInteger = ::com::sun::org::apache::bcel::internal::classfile::ConstantInteger;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantString = ::com::sun::org::apache::bcel::internal::classfile::ConstantString;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $PushInstruction = ::com::sun::org::apache::bcel::internal::generic::PushInstruction;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _LDC_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(LDC, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(LDC, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LDC, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(LDC, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(LDC, getExceptions, $ClassArray*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(LDC, getType, $Type*, $ConstantPoolGen*)},
	{"getValue", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LDC, getValue, $Object*, $ConstantPoolGen*)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(LDC, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"setIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(LDC, setIndex, void, int32_t)},
	{"setSize", "()V", nullptr, $PROTECTED | $FINAL, $method(LDC, setSize, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LDC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LDC",
	"com.sun.org.apache.bcel.internal.generic.CPInstruction",
	"com.sun.org.apache.bcel.internal.generic.PushInstruction,com.sun.org.apache.bcel.internal.generic.ExceptionThrower",
	nullptr,
	_LDC_MethodInfo_
};

$Object* allocate$LDC($Class* clazz) {
	return $of($alloc(LDC));
}

$String* LDC::toString() {
	 return this->$CPInstruction::toString();
}

int32_t LDC::produceStack($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::produceStack(cpg);
}

bool LDC::equals(Object$* that) {
	 return this->$CPInstruction::equals(that);
}

int32_t LDC::hashCode() {
	 return this->$CPInstruction::hashCode();
}

$Object* LDC::clone() {
	 return this->$CPInstruction::clone();
}

void LDC::finalize() {
	this->$CPInstruction::finalize();
}

void LDC::init$() {
	$CPInstruction::init$();
}

void LDC::init$(int32_t index) {
	$CPInstruction::init$($Const::LDC_W, index);
	setSize();
}

void LDC::setSize() {
	if ($CPInstruction::getIndex() <= $Const::MAX_BYTE) {
		$CPInstruction::setOpcode($Const::LDC);
		$CPInstruction::setLength(2);
	} else {
		$CPInstruction::setOpcode($Const::LDC_W);
		$CPInstruction::setLength(3);
	}
}

void LDC::dump($DataOutputStream* out) {
	$nc(out)->writeByte($CPInstruction::getOpcode());
	if ($CPInstruction::getLength() == 2) {
		out->writeByte($CPInstruction::getIndex());
	} else {
		out->writeShort($CPInstruction::getIndex());
	}
}

void LDC::setIndex(int32_t index) {
	$CPInstruction::setIndex(index);
	setSize();
}

void LDC::initFromFile($ByteSequence* bytes, bool wide) {
	$CPInstruction::setLength(2);
	$CPInstruction::setIndex($nc(bytes)->readUnsignedByte());
}

$Object* LDC::getValue($ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	$var($Constant, c, $nc($($nc(cpg)->getConstantPool()))->getConstant($CPInstruction::getIndex()));
	{
		int32_t i = 0;
		int32_t nameIndex = 0;
		switch ($nc(c)->getTag()) {
		case $Const::CONSTANT_String:
			{
				i = $nc(($cast($ConstantString, c)))->getStringIndex();
				$assign(c, $nc($(cpg->getConstantPool()))->getConstant(i));
				return $of($nc(($cast($ConstantUtf8, c)))->getBytes());
			}
		case $Const::CONSTANT_Float:
			{
				return $of($Float::valueOf($nc(($cast($ConstantFloat, c)))->getBytes()));
			}
		case $Const::CONSTANT_Integer:
			{
				return $of($Integer::valueOf($nc(($cast($ConstantInteger, c)))->getBytes()));
			}
		case $Const::CONSTANT_Class:
			{
				nameIndex = $nc(($cast($ConstantClass, c)))->getNameIndex();
				$assign(c, $nc($(cpg->getConstantPool()))->getConstant(nameIndex));
				return $of($new($ObjectType, $($nc(($cast($ConstantUtf8, c)))->getBytes())));
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Unknown or invalid constant type at "_s, $$str($CPInstruction::getIndex())}));
			}
		}
	}
}

$Type* LDC::getType($ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	switch ($nc($($nc($($nc(cpg)->getConstantPool()))->getConstant($CPInstruction::getIndex())))->getTag()) {
	case $Const::CONSTANT_String:
		{
			$init($Type);
			return $Type::STRING;
		}
	case $Const::CONSTANT_Float:
		{
			$init($Type);
			return $Type::FLOAT;
		}
	case $Const::CONSTANT_Integer:
		{
			$init($Type);
			return $Type::INT;
		}
	case $Const::CONSTANT_Class:
		{
			$init($Type);
			return $Type::CLASS;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unknown or invalid constant type at "_s, $$str($CPInstruction::getIndex())}));
		}
	}
}

$ClassArray* LDC::getExceptions() {
	$init($ExceptionConst$EXCS);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_STRING_RESOLUTION, $$new($ClassArray, 0));
}

void LDC::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitPushInstruction(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitCPInstruction(this);
	v->visitLDC(this);
}

LDC::LDC() {
}

$Class* LDC::load$($String* name, bool initialize) {
	$loadClass(LDC, name, initialize, &_LDC_ClassInfo_, allocate$LDC);
	return class$;
}

$Class* LDC::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com