#include <com/sun/org/apache/bcel/internal/generic/ANEWARRAY.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/AllocationInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef ANEWARRAY
#undef EXCS_CLASS_AND_INTERFACE_RESOLUTION
#undef NEGATIVE_ARRAY_SIZE_EXCEPTION

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $AllocationInstruction = ::com::sun::org::apache::bcel::internal::generic::AllocationInstruction;
using $ArrayType = ::com::sun::org::apache::bcel::internal::generic::ArrayType;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $LoadClass = ::com::sun::org::apache::bcel::internal::generic::LoadClass;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _ANEWARRAY_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(ANEWARRAY, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(ANEWARRAY, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ANEWARRAY, accept, void, $Visitor*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ANEWARRAY, getExceptions, $ClassArray*)},
	{"getLoadClassType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC, $virtualMethod(ANEWARRAY, getLoadClassType, $ObjectType*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ANEWARRAY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ANEWARRAY",
	"com.sun.org.apache.bcel.internal.generic.CPInstruction",
	"com.sun.org.apache.bcel.internal.generic.LoadClass,com.sun.org.apache.bcel.internal.generic.AllocationInstruction,com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackConsumer,com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	_ANEWARRAY_MethodInfo_
};

$Object* allocate$ANEWARRAY($Class* clazz) {
	return $of($alloc(ANEWARRAY));
}

$Type* ANEWARRAY::getType($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::getType(cpg);
}

$String* ANEWARRAY::toString() {
	 return this->$CPInstruction::toString();
}

int32_t ANEWARRAY::consumeStack($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::consumeStack(cpg);
}

int32_t ANEWARRAY::produceStack($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::produceStack(cpg);
}

bool ANEWARRAY::equals(Object$* that) {
	 return this->$CPInstruction::equals(that);
}

int32_t ANEWARRAY::hashCode() {
	 return this->$CPInstruction::hashCode();
}

$Object* ANEWARRAY::clone() {
	 return this->$CPInstruction::clone();
}

void ANEWARRAY::finalize() {
	this->$CPInstruction::finalize();
}

void ANEWARRAY::init$() {
	$CPInstruction::init$();
}

void ANEWARRAY::init$(int32_t index) {
	$CPInstruction::init$($Const::ANEWARRAY, index);
}

$ClassArray* ANEWARRAY::getExceptions() {
	$init($ExceptionConst$EXCS);
	$init($ExceptionConst);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_CLASS_AND_INTERFACE_RESOLUTION, $$new($ClassArray, {$ExceptionConst::NEGATIVE_ARRAY_SIZE_EXCEPTION}));
}

void ANEWARRAY::accept($Visitor* v) {
	$nc(v)->visitLoadClass(this);
	v->visitAllocationInstruction(this);
	v->visitExceptionThrower(this);
	v->visitStackProducer(this);
	v->visitTypedInstruction(this);
	v->visitCPInstruction(this);
	v->visitANEWARRAY(this);
}

$ObjectType* ANEWARRAY::getLoadClassType($ConstantPoolGen* cpg) {
	$var($Type, t, getType(cpg));
	if ($instanceOf($ArrayType, t)) {
		$assign(t, $nc(($cast($ArrayType, t)))->getBasicType());
	}
	return ($instanceOf($ObjectType, t)) ? $cast($ObjectType, t) : ($ObjectType*)nullptr;
}

ANEWARRAY::ANEWARRAY() {
}

$Class* ANEWARRAY::load$($String* name, bool initialize) {
	$loadClass(ANEWARRAY, name, initialize, &_ANEWARRAY_ClassInfo_, allocate$ANEWARRAY);
	return class$;
}

$Class* ANEWARRAY::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com