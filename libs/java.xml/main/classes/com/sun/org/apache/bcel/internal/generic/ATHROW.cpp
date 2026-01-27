#include <com/sun/org/apache/bcel/internal/generic/ATHROW.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/UnconditionalBranch.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef ATHROW
#undef THROWABLE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $UnconditionalBranch = ::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch;
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

$MethodInfo _ATHROW_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ATHROW, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ATHROW, accept, void, $Visitor*)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ATHROW, getExceptions, $ClassArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ATHROW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ATHROW",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	"com.sun.org.apache.bcel.internal.generic.UnconditionalBranch,com.sun.org.apache.bcel.internal.generic.ExceptionThrower",
	nullptr,
	_ATHROW_MethodInfo_
};

$Object* allocate$ATHROW($Class* clazz) {
	return $of($alloc(ATHROW));
}

$String* ATHROW::toString() {
	 return this->$Instruction::toString();
}

bool ATHROW::equals(Object$* that) {
	 return this->$Instruction::equals(that);
}

int32_t ATHROW::hashCode() {
	 return this->$Instruction::hashCode();
}

$Object* ATHROW::clone() {
	 return this->$Instruction::clone();
}

void ATHROW::finalize() {
	this->$Instruction::finalize();
}

void ATHROW::init$() {
	$Instruction::init$($Const::ATHROW, (int16_t)1);
}

$ClassArray* ATHROW::getExceptions() {
	$init($ExceptionConst);
	return $new($ClassArray, {$ExceptionConst::THROWABLE});
}

void ATHROW::accept($Visitor* v) {
	$nc(v)->visitUnconditionalBranch(this);
	v->visitExceptionThrower(this);
	v->visitATHROW(this);
}

ATHROW::ATHROW() {
}

$Class* ATHROW::load$($String* name, bool initialize) {
	$loadClass(ATHROW, name, initialize, &_ATHROW_ClassInfo_, allocate$ATHROW);
	return class$;
}

$Class* ATHROW::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com