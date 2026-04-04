#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodType.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
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

void ConstantMethodType::init$(ConstantMethodType* c) {
	ConstantMethodType::init$($nc(c)->getDescriptorIndex());
}

void ConstantMethodType::init$($DataInput* file) {
	ConstantMethodType::init$($nc(file)->readUnsignedShort());
}

void ConstantMethodType::init$(int32_t descriptor_index) {
	$Constant::init$($Const::CONSTANT_MethodType);
	this->descriptorIndex = descriptor_index;
}

void ConstantMethodType::accept($Visitor* v) {
	$nc(v)->visitConstantMethodType(this);
}

void ConstantMethodType::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeShort(this->descriptorIndex);
}

int32_t ConstantMethodType::getDescriptorIndex() {
	return this->descriptorIndex;
}

void ConstantMethodType::setDescriptorIndex(int32_t descriptor_index) {
	this->descriptorIndex = descriptor_index;
}

$String* ConstantMethodType::toString() {
	$useLocalObjectStack();
	return $str({$($Constant::toString()), "(descriptorIndex = "_s, $$str(this->descriptorIndex), ")"_s});
}

ConstantMethodType::ConstantMethodType() {
}

$Class* ConstantMethodType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"descriptorIndex", "I", nullptr, $PRIVATE, $field(ConstantMethodType, descriptorIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodType;)V", nullptr, $PUBLIC, $method(ConstantMethodType, init$, void, ConstantMethodType*)},
		{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantMethodType, init$, void, $DataInput*), "java.io.IOException"},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(ConstantMethodType, init$, void, int32_t)},
		{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantMethodType, accept, void, $Visitor*)},
		{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ConstantMethodType, dump, void, $DataOutputStream*), "java.io.IOException"},
		{"getDescriptorIndex", "()I", nullptr, $PUBLIC, $method(ConstantMethodType, getDescriptorIndex, int32_t)},
		{"setDescriptorIndex", "(I)V", nullptr, $PUBLIC, $method(ConstantMethodType, setDescriptorIndex, void, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantMethodType, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.classfile.ConstantMethodType",
		"com.sun.org.apache.bcel.internal.classfile.Constant",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConstantMethodType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConstantMethodType));
	});
	return class$;
}

$Class* ConstantMethodType::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com