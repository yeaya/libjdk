#include <com/sun/org/apache/bcel/internal/generic/FASTORE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef FASTORE

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

$MethodInfo _FASTORE_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(FASTORE, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(FASTORE, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FASTORE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.FASTORE",
	"com.sun.org.apache.bcel.internal.generic.ArrayInstruction",
	"com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_FASTORE_MethodInfo_
};

$Object* allocate$FASTORE($Class* clazz) {
	return $of($alloc(FASTORE));
}

$String* FASTORE::toString() {
	 return this->$ArrayInstruction::toString();
}

int32_t FASTORE::consumeStack($ConstantPoolGen* cpg) {
	 return this->$ArrayInstruction::consumeStack(cpg);
}

bool FASTORE::equals(Object$* that) {
	 return this->$ArrayInstruction::equals(that);
}

int32_t FASTORE::hashCode() {
	 return this->$ArrayInstruction::hashCode();
}

$Object* FASTORE::clone() {
	 return this->$ArrayInstruction::clone();
}

void FASTORE::finalize() {
	this->$ArrayInstruction::finalize();
}

void FASTORE::init$() {
	$ArrayInstruction::init$($Const::FASTORE);
}

void FASTORE::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitArrayInstruction(this);
	v->visitFASTORE(this);
}

FASTORE::FASTORE() {
}

$Class* FASTORE::load$($String* name, bool initialize) {
	$loadClass(FASTORE, name, initialize, &_FASTORE_ClassInfo_, allocate$FASTORE);
	return class$;
}

$Class* FASTORE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com