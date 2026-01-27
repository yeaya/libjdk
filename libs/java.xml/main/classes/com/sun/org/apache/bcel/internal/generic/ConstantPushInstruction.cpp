#include <com/sun/org/apache/bcel/internal/generic/ConstantPushInstruction.h>

#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <java/lang/Number.h>
#include <jcpp.h>

using $PushInstruction = ::com::sun::org::apache::bcel::internal::generic::PushInstruction;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _ConstantPushInstruction_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getValue", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConstantPushInstruction, getValue, $Number*)},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConstantPushInstruction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.ConstantPushInstruction",
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.PushInstruction,com.sun.org.apache.bcel.internal.generic.TypedInstruction",
	nullptr,
	_ConstantPushInstruction_MethodInfo_
};

$Object* allocate$ConstantPushInstruction($Class* clazz) {
	return $of($alloc(ConstantPushInstruction));
}

int32_t ConstantPushInstruction::hashCode() {
	 return this->$PushInstruction::hashCode();
}

bool ConstantPushInstruction::equals(Object$* arg0) {
	 return this->$PushInstruction::equals(arg0);
}

$Object* ConstantPushInstruction::clone() {
	 return this->$PushInstruction::clone();
}

$String* ConstantPushInstruction::toString() {
	 return this->$PushInstruction::toString();
}

void ConstantPushInstruction::finalize() {
	this->$PushInstruction::finalize();
}

$Class* ConstantPushInstruction::load$($String* name, bool initialize) {
	$loadClass(ConstantPushInstruction, name, initialize, &_ConstantPushInstruction_ClassInfo_, allocate$ConstantPushInstruction);
	return class$;
}

$Class* ConstantPushInstruction::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com