#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ABSTRACT_METHOD_ERROR
#undef EXCS_FIELD_AND_METHOD_RESOLUTION
#undef INCOMPATIBLE_CLASS_CHANGE_ERROR
#undef INVOKEVIRTUAL
#undef NULL_POINTER_EXCEPTION
#undef UNSATISFIED_LINK_ERROR

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadClass = ::com::sun::org::apache::bcel::internal::generic::LoadClass;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _INVOKEVIRTUAL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(INVOKEVIRTUAL, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(INVOKEVIRTUAL, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(INVOKEVIRTUAL, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(INVOKEVIRTUAL, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(INVOKEVIRTUAL, getExceptions, $ClassArray*)},
	{}
};

$ClassInfo _INVOKEVIRTUAL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.INVOKEVIRTUAL",
	"com.sun.org.apache.bcel.internal.generic.InvokeInstruction",
	nullptr,
	nullptr,
	_INVOKEVIRTUAL_MethodInfo_
};

$Object* allocate$INVOKEVIRTUAL($Class* clazz) {
	return $of($alloc(INVOKEVIRTUAL));
}

void INVOKEVIRTUAL::init$() {
	$InvokeInstruction::init$();
}

void INVOKEVIRTUAL::init$(int32_t index) {
	$InvokeInstruction::init$($Const::INVOKEVIRTUAL, index);
}

void INVOKEVIRTUAL::dump($DataOutputStream* out) {
	$nc(out)->writeByte($InvokeInstruction::getOpcode());
	out->writeShort($InvokeInstruction::getIndex());
}

$ClassArray* INVOKEVIRTUAL::getExceptions() {
	$init($ExceptionConst$EXCS);
	$init($ExceptionConst);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_FIELD_AND_METHOD_RESOLUTION, $$new($ClassArray, {
		$ExceptionConst::NULL_POINTER_EXCEPTION,
		$ExceptionConst::INCOMPATIBLE_CLASS_CHANGE_ERROR,
		$ExceptionConst::ABSTRACT_METHOD_ERROR,
		$ExceptionConst::UNSATISFIED_LINK_ERROR
	}));
}

void INVOKEVIRTUAL::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackConsumer(this);
	v->visitStackProducer(this);
	v->visitLoadClass(this);
	v->visitCPInstruction(this);
	v->visitFieldOrMethod(this);
	v->visitInvokeInstruction(this);
	v->visitINVOKEVIRTUAL(this);
}

INVOKEVIRTUAL::INVOKEVIRTUAL() {
}

$Class* INVOKEVIRTUAL::load$($String* name, bool initialize) {
	$loadClass(INVOKEVIRTUAL, name, initialize, &_INVOKEVIRTUAL_ClassInfo_, allocate$INVOKEVIRTUAL);
	return class$;
}

$Class* INVOKEVIRTUAL::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com