#include <com/sun/org/apache/bcel/internal/generic/LDC2_W.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantDouble.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantLong.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/lang/Number.h>
#include <jcpp.h>

#undef DOUBLE
#undef LDC2_W
#undef LONG

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantDouble = ::com::sun::org::apache::bcel::internal::classfile::ConstantDouble;
using $ConstantLong = ::com::sun::org::apache::bcel::internal::classfile::ConstantLong;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $PushInstruction = ::com::sun::org::apache::bcel::internal::generic::PushInstruction;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _LDC2_W_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(LDC2_W, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(LDC2_W, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LDC2_W, accept, void, $Visitor*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(LDC2_W, getType, $Type*, $ConstantPoolGen*)},
	{"getValue", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/Number;", nullptr, $PUBLIC, $virtualMethod(LDC2_W, getValue, $Number*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LDC2_W_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LDC2_W",
	"com.sun.org.apache.bcel.internal.generic.CPInstruction",
	"com.sun.org.apache.bcel.internal.generic.PushInstruction",
	nullptr,
	_LDC2_W_MethodInfo_
};

$Object* allocate$LDC2_W($Class* clazz) {
	return $of($alloc(LDC2_W));
}

$String* LDC2_W::toString() {
	 return this->$CPInstruction::toString();
}

int32_t LDC2_W::produceStack($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::produceStack(cpg);
}

bool LDC2_W::equals(Object$* that) {
	 return this->$CPInstruction::equals(that);
}

int32_t LDC2_W::hashCode() {
	 return this->$CPInstruction::hashCode();
}

$Object* LDC2_W::clone() {
	 return this->$CPInstruction::clone();
}

void LDC2_W::finalize() {
	this->$CPInstruction::finalize();
}

void LDC2_W::init$() {
	$CPInstruction::init$();
}

void LDC2_W::init$(int32_t index) {
	$CPInstruction::init$($Const::LDC2_W, index);
}

$Type* LDC2_W::getType($ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	switch ($nc($($nc($($nc(cpg)->getConstantPool()))->getConstant($CPInstruction::getIndex())))->getTag()) {
	case $Const::CONSTANT_Long:
		{
			$init($Type);
			return $Type::LONG;
		}
	case $Const::CONSTANT_Double:
		{
			$init($Type);
			return $Type::DOUBLE;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unknown constant type "_s, $$str($CPInstruction::getOpcode())}));
		}
	}
}

$Number* LDC2_W::getValue($ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	$var($Constant, c, $nc($($nc(cpg)->getConstantPool()))->getConstant($CPInstruction::getIndex()));
	switch ($nc(c)->getTag()) {
	case $Const::CONSTANT_Long:
		{
			return $Long::valueOf($nc(($cast($ConstantLong, c)))->getBytes());
		}
	case $Const::CONSTANT_Double:
		{
			return $Double::valueOf($nc(($cast($ConstantDouble, c)))->getBytes());
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unknown or invalid constant type at "_s, $$str($CPInstruction::getIndex())}));
		}
	}
}

void LDC2_W::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitPushInstruction(this);
	v->visitTypedInstruction(this);
	v->visitCPInstruction(this);
	v->visitLDC2_W(this);
}

LDC2_W::LDC2_W() {
}

$Class* LDC2_W::load$($String* name, bool initialize) {
	$loadClass(LDC2_W, name, initialize, &_LDC2_W_ClassInfo_, allocate$LDC2_W);
	return class$;
}

$Class* LDC2_W::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com