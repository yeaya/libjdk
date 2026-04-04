#include <com/sun/org/apache/bcel/internal/generic/MULTIANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef EXCS_CLASS_AND_INTERFACE_RESOLUTION
#undef ILLEGAL_ACCESS_ERROR
#undef MULTIANEWARRAY
#undef NEGATIVE_ARRAY_SIZE_EXCEPTION

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ArrayType = ::com::sun::org::apache::bcel::internal::generic::ArrayType;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
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

$Type* MULTIANEWARRAY::getType($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::getType(cpg);
}

$String* MULTIANEWARRAY::toString() {
	 return this->$CPInstruction::toString();
}

bool MULTIANEWARRAY::equals(Object$* that) {
	 return this->$CPInstruction::equals(that);
}

int32_t MULTIANEWARRAY::hashCode() {
	 return this->$CPInstruction::hashCode();
}

$Object* MULTIANEWARRAY::clone() {
	 return this->$CPInstruction::clone();
}

void MULTIANEWARRAY::finalize() {
	this->$CPInstruction::finalize();
}

void MULTIANEWARRAY::init$() {
	$CPInstruction::init$();
}

void MULTIANEWARRAY::init$(int32_t index, int16_t dimensions) {
	$useLocalObjectStack();
	$CPInstruction::init$($Const::MULTIANEWARRAY, index);
	if (dimensions < 1) {
		$throwNew($ClassGenException, $$str({"Invalid dimensions value: "_s, $$str(dimensions)}));
	}
	this->dimensions = dimensions;
	$CPInstruction::setLength(4);
}

void MULTIANEWARRAY::dump($DataOutputStream* out) {
	$nc(out)->writeByte($CPInstruction::getOpcode());
	out->writeShort($CPInstruction::getIndex());
	out->writeByte(this->dimensions);
}

void MULTIANEWARRAY::initFromFile($ByteSequence* bytes, bool wide) {
	$CPInstruction::initFromFile(bytes, wide);
	this->dimensions = $nc(bytes)->readByte();
	$CPInstruction::setLength(4);
}

int16_t MULTIANEWARRAY::getDimensions() {
	return this->dimensions;
}

$String* MULTIANEWARRAY::toString(bool verbose) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($CPInstruction::toString(verbose)));
	var$0->append(" "_s);
	var$0->append($CPInstruction::getIndex());
	var$0->append(" "_s);
	var$0->append(this->dimensions);
	return $str(var$0);
}

$String* MULTIANEWARRAY::toString($ConstantPool* cp) {
	$useLocalObjectStack();
	return $str({$($CPInstruction::toString(cp)), " "_s, $$str(this->dimensions)});
}

int32_t MULTIANEWARRAY::consumeStack($ConstantPoolGen* cpg) {
	return this->dimensions;
}

$ClassArray* MULTIANEWARRAY::getExceptions() {
	$init($ExceptionConst$EXCS);
	$init($ExceptionConst);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_CLASS_AND_INTERFACE_RESOLUTION, $$new($ClassArray, {
		$ExceptionConst::ILLEGAL_ACCESS_ERROR,
		$ExceptionConst::NEGATIVE_ARRAY_SIZE_EXCEPTION
	}));
}

$ObjectType* MULTIANEWARRAY::getLoadClassType($ConstantPoolGen* cpg) {
	$var($Type, t, getType(cpg));
	if ($instanceOf($ArrayType, t)) {
		$assign(t, $cast($ArrayType, t)->getBasicType());
	}
	return ($instanceOf($ObjectType, t)) ? $cast($ObjectType, t) : ($ObjectType*)nullptr;
}

void MULTIANEWARRAY::accept($Visitor* v) {
	$nc(v)->visitLoadClass(this);
	v->visitAllocationInstruction(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitCPInstruction(this);
	v->visitMULTIANEWARRAY(this);
}

MULTIANEWARRAY::MULTIANEWARRAY() {
}

$Class* MULTIANEWARRAY::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dimensions", "S", nullptr, $PRIVATE, $field(MULTIANEWARRAY, dimensions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "()V", nullptr, 0, $method(MULTIANEWARRAY, init$, void)},
		{"<init>", "(IS)V", nullptr, $PUBLIC, $method(MULTIANEWARRAY, init$, void, int32_t, int16_t)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(MULTIANEWARRAY, accept, void, $Visitor*)},
		{"consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC, $virtualMethod(MULTIANEWARRAY, consumeStack, int32_t, $ConstantPoolGen*)},
		{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(MULTIANEWARRAY, dump, void, $DataOutputStream*), "java.io.IOException"},
		{"getDimensions", "()S", nullptr, $PUBLIC | $FINAL, $method(MULTIANEWARRAY, getDimensions, int16_t)},
		{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(MULTIANEWARRAY, getExceptions, $ClassArray*)},
		{"getLoadClassType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC, $virtualMethod(MULTIANEWARRAY, getLoadClassType, $ObjectType*, $ConstantPoolGen*)},
		{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(MULTIANEWARRAY, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MULTIANEWARRAY, toString, $String*, bool)},
		{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MULTIANEWARRAY, toString, $String*, $ConstantPool*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.MULTIANEWARRAY",
		"com.sun.org.apache.bcel.internal.generic.CPInstruction",
		"com.sun.org.apache.bcel.internal.generic.LoadClass,com.sun.org.apache.bcel.internal.generic.AllocationInstruction,com.sun.org.apache.bcel.internal.generic.ExceptionThrower",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MULTIANEWARRAY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MULTIANEWARRAY));
	});
	return class$;
}

$Class* MULTIANEWARRAY::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com