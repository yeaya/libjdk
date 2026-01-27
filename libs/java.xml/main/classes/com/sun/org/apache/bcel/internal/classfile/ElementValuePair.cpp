#include <com/sun/org/apache/bcel/internal/classfile/ElementValuePair.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
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

$FieldInfo _ElementValuePair_FieldInfo_[] = {
	{"elementValue", "Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PRIVATE | $FINAL, $field(ElementValuePair, elementValue)},
	{"constantPool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE | $FINAL, $field(ElementValuePair, constantPool)},
	{"elementNameIndex", "I", nullptr, $PRIVATE | $FINAL, $field(ElementValuePair, elementNameIndex)},
	{}
};

$MethodInfo _ElementValuePair_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/classfile/ElementValue;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(ElementValuePair, init$, void, int32_t, $ElementValue*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PROTECTED, $virtualMethod(ElementValuePair, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getNameIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ElementValuePair, getNameIndex, int32_t)},
	{"getNameString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementValuePair, getNameString, $String*)},
	{"getValue", "()Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PUBLIC | $FINAL, $method(ElementValuePair, getValue, $ElementValue*)},
	{"toShortString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementValuePair, toShortString, $String*)},
	{}
};

$ClassInfo _ElementValuePair_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ElementValuePair",
	"java.lang.Object",
	nullptr,
	_ElementValuePair_FieldInfo_,
	_ElementValuePair_MethodInfo_
};

$Object* allocate$ElementValuePair($Class* clazz) {
	return $of($alloc(ElementValuePair));
}

void ElementValuePair::init$(int32_t elementNameIndex, $ElementValue* elementValue, $ConstantPool* constantPool) {
	$set(this, elementValue, elementValue);
	this->elementNameIndex = elementNameIndex;
	$set(this, constantPool, constantPool);
}

$String* ElementValuePair::getNameString() {
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc(this->constantPool)->getConstant(this->elementNameIndex, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

$ElementValue* ElementValuePair::getValue() {
	return this->elementValue;
}

int32_t ElementValuePair::getNameIndex() {
	return this->elementNameIndex;
}

$String* ElementValuePair::toShortString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, result, $new($StringBuilder));
	result->append($(getNameString()))->append("="_s)->append($($nc($(getValue()))->toShortString()));
	return result->toString();
}

void ElementValuePair::dump($DataOutputStream* dos) {
	$nc(dos)->writeShort(this->elementNameIndex);
	$nc(this->elementValue)->dump(dos);
}

ElementValuePair::ElementValuePair() {
}

$Class* ElementValuePair::load$($String* name, bool initialize) {
	$loadClass(ElementValuePair, name, initialize, &_ElementValuePair_ClassInfo_, allocate$ElementValuePair);
	return class$;
}

$Class* ElementValuePair::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com