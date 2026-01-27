#include <com/sun/org/apache/bcel/internal/generic/INVOKEDYNAMIC.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
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
#undef INVOKEDYNAMIC
#undef UNSATISFIED_LINK_ERROR

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ExceptionConst = ::com::sun::org::apache::bcel::internal::ExceptionConst;
using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $ConstantInvokeDynamic = ::com::sun::org::apache::bcel::internal::classfile::ConstantInvokeDynamic;
using $ConstantNameAndType = ::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadClass = ::com::sun::org::apache::bcel::internal::generic::LoadClass;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$CompoundAttribute _INVOKEDYNAMIC_MethodAnnotations_getClassName4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _INVOKEDYNAMIC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(INVOKEDYNAMIC, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(INVOKEDYNAMIC, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(INVOKEDYNAMIC, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(INVOKEDYNAMIC, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getClassName", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(INVOKEDYNAMIC, getClassName, $String*, $ConstantPoolGen*), nullptr, nullptr, _INVOKEDYNAMIC_MethodAnnotations_getClassName4},
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(INVOKEDYNAMIC, getExceptions, $ClassArray*)},
	{"getReferenceType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/ReferenceType;", nullptr, $PUBLIC, $virtualMethod(INVOKEDYNAMIC, getReferenceType, $ReferenceType*, $ConstantPoolGen*)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(INVOKEDYNAMIC, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(INVOKEDYNAMIC, toString, $String*, $ConstantPool*)},
	{}
};

$ClassInfo _INVOKEDYNAMIC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.INVOKEDYNAMIC",
	"com.sun.org.apache.bcel.internal.generic.InvokeInstruction",
	nullptr,
	nullptr,
	_INVOKEDYNAMIC_MethodInfo_
};

$Object* allocate$INVOKEDYNAMIC($Class* clazz) {
	return $of($alloc(INVOKEDYNAMIC));
}

void INVOKEDYNAMIC::init$() {
	$InvokeInstruction::init$();
}

void INVOKEDYNAMIC::init$(int32_t index) {
	$InvokeInstruction::init$($Const::INVOKEDYNAMIC, index);
}

void INVOKEDYNAMIC::dump($DataOutputStream* out) {
	$nc(out)->writeByte($InvokeInstruction::getOpcode());
	out->writeShort($InvokeInstruction::getIndex());
	out->writeByte(0);
	out->writeByte(0);
}

void INVOKEDYNAMIC::initFromFile($ByteSequence* bytes, bool wide) {
	$InvokeInstruction::initFromFile(bytes, wide);
	$InvokeInstruction::setLength(5);
	$nc(bytes)->readByte();
	bytes->readByte();
}

$String* INVOKEDYNAMIC::toString($ConstantPool* cp) {
	return $InvokeInstruction::toString(cp);
}

$ClassArray* INVOKEDYNAMIC::getExceptions() {
	$init($ExceptionConst$EXCS);
	$init($ExceptionConst);
	return $ExceptionConst::createExceptions($ExceptionConst$EXCS::EXCS_INTERFACE_METHOD_RESOLUTION, $$new($ClassArray, {
		$ExceptionConst::UNSATISFIED_LINK_ERROR,
		$ExceptionConst::ABSTRACT_METHOD_ERROR,
		$ExceptionConst::ILLEGAL_ACCESS_ERROR,
		$ExceptionConst::INCOMPATIBLE_CLASS_CHANGE_ERROR
	}));
}

void INVOKEDYNAMIC::accept($Visitor* v) {
	$nc(v)->visitExceptionThrower(this);
	v->visitTypedInstruction(this);
	v->visitStackConsumer(this);
	v->visitStackProducer(this);
	v->visitLoadClass(this);
	v->visitCPInstruction(this);
	v->visitFieldOrMethod(this);
	v->visitInvokeInstruction(this);
	v->visitINVOKEDYNAMIC(this);
}

$String* INVOKEDYNAMIC::getClassName($ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPool, cp, $nc(cpg)->getConstantPool());
	$var($ConstantInvokeDynamic, cid, $cast($ConstantInvokeDynamic, $nc(cp)->getConstant($InvokeInstruction::getIndex(), $Const::CONSTANT_InvokeDynamic)));
	return $nc(($cast($ConstantNameAndType, $(cp->getConstant($nc(cid)->getNameAndTypeIndex())))))->getName(cp);
}

$ReferenceType* INVOKEDYNAMIC::getReferenceType($ConstantPoolGen* cpg) {
	return $new($ObjectType, $($Object::class$->getName()));
}

INVOKEDYNAMIC::INVOKEDYNAMIC() {
}

$Class* INVOKEDYNAMIC::load$($String* name, bool initialize) {
	$loadClass(INVOKEDYNAMIC, name, initialize, &_INVOKEDYNAMIC_ClassInfo_, allocate$INVOKEDYNAMIC);
	return class$;
}

$Class* INVOKEDYNAMIC::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com