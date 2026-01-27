#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantCP.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantCP = ::com::sun::org::apache::bcel::internal::classfile::ConstantCP;
using $ConstantNameAndType = ::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ArrayType = ::com::sun::org::apache::bcel::internal::generic::ArrayType;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
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

$CompoundAttribute _FieldOrMethod_MethodAnnotations_getClassName2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _FieldOrMethod_MethodAnnotations_getClassType3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _FieldOrMethod_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(FieldOrMethod, init$, void)},
	{"<init>", "(SI)V", nullptr, $PROTECTED, $method(FieldOrMethod, init$, void, int16_t, int32_t)},
	{"getClassName", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(FieldOrMethod, getClassName, $String*, $ConstantPoolGen*), nullptr, nullptr, _FieldOrMethod_MethodAnnotations_getClassName2},
	{"getClassType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(FieldOrMethod, getClassType, $ObjectType*, $ConstantPoolGen*), nullptr, nullptr, _FieldOrMethod_MethodAnnotations_getClassType3},
	{"getLoadClassType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC, $virtualMethod(FieldOrMethod, getLoadClassType, $ObjectType*, $ConstantPoolGen*)},
	{"getName", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FieldOrMethod, getName, $String*, $ConstantPoolGen*)},
	{"getReferenceType", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/ReferenceType;", nullptr, $PUBLIC, $virtualMethod(FieldOrMethod, getReferenceType, $ReferenceType*, $ConstantPoolGen*)},
	{"getSignature", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FieldOrMethod, getSignature, $String*, $ConstantPoolGen*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FieldOrMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.FieldOrMethod",
	"com.sun.org.apache.bcel.internal.generic.CPInstruction",
	"com.sun.org.apache.bcel.internal.generic.LoadClass",
	nullptr,
	_FieldOrMethod_MethodInfo_
};

$Object* allocate$FieldOrMethod($Class* clazz) {
	return $of($alloc(FieldOrMethod));
}

$Type* FieldOrMethod::getType($ConstantPoolGen* cpg) {
	 return this->$CPInstruction::getType(cpg);
}

$String* FieldOrMethod::toString() {
	 return this->$CPInstruction::toString();
}

bool FieldOrMethod::equals(Object$* that) {
	 return this->$CPInstruction::equals(that);
}

int32_t FieldOrMethod::hashCode() {
	 return this->$CPInstruction::hashCode();
}

$Object* FieldOrMethod::clone() {
	 return this->$CPInstruction::clone();
}

void FieldOrMethod::finalize() {
	this->$CPInstruction::finalize();
}

void FieldOrMethod::init$() {
	$CPInstruction::init$();
}

void FieldOrMethod::init$(int16_t opcode, int32_t index) {
	$CPInstruction::init$(opcode, index);
}

$String* FieldOrMethod::getSignature($ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPool, cp, $nc(cpg)->getConstantPool());
	$var($ConstantCP, cmr, $cast($ConstantCP, $nc(cp)->getConstant($CPInstruction::getIndex())));
	$var($ConstantNameAndType, cnat, $cast($ConstantNameAndType, cp->getConstant($nc(cmr)->getNameAndTypeIndex())));
	return $nc(($cast($ConstantUtf8, $(cp->getConstant($nc(cnat)->getSignatureIndex())))))->getBytes();
}

$String* FieldOrMethod::getName($ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPool, cp, $nc(cpg)->getConstantPool());
	$var($ConstantCP, cmr, $cast($ConstantCP, $nc(cp)->getConstant($CPInstruction::getIndex())));
	$var($ConstantNameAndType, cnat, $cast($ConstantNameAndType, cp->getConstant($nc(cmr)->getNameAndTypeIndex())));
	return $nc(($cast($ConstantUtf8, $(cp->getConstant($nc(cnat)->getNameIndex())))))->getBytes();
}

$String* FieldOrMethod::getClassName($ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPool, cp, $nc(cpg)->getConstantPool());
	$var($ConstantCP, cmr, $cast($ConstantCP, $nc(cp)->getConstant($CPInstruction::getIndex())));
	$var($String, className, cp->getConstantString($nc(cmr)->getClassIndex(), $Const::CONSTANT_Class));
	if ($nc(className)->startsWith("["_s)) {
		return "java.lang.Object"_s;
	}
	return $nc(className)->replace(u'/', u'.');
}

$ObjectType* FieldOrMethod::getClassType($ConstantPoolGen* cpg) {
	return $ObjectType::getInstance($(getClassName(cpg)));
}

$ReferenceType* FieldOrMethod::getReferenceType($ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPool, cp, $nc(cpg)->getConstantPool());
	$var($ConstantCP, cmr, $cast($ConstantCP, $nc(cp)->getConstant($CPInstruction::getIndex())));
	$var($String, className, cp->getConstantString($nc(cmr)->getClassIndex(), $Const::CONSTANT_Class));
	if ($nc(className)->startsWith("["_s)) {
		return $cast($ArrayType, $Type::getType(className));
	}
	$assign(className, $nc(className)->replace(u'/', u'.'));
	return $ObjectType::getInstance(className);
}

$ObjectType* FieldOrMethod::getLoadClassType($ConstantPoolGen* cpg) {
	$useLocalCurrentObjectStackCache();
	$var($ReferenceType, rt, getReferenceType(cpg));
	if ($instanceOf($ObjectType, rt)) {
		return $cast($ObjectType, rt);
	}
	$var($String, var$1, $$str({$($nc($of(rt))->getClass()->getCanonicalName()), " "_s}));
	$var($String, var$0, $$concat(var$1, $(rt->getSignature())));
	$throwNew($ClassGenException, $$concat(var$0, " does not represent an ObjectType"_s));
}

FieldOrMethod::FieldOrMethod() {
}

$Class* FieldOrMethod::load$($String* name, bool initialize) {
	$loadClass(FieldOrMethod, name, initialize, &_FieldOrMethod_ClassInfo_, allocate$FieldOrMethod);
	return class$;
}

$Class* FieldOrMethod::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com