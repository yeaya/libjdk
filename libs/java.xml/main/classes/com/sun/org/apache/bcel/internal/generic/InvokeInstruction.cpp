#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantCP.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef INVOKEDYNAMIC
#undef INVOKESTATIC

using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantCP = ::com::sun::org::apache::bcel::internal::classfile::ConstantCP;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$CompoundAttribute _InvokeInstruction_MethodAnnotations_getClassName4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _InvokeInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(InvokeInstruction, init$, void)},
	{"<init>", "(SI)V", nullptr, $PROTECTED, $method(InvokeInstruction, init$, void, int16_t, int32_t)},
	{"consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC, $virtualMethod(InvokeInstruction, consumeStack, int32_t, $ConstantPoolGen*)},
	{"getArgumentTypes", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)[Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(InvokeInstruction, getArgumentTypes, $TypeArray*, $ConstantPoolGen*)},
	{"getClassName", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(InvokeInstruction, getClassName, $String*, $ConstantPoolGen*), nullptr, nullptr, _InvokeInstruction_MethodAnnotations_getClassName4},
	{"getMethodName", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InvokeInstruction, getMethodName, $String*, $ConstantPoolGen*)},
	{"getReturnType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(InvokeInstruction, getReturnType, $Type*, $ConstantPoolGen*)},
	{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(InvokeInstruction, getType, $Type*, $ConstantPoolGen*)},
	{"produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC, $virtualMethod(InvokeInstruction, produceStack, int32_t, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InvokeInstruction, toString, $String*, $ConstantPool*)},
	{}
};

$ClassInfo _InvokeInstruction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.InvokeInstruction",
	"com.sun.org.apache.bcel.internal.generic.FieldOrMethod",
	"com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackConsumer,com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	_InvokeInstruction_MethodInfo_
};

$Object* allocate$InvokeInstruction($Class* clazz) {
	return $of($alloc(InvokeInstruction));
}

$String* InvokeInstruction::toString() {
	 return this->$FieldOrMethod::toString();
}

bool InvokeInstruction::equals(Object$* that) {
	 return this->$FieldOrMethod::equals(that);
}

int32_t InvokeInstruction::hashCode() {
	 return this->$FieldOrMethod::hashCode();
}

$Object* InvokeInstruction::clone() {
	 return this->$FieldOrMethod::clone();
}

void InvokeInstruction::finalize() {
	this->$FieldOrMethod::finalize();
}

void InvokeInstruction::init$() {
	$FieldOrMethod::init$();
}

void InvokeInstruction::init$(int16_t opcode, int32_t index) {
	$FieldOrMethod::init$(opcode, index);
}

$String* InvokeInstruction::toString($ConstantPool* cp) {
	$useLocalCurrentObjectStackCache();
	$var($Constant, c, $nc(cp)->getConstant($FieldOrMethod::getIndex()));
	$var($StringTokenizer, tok, $new($StringTokenizer, $(cp->constantToString(c))));
	$var($String, opcodeName, $Const::getOpcodeName($FieldOrMethod::getOpcode()));
	$var($StringBuilder, sb, $new($StringBuilder, opcodeName));
	if (tok->hasMoreTokens()) {
		sb->append(" "_s);
		sb->append($($nc($(tok->nextToken()))->replace(u'.', u'/')));
		if (tok->hasMoreTokens()) {
			sb->append($(tok->nextToken()));
		}
	}
	return sb->toString();
}

int32_t InvokeInstruction::consumeStack($ConstantPoolGen* cpg) {
	int32_t sum = 0;
	bool var$0 = ($FieldOrMethod::getOpcode() == $Const::INVOKESTATIC);
	if (var$0 || ($FieldOrMethod::getOpcode() == $Const::INVOKEDYNAMIC)) {
		sum = 0;
	} else {
		sum = 1;
	}
	$var($String, signature, getSignature(cpg));
	sum += $Type::getArgumentTypesSize(signature);
	return sum;
}

int32_t InvokeInstruction::produceStack($ConstantPoolGen* cpg) {
	$var($String, signature, getSignature(cpg));
	return $Type::getReturnTypeSize(signature);
}

$String* InvokeInstruction::getClassName($ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPool, cp, $nc(cpg)->getConstantPool());
	$var($ConstantCP, cmr, $cast($ConstantCP, $nc(cp)->getConstant($FieldOrMethod::getIndex())));
	$var($String, className, cp->getConstantString($nc(cmr)->getClassIndex(), $Const::CONSTANT_Class));
	return $nc(className)->replace(u'/', u'.');
}

$Type* InvokeInstruction::getType($ConstantPoolGen* cpg) {
	return getReturnType(cpg);
}

$String* InvokeInstruction::getMethodName($ConstantPoolGen* cpg) {
	return getName(cpg);
}

$Type* InvokeInstruction::getReturnType($ConstantPoolGen* cpg) {
	return $Type::getReturnType($(getSignature(cpg)));
}

$TypeArray* InvokeInstruction::getArgumentTypes($ConstantPoolGen* cpg) {
	return $Type::getArgumentTypes($(getSignature(cpg)));
}

InvokeInstruction::InvokeInstruction() {
}

$Class* InvokeInstruction::load$($String* name, bool initialize) {
	$loadClass(InvokeInstruction, name, initialize, &_InvokeInstruction_ClassInfo_, allocate$InvokeInstruction);
	return class$;
}

$Class* InvokeInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com