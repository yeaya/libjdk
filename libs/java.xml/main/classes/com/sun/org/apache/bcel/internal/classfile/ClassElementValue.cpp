#include <com/sun/org/apache/bcel/internal/classfile/ClassElementValue.h>

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

$FieldInfo _ClassElementValue_FieldInfo_[] = {
	{"idx", "I", nullptr, $PRIVATE | $FINAL, $field(ClassElementValue, idx)},
	{}
};

$MethodInfo _ClassElementValue_MethodInfo_[] = {
	{"<init>", "(IILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(ClassElementValue, init$, void, int32_t, int32_t, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ClassElementValue, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getClassString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassElementValue, getClassString, $String*)},
	{"getIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ClassElementValue, getIndex, int32_t)},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassElementValue, stringifyValue, $String*)},
	{}
};

$ClassInfo _ClassElementValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ClassElementValue",
	"com.sun.org.apache.bcel.internal.classfile.ElementValue",
	nullptr,
	_ClassElementValue_FieldInfo_,
	_ClassElementValue_MethodInfo_
};

$Object* allocate$ClassElementValue($Class* clazz) {
	return $of($alloc(ClassElementValue));
}

void ClassElementValue::init$(int32_t type, int32_t idx, $ConstantPool* cpool) {
	$ElementValue::init$(type, cpool);
	this->idx = idx;
}

int32_t ClassElementValue::getIndex() {
	return this->idx;
}

$String* ClassElementValue::getClassString() {
	$useLocalCurrentObjectStackCache();
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc($($ElementValue::getConstantPool()))->getConstant(this->idx, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

$String* ClassElementValue::stringifyValue() {
	$useLocalCurrentObjectStackCache();
	$var($ConstantUtf8, cu8, $cast($ConstantUtf8, $nc($($ElementValue::getConstantPool()))->getConstant(this->idx, $Const::CONSTANT_Utf8)));
	return $nc(cu8)->getBytes();
}

void ClassElementValue::dump($DataOutputStream* dos) {
	$nc(dos)->writeByte($ElementValue::getType());
	dos->writeShort(this->idx);
}

ClassElementValue::ClassElementValue() {
}

$Class* ClassElementValue::load$($String* name, bool initialize) {
	$loadClass(ClassElementValue, name, initialize, &_ClassElementValue_ClassInfo_, allocate$ClassElementValue);
	return class$;
}

$Class* ClassElementValue::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com