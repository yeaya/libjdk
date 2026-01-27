#include <com/sun/org/apache/bcel/internal/generic/AASTORE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef AASTORE

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

$MethodInfo _AASTORE_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(AASTORE, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(AASTORE, accept, void, $Visitor*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AASTORE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.AASTORE",
	"com.sun.org.apache.bcel.internal.generic.ArrayInstruction",
	"com.sun.org.apache.bcel.internal.generic.StackConsumer",
	nullptr,
	_AASTORE_MethodInfo_
};

$Object* allocate$AASTORE($Class* clazz) {
	return $of($alloc(AASTORE));
}

$String* AASTORE::toString() {
	 return this->$ArrayInstruction::toString();
}

int32_t AASTORE::consumeStack($ConstantPoolGen* cpg) {
	 return this->$ArrayInstruction::consumeStack(cpg);
}

bool AASTORE::equals(Object$* that) {
	 return this->$ArrayInstruction::equals(that);
}

int32_t AASTORE::hashCode() {
	 return this->$ArrayInstruction::hashCode();
}

$Object* AASTORE::clone() {
	 return this->$ArrayInstruction::clone();
}

void AASTORE::finalize() {
	this->$ArrayInstruction::finalize();
}

void AASTORE::init$() {
	$ArrayInstruction::init$($Const::AASTORE);
}

void AASTORE::accept($Visitor* v) {
	$nc(v)->visitStackConsumer(this);
	v->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitArrayInstruction(this);
	v->visitAASTORE(this);
}

AASTORE::AASTORE() {
}

$Class* AASTORE::load$($String* name, bool initialize) {
	$loadClass(AASTORE, name, initialize, &_AASTORE_ClassInfo_, allocate$AASTORE);
	return class$;
}

$Class* AASTORE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com