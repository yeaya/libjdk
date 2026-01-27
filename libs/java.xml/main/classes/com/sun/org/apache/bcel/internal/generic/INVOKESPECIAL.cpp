#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>

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
#undef INVOKESPECIAL
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

$MethodInfo _INVOKESPECIAL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(INVOKESPECIAL, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(INVOKESPECIAL, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(INVOKESPECIAL, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(INVOKESPECIAL, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(INVOKESPECIAL, getExceptions, $ClassArray*)},
	{}
};

$ClassInfo _INVOKESPECIAL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.INVOKESPECIAL",
	"com.sun.org.apache.bcel.internal.generic.InvokeInstruction",
	nullptr,
	nullptr,
	_INVOKESPECIAL_MethodInfo_
};

$Object* allocate$INVOKESPECIAL($Class* clazz) {
	return $of($alloc(INVOKESPECIAL));
}

void INVOKESPECIAL::init$() {
	$InvokeInstruction::init$();
}

void INVOKESPECIAL::init$(int32_t index) {
	$InvokeInstruction::init$($Const::INVOKESPECIAL, index);
}

void INVOKESPECIAL::dump($DataOutputStream* out) {
	$nc(out)->writeByte($InvokeInstruction::getOpcode());
	out->writeShort($InvokeInstruction::getIndex());
}

$ClassArray* INVOKESPECIAL::getExceptions() {
	$init($ExceptionConst$EXCS);
	$init($ExceptionConst);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_FIELD_AND_METHOD_RESOLUTION, $$new($ClassArray, {
		$ExceptionConst::NULL_POINTER_EXCEPTION,
		$ExceptionConst::INCOMPATIBLE_CLASS_CHANGE_ERROR,
		$ExceptionConst::ABSTRACT_METHOD_ERROR,
		$ExceptionConst::UNSATISFIED_LINK_ERROR
	}));
}

void INVOKESPECIAL::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackConsumer(this);
	v->visitStackProducer(this);
	v->visitLoadClass(this);
	v->visitCPInstruction(this);
	v->visitFieldOrMethod(this);
	v->visitInvokeInstruction(this);
	v->visitINVOKESPECIAL(this);
}

INVOKESPECIAL::INVOKESPECIAL() {
}

$Class* INVOKESPECIAL::load$($String* name, bool initialize) {
	$loadClass(INVOKESPECIAL, name, initialize, &_INVOKESPECIAL_ClassInfo_, allocate$INVOKESPECIAL);
	return class$;
}

$Class* INVOKESPECIAL::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com