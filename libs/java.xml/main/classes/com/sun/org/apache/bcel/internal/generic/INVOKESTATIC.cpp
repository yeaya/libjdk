#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>

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

#undef EXCS_FIELD_AND_METHOD_RESOLUTION
#undef INCOMPATIBLE_CLASS_CHANGE_ERROR
#undef INVOKESTATIC
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

$MethodInfo _INVOKESTATIC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(INVOKESTATIC, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(INVOKESTATIC, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(INVOKESTATIC, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(INVOKESTATIC, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(INVOKESTATIC, getExceptions, $ClassArray*)},
	{}
};

$ClassInfo _INVOKESTATIC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.INVOKESTATIC",
	"com.sun.org.apache.bcel.internal.generic.InvokeInstruction",
	nullptr,
	nullptr,
	_INVOKESTATIC_MethodInfo_
};

$Object* allocate$INVOKESTATIC($Class* clazz) {
	return $of($alloc(INVOKESTATIC));
}

void INVOKESTATIC::init$() {
	$InvokeInstruction::init$();
}

void INVOKESTATIC::init$(int32_t index) {
	$InvokeInstruction::init$($Const::INVOKESTATIC, index);
}

void INVOKESTATIC::dump($DataOutputStream* out) {
	$nc(out)->writeByte($InvokeInstruction::getOpcode());
	out->writeShort($InvokeInstruction::getIndex());
}

$ClassArray* INVOKESTATIC::getExceptions() {
	$init($ExceptionConst$EXCS);
	$init($ExceptionConst);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_FIELD_AND_METHOD_RESOLUTION, $$new($ClassArray, {
		$ExceptionConst::UNSATISFIED_LINK_ERROR,
		$ExceptionConst::INCOMPATIBLE_CLASS_CHANGE_ERROR
	}));
}

void INVOKESTATIC::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackConsumer(this);
	v->visitStackProducer(this);
	v->visitLoadClass(this);
	v->visitCPInstruction(this);
	v->visitFieldOrMethod(this);
	v->visitInvokeInstruction(this);
	v->visitINVOKESTATIC(this);
}

INVOKESTATIC::INVOKESTATIC() {
}

$Class* INVOKESTATIC::load$($String* name, bool initialize) {
	$loadClass(INVOKESTATIC, name, initialize, &_INVOKESTATIC_ClassInfo_, allocate$INVOKESTATIC);
	return class$;
}

$Class* INVOKESTATIC::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com