#include <com/sun/org/apache/bcel/internal/classfile/EnclosingMethod.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_ENCLOSING_METHOD

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantClass = ::com::sun::org::apache::bcel::internal::classfile::ConstantClass;
using $ConstantNameAndType = ::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
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

void EnclosingMethod::init$(int32_t nameIndex, int32_t len, $DataInput* input, $ConstantPool* cpool) {
	int32_t var$0 = $nc(input)->readUnsignedShort();
	EnclosingMethod::init$(nameIndex, len, var$0, input->readUnsignedShort(), cpool);
}

void EnclosingMethod::init$(int32_t nameIndex, int32_t len, int32_t classIdx, int32_t methodIdx, $ConstantPool* cpool) {
	$Attribute::init$($Const::ATTR_ENCLOSING_METHOD, nameIndex, len, cpool);
	this->classIndex = classIdx;
	this->methodIndex = methodIdx;
}

void EnclosingMethod::accept($Visitor* v) {
	$nc(v)->visitEnclosingMethod(this);
}

$Attribute* EnclosingMethod::copy($ConstantPool* constant_pool) {
	return $cast($Attribute, clone());
}

int32_t EnclosingMethod::getEnclosingClassIndex() {
	return this->classIndex;
}

int32_t EnclosingMethod::getEnclosingMethodIndex() {
	return this->methodIndex;
}

void EnclosingMethod::setEnclosingClassIndex(int32_t idx) {
	this->classIndex = idx;
}

void EnclosingMethod::setEnclosingMethodIndex(int32_t idx) {
	this->methodIndex = idx;
}

$ConstantClass* EnclosingMethod::getEnclosingClass() {
	$useLocalObjectStack();
	$var($ConstantClass, c, $cast($ConstantClass, $$nc($Attribute::getConstantPool())->getConstant(this->classIndex, $Const::CONSTANT_Class)));
	return c;
}

$ConstantNameAndType* EnclosingMethod::getEnclosingMethod() {
	$useLocalObjectStack();
	if (this->methodIndex == 0) {
		return nullptr;
	}
	$var($ConstantNameAndType, nat, $cast($ConstantNameAndType, $$nc($Attribute::getConstantPool())->getConstant(this->methodIndex, $Const::CONSTANT_NameAndType)));
	return nat;
}

void EnclosingMethod::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	$nc(file)->writeShort(this->classIndex);
	file->writeShort(this->methodIndex);
}

EnclosingMethod::EnclosingMethod() {
}

$Class* EnclosingMethod::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classIndex", "I", nullptr, $PRIVATE, $field(EnclosingMethod, classIndex)},
		{"methodIndex", "I", nullptr, $PRIVATE, $field(EnclosingMethod, methodIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(EnclosingMethod, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
		{"<init>", "(IIIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PRIVATE, $method(EnclosingMethod, init$, void, int32_t, int32_t, int32_t, int32_t, $ConstantPool*)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(EnclosingMethod, accept, void, $Visitor*)},
		{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(EnclosingMethod, copy, $Attribute*, $ConstantPool*)},
		{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(EnclosingMethod, dump, void, $DataOutputStream*), "java.io.IOException"},
		{"getEnclosingClass", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantClass;", nullptr, $PUBLIC | $FINAL, $method(EnclosingMethod, getEnclosingClass, $ConstantClass*)},
		{"getEnclosingClassIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(EnclosingMethod, getEnclosingClassIndex, int32_t)},
		{"getEnclosingMethod", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantNameAndType;", nullptr, $PUBLIC | $FINAL, $method(EnclosingMethod, getEnclosingMethod, $ConstantNameAndType*)},
		{"getEnclosingMethodIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(EnclosingMethod, getEnclosingMethodIndex, int32_t)},
		{"setEnclosingClassIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $method(EnclosingMethod, setEnclosingClassIndex, void, int32_t)},
		{"setEnclosingMethodIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $method(EnclosingMethod, setEnclosingMethodIndex, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.classfile.EnclosingMethod",
		"com.sun.org.apache.bcel.internal.classfile.Attribute",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EnclosingMethod, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(EnclosingMethod));
	});
	return class$;
}

$Class* EnclosingMethod::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com