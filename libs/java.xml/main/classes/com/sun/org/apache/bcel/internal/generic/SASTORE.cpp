#include <com/sun/org/apache/bcel/internal/generic/SASTORE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef SASTORE

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

$MethodInfo _SASTORE_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SASTORE, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(SASTORE, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SASTORE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.SASTORE",
	"com.sun.org.apache.bcel.internal.generic.ArrayInstruction",
	"com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_SASTORE_MethodInfo_
};

$Object* allocate$SASTORE($Class* clazz) {
	return $of($alloc(SASTORE));
}

$String* SASTORE::toString() {
	 return this->$ArrayInstruction::toString();
}

int32_t SASTORE::consumeStack($ConstantPoolGen* cpg) {
	 return this->$ArrayInstruction::consumeStack(cpg);
}

bool SASTORE::equals(Object$* that) {
	 return this->$ArrayInstruction::equals(that);
}

int32_t SASTORE::hashCode() {
	 return this->$ArrayInstruction::hashCode();
}

$Object* SASTORE::clone() {
	 return this->$ArrayInstruction::clone();
}

void SASTORE::finalize() {
	this->$ArrayInstruction::finalize();
}

void SASTORE::init$() {
	$ArrayInstruction::init$($Const::SASTORE);
}

void SASTORE::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitArrayInstruction(this);
	v->visitSASTORE(this);
}

SASTORE::SASTORE() {
}

$Class* SASTORE::load$($String* name, bool initialize) {
	$loadClass(SASTORE, name, initialize, &_SASTORE_ClassInfo_, allocate$SASTORE);
	return class$;
}

$Class* SASTORE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com