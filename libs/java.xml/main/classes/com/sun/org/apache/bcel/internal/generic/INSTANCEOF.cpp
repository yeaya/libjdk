#include <com/sun/org/apache/bcel/internal/generic/INSTANCEOF.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef EXCS_CLASS_AND_INTERFACE_RESOLUTION
#undef INSTANCEOF

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $ArrayType = ::com::sun::org::apache::bcel::internal::generic::ArrayType;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $LoadClass = ::com::sun::org::apache::bcel::internal::generic::LoadClass;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
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

$MethodInfo _INSTANCEOF_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(INSTANCEOF, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(INSTANCEOF, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(INSTANCEOF, accept, void, $Visitor*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(INSTANCEOF, getExceptions, $ClassArray*)},
	{"getLoadClassType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC, $virtualMethod(INSTANCEOF, getLoadClassType, $ObjectType*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _INSTANCEOF_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.INSTANCEOF",
	"com.sun.org.apache.bcel.internal.generic.CPInstruction",
	"com.sun.org.apache.bcel.internal.generic.LoadClass,com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackProducer,com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_INSTANCEOF_MethodInfo_
};

$Object* allocate$INSTANCEOF($Class* clazz) {
	return $of($alloc(INSTANCEOF));
}

$Type* INSTANCEOF::getType($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::getType(cpg);
}

$String* INSTANCEOF::toString() {
	 return this->$CPInstruction::toString();
}

int32_t INSTANCEOF::consumeStack($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::consumeStack(cpg);
}

int32_t INSTANCEOF::produceStack($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::produceStack(cpg);
}

bool INSTANCEOF::equals(Object$* that) {
	 return this->$CPInstruction::equals(that);
}

int32_t INSTANCEOF::hashCode() {
	 return this->$CPInstruction::hashCode();
}

$Object* INSTANCEOF::clone() {
	 return this->$CPInstruction::clone();
}

void INSTANCEOF::finalize() {
	this->$CPInstruction::finalize();
}

void INSTANCEOF::init$() {
	$CPInstruction::init$();
}

void INSTANCEOF::init$(int32_t index) {
	$CPInstruction::init$($Const::INSTANCEOF, index);
}

$ClassArray* INSTANCEOF::getExceptions() {
	$init($ExceptionConst$EXCS);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_CLASS_AND_INTERFACE_RESOLUTION, $$new($ClassArray, 0));
}

$ObjectType* INSTANCEOF::getLoadClassType($ConstantPoolGen* cpg) {
	$var($Type, t, getType(cpg));
	if ($instanceOf($ArrayType, t)) {
		$assign(t, $nc(($cast($ArrayType, t)))->getBasicType());
	}
	return ($instanceOf($ObjectType, t)) ? $cast($ObjectType, t) : ($ObjectType*)nullptr;
}

void INSTANCEOF::accept($Visitor* v) {
	$nc(v)->visitLoadClass(this);
	v->visitExceptionThrower(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitTypedInstruction(this);
	v->visitCPInstruction(this);
	v->visitINSTANCEOF(this);
}

INSTANCEOF::INSTANCEOF() {
}

$Class* INSTANCEOF::load$($String* name, bool initialize) {
	$loadClass(INSTANCEOF, name, initialize, &_INSTANCEOF_ClassInfo_, allocate$INSTANCEOF);
	return class$;
}

$Class* INSTANCEOF::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com