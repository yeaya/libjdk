#include <com/sun/org/apache/bcel/internal/generic/NEW.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/AllocationInstruction.h>
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

#undef EXCS_CLASS_AND_INTERFACE_RESOLUTION
#undef ILLEGAL_ACCESS_ERROR
#undef INSTANTIATION_ERROR
#undef NEW

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $AllocationInstruction = ::com::sun::org::apache::bcel::internal::generic::AllocationInstruction;
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

$MethodInfo _NEW_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(NEW, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(NEW, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(NEW, accept, void, $Visitor*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(NEW, getExceptions, $ClassArray*)},
	{"getLoadClassType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC, $virtualMethod(NEW, getLoadClassType, $ObjectType*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NEW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.NEW",
	"com.sun.org.apache.bcel.internal.generic.CPInstruction",
	"com.sun.org.apache.bcel.internal.generic.LoadClass,com.sun.org.apache.bcel.internal.generic.AllocationInstruction,com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	_NEW_MethodInfo_
};

$Object* allocate$NEW($Class* clazz) {
	return $of($alloc(NEW));
}

$Type* NEW::getType($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::getType(cpg);
}

$String* NEW::toString() {
	 return this->$CPInstruction::toString();
}

int32_t NEW::produceStack($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::produceStack(cpg);
}

bool NEW::equals(Object$* that) {
	 return this->$CPInstruction::equals(that);
}

int32_t NEW::hashCode() {
	 return this->$CPInstruction::hashCode();
}

$Object* NEW::clone() {
	 return this->$CPInstruction::clone();
}

void NEW::finalize() {
	this->$CPInstruction::finalize();
}

void NEW::init$() {
	$CPInstruction::init$();
}

void NEW::init$(int32_t index) {
	$CPInstruction::init$($Const::NEW, index);
}

$ClassArray* NEW::getExceptions() {
	$init($ExceptionConst$EXCS);
	$init($ExceptionConst);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_CLASS_AND_INTERFACE_RESOLUTION, $$new($ClassArray, {
		$ExceptionConst::ILLEGAL_ACCESS_ERROR,
		$ExceptionConst::INSTANTIATION_ERROR
	}));
}

$ObjectType* NEW::getLoadClassType($ConstantPoolGen* cpg) {
	return $cast($ObjectType, getType(cpg));
}

void NEW::accept($Visitor* v) {
	$nc(v)->visitLoadClass(this);
	v->visitAllocationInstruction(this);
	v->visitExceptionThrower(this);
	v->visitStackProducer(this);
	v->visitTypedInstruction(this);
	v->visitCPInstruction(this);
	v->visitNEW(this);
}

NEW::NEW() {
}

$Class* NEW::load$($String* name, bool initialize) {
	$loadClass(NEW, name, initialize, &_NEW_ClassInfo_, allocate$NEW);
	return class$;
}

$Class* NEW::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com