#include <com/sun/org/apache/bcel/internal/classfile/AnnotationElementValue.h>

#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ANNOTATION

using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _AnnotationElementValue_FieldInfo_[] = {
	{"annotationEntry", "Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PRIVATE | $FINAL, $field(AnnotationElementValue, annotationEntry)},
	{}
};

$MethodInfo _AnnotationElementValue_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(AnnotationElementValue, init$, void, int32_t, $AnnotationEntry*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationElementValue, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getAnnotationEntry", "()Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PUBLIC, $virtualMethod(AnnotationElementValue, getAnnotationEntry, $AnnotationEntry*)},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotationElementValue, stringifyValue, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AnnotationElementValue, toString, $String*)},
	{}
};

$ClassInfo _AnnotationElementValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.AnnotationElementValue",
	"com.sun.org.apache.bcel.internal.classfile.ElementValue",
	nullptr,
	_AnnotationElementValue_FieldInfo_,
	_AnnotationElementValue_MethodInfo_
};

$Object* allocate$AnnotationElementValue($Class* clazz) {
	return $of($alloc(AnnotationElementValue));
}

void AnnotationElementValue::init$(int32_t type, $AnnotationEntry* annotationEntry, $ConstantPool* cpool) {
	$useLocalCurrentObjectStackCache();
	$ElementValue::init$(type, cpool);
	if (type != $ElementValue::ANNOTATION) {
		$throwNew($IllegalArgumentException, $$str({"Only element values of type annotation can be built with this ctor - type specified: "_s, $$str(type)}));
	}
	$set(this, annotationEntry, annotationEntry);
}

void AnnotationElementValue::dump($DataOutputStream* dos) {
	$nc(dos)->writeByte($ElementValue::getType());
	$nc(this->annotationEntry)->dump(dos);
}

$String* AnnotationElementValue::stringifyValue() {
	return $nc(this->annotationEntry)->toString();
}

$String* AnnotationElementValue::toString() {
	return stringifyValue();
}

$AnnotationEntry* AnnotationElementValue::getAnnotationEntry() {
	return this->annotationEntry;
}

AnnotationElementValue::AnnotationElementValue() {
}

$Class* AnnotationElementValue::load$($String* name, bool initialize) {
	$loadClass(AnnotationElementValue, name, initialize, &_AnnotationElementValue_ClassInfo_, allocate$AnnotationElementValue);
	return class$;
}

$Class* AnnotationElementValue::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com