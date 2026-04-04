#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

void FieldInstruction::init$() {
	$FieldOrMethod::init$();
}

void FieldInstruction::init$(int16_t opcode, int32_t index) {
	$FieldOrMethod::init$(opcode, index);
}

$String* FieldInstruction::toString($ConstantPool* cp) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($Const::getOpcodeName($FieldOrMethod::getOpcode())));
	var$0->append(" "_s);
	var$0->append($($nc(cp)->constantToString($FieldOrMethod::getIndex(), $Const::CONSTANT_Fieldref)));
	return $str(var$0);
}

int32_t FieldInstruction::getFieldSize($ConstantPoolGen* cpg) {
	return $Type::size($Type::getTypeSize($(getSignature(cpg))));
}

$Type* FieldInstruction::getType($ConstantPoolGen* cpg) {
	return getFieldType(cpg);
}

$Type* FieldInstruction::getFieldType($ConstantPoolGen* cpg) {
	return $Type::getType($(getSignature(cpg)));
}

$String* FieldInstruction::getFieldName($ConstantPoolGen* cpg) {
	return getName(cpg);
}

FieldInstruction::FieldInstruction() {
}

$Class* FieldInstruction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FieldInstruction, init$, void)},
		{"<init>", "(SI)V", nullptr, $PROTECTED, $method(FieldInstruction, init$, void, int16_t, int32_t)},
		{"getFieldName", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FieldInstruction, getFieldName, $String*, $ConstantPoolGen*)},
		{"getFieldSize", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PROTECTED, $virtualMethod(FieldInstruction, getFieldSize, int32_t, $ConstantPoolGen*)},
		{"getFieldType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(FieldInstruction, getFieldType, $Type*, $ConstantPoolGen*)},
		{"getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(FieldInstruction, getType, $Type*, $ConstantPoolGen*)},
		{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FieldInstruction, toString, $String*, $ConstantPool*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.FieldInstruction",
		"com.sun.org.apache.bcel.internal.generic.FieldOrMethod",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FieldInstruction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FieldInstruction));
	});
	return class$;
}

$Class* FieldInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com