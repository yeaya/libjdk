#include <com/sun/org/apache/bcel/internal/generic/CASTORE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef CASTORE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ArrayInstruction = ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
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

$MethodInfo _CASTORE_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(CASTORE, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(CASTORE, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CASTORE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.CASTORE",
	"com.sun.org.apache.bcel.internal.generic.ArrayInstruction",
	"com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_CASTORE_MethodInfo_
};

$Object* allocate$CASTORE($Class* clazz) {
	return $of($alloc(CASTORE));
}

$String* CASTORE::toString() {
	 return this->$ArrayInstruction::toString();
}

int32_t CASTORE::consumeStack($ConstantPoolGen* cpg) {
	 return this->$ArrayInstruction::consumeStack(cpg);
}

bool CASTORE::equals(Object$* that) {
	 return this->$ArrayInstruction::equals(that);
}

int32_t CASTORE::hashCode() {
	 return this->$ArrayInstruction::hashCode();
}

$Object* CASTORE::clone() {
	 return this->$ArrayInstruction::clone();
}

void CASTORE::finalize() {
	this->$ArrayInstruction::finalize();
}

void CASTORE::init$() {
	$ArrayInstruction::init$($Const::CASTORE);
}

void CASTORE::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitArrayInstruction(this);
	v->visitCASTORE(this);
}

CASTORE::CASTORE() {
}

$Class* CASTORE::load$($String* name, bool initialize) {
	$loadClass(CASTORE, name, initialize, &_CASTORE_ClassInfo_, allocate$CASTORE);
	return class$;
}

$Class* CASTORE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com