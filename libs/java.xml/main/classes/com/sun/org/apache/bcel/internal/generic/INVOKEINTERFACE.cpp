#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ABSTRACT_METHOD_ERROR
#undef EXCS_INTERFACE_METHOD_RESOLUTION
#undef ILLEGAL_ACCESS_ERROR
#undef INCOMPATIBLE_CLASS_CHANGE_ERROR
#undef INVOKEINTERFACE
#undef UNSATISFIED_LINK_ERROR

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadClass = ::com::sun::org::apache::bcel::internal::generic::LoadClass;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _INVOKEINTERFACE_FieldInfo_[] = {
	{"nargs", "I", nullptr, $PRIVATE, $field(INVOKEINTERFACE, nargs)},
	{}
};

$MethodInfo _INVOKEINTERFACE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(INVOKEINTERFACE, init$, void)},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(INVOKEINTERFACE, init$, void, int32_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(INVOKEINTERFACE, accept, void, $Visitor*)},
	{"consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC, $virtualMethod(INVOKEINTERFACE, consumeStack, int32_t, $ConstantPoolGen*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(INVOKEINTERFACE, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getCount", "()I", nullptr, $PUBLIC, $method(INVOKEINTERFACE, getCount, int32_t)},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(INVOKEINTERFACE, getExceptions, $ClassArray*)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(INVOKEINTERFACE, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(INVOKEINTERFACE, toString, $String*, $ConstantPool*)},
	{}
};

$ClassInfo _INVOKEINTERFACE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.INVOKEINTERFACE",
	"com.sun.org.apache.bcel.internal.generic.InvokeInstruction",
	nullptr,
	_INVOKEINTERFACE_FieldInfo_,
	_INVOKEINTERFACE_MethodInfo_
};

$Object* allocate$INVOKEINTERFACE($Class* clazz) {
	return $of($alloc(INVOKEINTERFACE));
}

void INVOKEINTERFACE::init$() {
	$InvokeInstruction::init$();
}

void INVOKEINTERFACE::init$(int32_t index, int32_t nargs) {
	$useLocalCurrentObjectStackCache();
	$InvokeInstruction::init$($Const::INVOKEINTERFACE, index);
	$InvokeInstruction::setLength(5);
	if (nargs < 1) {
		$throwNew($ClassGenException, $$str({"Number of arguments must be > 0 "_s, $$str(nargs)}));
	}
	this->nargs = nargs;
}

void INVOKEINTERFACE::dump($DataOutputStream* out) {
	$nc(out)->writeByte($InvokeInstruction::getOpcode());
	out->writeShort($InvokeInstruction::getIndex());
	out->writeByte(this->nargs);
	out->writeByte(0);
}

int32_t INVOKEINTERFACE::getCount() {
	return this->nargs;
}

void INVOKEINTERFACE::initFromFile($ByteSequence* bytes, bool wide) {
	$InvokeInstruction::initFromFile(bytes, wide);
	$InvokeInstruction::setLength(5);
	this->nargs = $nc(bytes)->readUnsignedByte();
	bytes->readByte();
}

$String* INVOKEINTERFACE::toString($ConstantPool* cp) {
	$useLocalCurrentObjectStackCache();
	return $str({$($InvokeInstruction::toString(cp)), " "_s, $$str(this->nargs)});
}

int32_t INVOKEINTERFACE::consumeStack($ConstantPoolGen* cpg) {
	return this->nargs;
}

$ClassArray* INVOKEINTERFACE::getExceptions() {
	$init($ExceptionConst$EXCS);
	$init($ExceptionConst);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_INTERFACE_METHOD_RESOLUTION, $$new($ClassArray, {
		$ExceptionConst::UNSATISFIED_LINK_ERROR,
		$ExceptionConst::ABSTRACT_METHOD_ERROR,
		$ExceptionConst::ILLEGAL_ACCESS_ERROR,
		$ExceptionConst::INCOMPATIBLE_CLASS_CHANGE_ERROR
	}));
}

void INVOKEINTERFACE::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackConsumer(this);
	v->visitStackProducer(this);
	v->visitLoadClass(this);
	v->visitCPInstruction(this);
	v->visitFieldOrMethod(this);
	v->visitInvokeInstruction(this);
	v->visitINVOKEINTERFACE(this);
}

INVOKEINTERFACE::INVOKEINTERFACE() {
}

$Class* INVOKEINTERFACE::load$($String* name, bool initialize) {
	$loadClass(INVOKEINTERFACE, name, initialize, &_INVOKEINTERFACE_ClassInfo_, allocate$INVOKEINTERFACE);
	return class$;
}

$Class* INVOKEINTERFACE::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com