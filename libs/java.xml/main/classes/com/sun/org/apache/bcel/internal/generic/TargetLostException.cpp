#include <com/sun/org/apache/bcel/internal/generic/TargetLostException.h>

#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <jcpp.h>

using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _TargetLostException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TargetLostException, serialVersionUID)},
	{"targets", "[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE | $FINAL, $field(TargetLostException, targets)},
	{}
};

$MethodInfo _TargetLostException_MethodInfo_[] = {
	{"<init>", "([Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Ljava/lang/String;)V", nullptr, 0, $method(TargetLostException, init$, void, $InstructionHandleArray*, $String*)},
	{"getTargets", "()[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $method(TargetLostException, getTargets, $InstructionHandleArray*)},
	{}
};

$ClassInfo _TargetLostException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.TargetLostException",
	"java.lang.Exception",
	nullptr,
	_TargetLostException_FieldInfo_,
	_TargetLostException_MethodInfo_
};

$Object* allocate$TargetLostException($Class* clazz) {
	return $of($alloc(TargetLostException));
}

void TargetLostException::init$($InstructionHandleArray* t, $String* mesg) {
	$Exception::init$(mesg);
	$set(this, targets, t);
}

$InstructionHandleArray* TargetLostException::getTargets() {
	return this->targets;
}

TargetLostException::TargetLostException() {
}

TargetLostException::TargetLostException(const TargetLostException& e) : $Exception(e) {
}

void TargetLostException::throw$() {
	throw *this;
}

$Class* TargetLostException::load$($String* name, bool initialize) {
	$loadClass(TargetLostException, name, initialize, &_TargetLostException_ClassInfo_, allocate$TargetLostException);
	return class$;
}

$Class* TargetLostException::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com