#include <com/sun/org/apache/bcel/internal/generic/AnnotationElementValueGen.h>

#include <com/sun/org/apache/bcel/internal/classfile/AnnotationElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <com/sun/org/apache/bcel/internal/generic/AnnotationEntryGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

#undef ANNOTATION

using $AnnotationElementValue = ::com::sun::org::apache::bcel::internal::classfile::AnnotationElementValue;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $AnnotationEntryGen = ::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ElementValueGen = ::com::sun::org::apache::bcel::internal::generic::ElementValueGen;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _AnnotationElementValueGen_FieldInfo_[] = {
	{"a", "Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;", nullptr, $PRIVATE | $FINAL, $field(AnnotationElementValueGen, a)},
	{}
};

$MethodInfo _AnnotationElementValueGen_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(AnnotationElementValueGen, init$, void, $AnnotationEntryGen*, $ConstantPoolGen*)},
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(AnnotationElementValueGen, init$, void, int32_t, $AnnotationEntryGen*, $ConstantPoolGen*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationElementValue;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)V", nullptr, $PUBLIC, $method(AnnotationElementValueGen, init$, void, $AnnotationElementValue*, $ConstantPoolGen*, bool)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationElementValueGen, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getAnnotation", "()Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;", nullptr, $PUBLIC, $virtualMethod(AnnotationElementValueGen, getAnnotation, $AnnotationEntryGen*)},
	{"getElementValue", "()Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PUBLIC, $virtualMethod(AnnotationElementValueGen, getElementValue, $ElementValue*)},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotationElementValueGen, stringifyValue, $String*)},
	{}
};

$ClassInfo _AnnotationElementValueGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.AnnotationElementValueGen",
	"com.sun.org.apache.bcel.internal.generic.ElementValueGen",
	nullptr,
	_AnnotationElementValueGen_FieldInfo_,
	_AnnotationElementValueGen_MethodInfo_
};

$Object* allocate$AnnotationElementValueGen($Class* clazz) {
	return $of($alloc(AnnotationElementValueGen));
}

void AnnotationElementValueGen::init$($AnnotationEntryGen* a, $ConstantPoolGen* cpool) {
	$ElementValueGen::init$($ElementValueGen::ANNOTATION, cpool);
	$set(this, a, a);
}

void AnnotationElementValueGen::init$(int32_t type, $AnnotationEntryGen* annotation, $ConstantPoolGen* cpool) {
	$useLocalCurrentObjectStackCache();
	$ElementValueGen::init$(type, cpool);
	if (type != $ElementValueGen::ANNOTATION) {
		$throwNew($IllegalArgumentException, $$str({"Only element values of type annotation can be built with this ctor - type specified: "_s, $$str(type)}));
	}
	$set(this, a, annotation);
}

void AnnotationElementValueGen::init$($AnnotationElementValue* value, $ConstantPoolGen* cpool, bool copyPoolEntries) {
	$ElementValueGen::init$($ElementValueGen::ANNOTATION, cpool);
	$set(this, a, $new($AnnotationEntryGen, $($nc(value)->getAnnotationEntry()), cpool, copyPoolEntries));
}

void AnnotationElementValueGen::dump($DataOutputStream* dos) {
	$nc(dos)->writeByte($ElementValueGen::getElementValueType());
	$nc(this->a)->dump(dos);
}

$String* AnnotationElementValueGen::stringifyValue() {
	$throwNew($UnsupportedOperationException, "Not implemented yet"_s);
	$shouldNotReachHere();
}

$ElementValue* AnnotationElementValueGen::getElementValue() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $ElementValueGen::getElementValueType();
	$var($AnnotationEntry, var$1, $nc(this->a)->getAnnotation());
	return $new($AnnotationElementValue, var$0, var$1, $($nc($(getConstantPool()))->getConstantPool()));
}

$AnnotationEntryGen* AnnotationElementValueGen::getAnnotation() {
	return this->a;
}

AnnotationElementValueGen::AnnotationElementValueGen() {
}

$Class* AnnotationElementValueGen::load$($String* name, bool initialize) {
	$loadClass(AnnotationElementValueGen, name, initialize, &_AnnotationElementValueGen_ClassInfo_, allocate$AnnotationElementValueGen);
	return class$;
}

$Class* AnnotationElementValueGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com