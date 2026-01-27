#include <com/sun/org/apache/bcel/internal/classfile/AnnotationDefault.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_ANNOTATION_DEFAULT

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
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
						namespace classfile {

$FieldInfo _AnnotationDefault_FieldInfo_[] = {
	{"defaultValue", "Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PRIVATE, $field(AnnotationDefault, defaultValue)},
	{}
};

$MethodInfo _AnnotationDefault_MethodInfo_[] = {
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(AnnotationDefault, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"<init>", "(IILcom/sun/org/apache/bcel/internal/classfile/ElementValue;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(AnnotationDefault, init$, void, int32_t, int32_t, $ElementValue*, $ConstantPool*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationDefault, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(AnnotationDefault, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AnnotationDefault, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getDefaultValue", "()Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PUBLIC | $FINAL, $method(AnnotationDefault, getDefaultValue, $ElementValue*)},
	{"setDefaultValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;)V", nullptr, $PUBLIC | $FINAL, $method(AnnotationDefault, setDefaultValue, void, $ElementValue*)},
	{}
};

$ClassInfo _AnnotationDefault_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.AnnotationDefault",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_AnnotationDefault_FieldInfo_,
	_AnnotationDefault_MethodInfo_
};

$Object* allocate$AnnotationDefault($Class* clazz) {
	return $of($alloc(AnnotationDefault));
}

void AnnotationDefault::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	AnnotationDefault::init$(name_index, length, ($ElementValue*)nullptr, constant_pool);
	$set(this, defaultValue, $ElementValue::readElementValue(input, constant_pool));
}

void AnnotationDefault::init$(int32_t name_index, int32_t length, $ElementValue* defaultValue, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_ANNOTATION_DEFAULT, name_index, length, constant_pool);
	$set(this, defaultValue, defaultValue);
}

void AnnotationDefault::accept($Visitor* v) {
	$nc(v)->visitAnnotationDefault(this);
}

void AnnotationDefault::setDefaultValue($ElementValue* defaultValue) {
	$set(this, defaultValue, defaultValue);
}

$ElementValue* AnnotationDefault::getDefaultValue() {
	return this->defaultValue;
}

$Attribute* AnnotationDefault::copy($ConstantPool* _constant_pool) {
	return $cast($Attribute, clone());
}

void AnnotationDefault::dump($DataOutputStream* dos) {
	$Attribute::dump(dos);
	$nc(this->defaultValue)->dump(dos);
}

AnnotationDefault::AnnotationDefault() {
}

$Class* AnnotationDefault::load$($String* name, bool initialize) {
	$loadClass(AnnotationDefault, name, initialize, &_AnnotationDefault_ClassInfo_, allocate$AnnotationDefault);
	return class$;
}

$Class* AnnotationDefault::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com