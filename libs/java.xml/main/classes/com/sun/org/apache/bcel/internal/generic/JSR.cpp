#include <com/sun/org/apache/bcel/internal/generic/JSR.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/JsrInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/VariableLengthInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef JSR
#undef JSR_W
#undef MAX_VALUE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $JsrInstruction = ::com::sun::org::apache::bcel::internal::generic::JsrInstruction;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $VariableLengthInstruction = ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _JSR_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(JSR, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(JSR, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(JSR, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(JSR, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updatePosition", "(II)I", nullptr, $PROTECTED, $virtualMethod(JSR, updatePosition, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _JSR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.JSR",
	"com.sun.org.apache.bcel.internal.generic.JsrInstruction",
	"com.sun.org.apache.bcel.internal.generic.VariableLengthInstruction",
	nullptr,
	_JSR_MethodInfo_
};

$Object* allocate$JSR($Class* clazz) {
	return $of($alloc(JSR));
}

$String* JSR::toString() {
	 return this->$JsrInstruction::toString();
}

bool JSR::equals(Object$* that) {
	 return this->$JsrInstruction::equals(that);
}

int32_t JSR::hashCode() {
	 return this->$JsrInstruction::hashCode();
}

$Object* JSR::clone() {
	 return this->$JsrInstruction::clone();
}

void JSR::finalize() {
	this->$JsrInstruction::finalize();
}

void JSR::init$() {
	$JsrInstruction::init$();
}

void JSR::init$($InstructionHandle* target) {
	$JsrInstruction::init$($Const::JSR, target);
}

void JSR::dump($DataOutputStream* out) {
	$JsrInstruction::setIndex(getTargetOffset());
	if ($JsrInstruction::getOpcode() == $Const::JSR) {
		$JsrInstruction::dump(out);
	} else {
		$JsrInstruction::setIndex(getTargetOffset());
		$nc(out)->writeByte($JsrInstruction::getOpcode());
		out->writeInt($JsrInstruction::getIndex());
	}
}

int32_t JSR::updatePosition(int32_t offset, int32_t max_offset) {
	int32_t i = getTargetOffset();
	setPosition(getPosition() + offset);
	if ($Math::abs(i) >= ($Short::MAX_VALUE - max_offset)) {
		$JsrInstruction::setOpcode($Const::JSR_W);
		int16_t old_length = (int16_t)$JsrInstruction::getLength();
		$JsrInstruction::setLength(5);
		return $JsrInstruction::getLength() - old_length;
	}
	return 0;
}

void JSR::accept($Visitor* v) {
	$nc(v)->visitStackProducer(this);
	v->visitVariableLengthInstruction(this);
	v->visitBranchInstruction(this);
	v->visitJsrInstruction(this);
	v->visitJSR(this);
}

JSR::JSR() {
}

$Class* JSR::load$($String* name, bool initialize) {
	$loadClass(JSR, name, initialize, &_JSR_ClassInfo_, allocate$JSR);
	return class$;
}

$Class* JSR::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com