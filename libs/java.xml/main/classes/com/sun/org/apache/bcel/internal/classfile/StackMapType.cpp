#include <com/sun/org/apache/bcel/internal/classfile/StackMapType.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
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

$FieldInfo _StackMapType_FieldInfo_[] = {
	{"type", "B", nullptr, $PRIVATE, $field(StackMapType, type)},
	{"index", "I", nullptr, $PRIVATE, $field(StackMapType, index)},
	{"constantPool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE, $field(StackMapType, constantPool)},
	{}
};

$MethodInfo _StackMapType_MethodInfo_[] = {
	{"<init>", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(StackMapType, init$, void, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"<init>", "(BILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(StackMapType, init$, void, int8_t, int32_t, $ConstantPool*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/StackMapType;", nullptr, $PUBLIC, $method(StackMapType, copy, StackMapType*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $method(StackMapType, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PUBLIC, $method(StackMapType, getConstantPool, $ConstantPool*)},
	{"getIndex", "()I", nullptr, $PUBLIC, $method(StackMapType, getIndex, int32_t)},
	{"getType", "()B", nullptr, $PUBLIC, $method(StackMapType, getType, int8_t)},
	{"hasIndex", "()Z", nullptr, $PUBLIC, $method(StackMapType, hasIndex, bool)},
	{"printIndex", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(StackMapType, printIndex, $String*)},
	{"setConstantPool", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(StackMapType, setConstantPool, void, $ConstantPool*)},
	{"setIndex", "(I)V", nullptr, $PUBLIC, $method(StackMapType, setIndex, void, int32_t)},
	{"setType", "(B)V", nullptr, $PUBLIC, $method(StackMapType, setType, void, int8_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StackMapType, toString, $String*)},
	{}
};

$ClassInfo _StackMapType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.StackMapType",
	"java.lang.Object",
	"java.lang.Cloneable",
	_StackMapType_FieldInfo_,
	_StackMapType_MethodInfo_
};

$Object* allocate$StackMapType($Class* clazz) {
	return $of($alloc(StackMapType));
}

void StackMapType::init$($DataInput* file, $ConstantPool* constant_pool) {
	StackMapType::init$($nc(file)->readByte(), -1, constant_pool);
	if (hasIndex()) {
		this->index = $nc(file)->readShort();
	}
	$set(this, constantPool, constant_pool);
}

void StackMapType::init$(int8_t type, int32_t index, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	this->index = -1;
	if ((type < $Const::ITEM_Bogus) || (type > $Const::ITEM_NewObject)) {
		$throwNew($IllegalArgumentException, $$str({"Illegal type for StackMapType: "_s, $$str(type)}));
	}
	this->type = type;
	this->index = index;
	$set(this, constantPool, constant_pool);
}

void StackMapType::setType(int8_t t) {
	$useLocalCurrentObjectStackCache();
	if ((t < $Const::ITEM_Bogus) || (t > $Const::ITEM_NewObject)) {
		$throwNew($IllegalArgumentException, $$str({"Illegal type for StackMapType: "_s, $$str(t)}));
	}
	this->type = t;
}

int8_t StackMapType::getType() {
	return this->type;
}

void StackMapType::setIndex(int32_t t) {
	this->index = t;
}

int32_t StackMapType::getIndex() {
	return this->index;
}

void StackMapType::dump($DataOutputStream* file) {
	$nc(file)->writeByte(this->type);
	if (hasIndex()) {
		file->writeShort(getIndex());
	}
}

bool StackMapType::hasIndex() {
	return this->type == $Const::ITEM_Object || this->type == $Const::ITEM_NewObject;
}

$String* StackMapType::printIndex() {
	$useLocalCurrentObjectStackCache();
	if (this->type == $Const::ITEM_Object) {
		if (this->index < 0) {
			return ", class=<unknown>"_s;
		}
		return $str({", class="_s, $($nc(this->constantPool)->constantToString(this->index, $Const::CONSTANT_Class))});
	} else if (this->type == $Const::ITEM_NewObject) {
		return $str({", offset="_s, $$str(this->index)});
	} else {
		return ""_s;
	}
}

$String* StackMapType::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"(type="_s, $($Const::getItemName(this->type))}));
	$var($String, var$0, $$concat(var$1, $(printIndex())));
	return $concat(var$0, ")"_s);
}

StackMapType* StackMapType::copy() {
	try {
		return $cast(StackMapType, clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

$ConstantPool* StackMapType::getConstantPool() {
	return this->constantPool;
}

void StackMapType::setConstantPool($ConstantPool* constantPool) {
	$set(this, constantPool, constantPool);
}

StackMapType::StackMapType() {
}

$Class* StackMapType::load$($String* name, bool initialize) {
	$loadClass(StackMapType, name, initialize, &_StackMapType_ClassInfo_, allocate$StackMapType);
	return class$;
}

$Class* StackMapType::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com