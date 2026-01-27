#include <com/sun/org/apache/bcel/internal/classfile/ConstantInteger.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ConstantInteger_FieldInfo_[] = {
	{"bytes", "I", nullptr, $PRIVATE, $field(ConstantInteger, bytes)},
	{}
};

$MethodInfo _ConstantInteger_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(ConstantInteger, init$, void, int32_t)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInteger;)V", nullptr, $PUBLIC, $method(ConstantInteger, init$, void, ConstantInteger*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantInteger, init$, void, $DataInput*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantInteger, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ConstantInteger, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getBytes", "()I", nullptr, $PUBLIC, $method(ConstantInteger, getBytes, int32_t)},
	{"getConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ConstantInteger, getConstantValue, $Object*, $ConstantPool*)},
	{"setBytes", "(I)V", nullptr, $PUBLIC, $method(ConstantInteger, setBytes, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantInteger, toString, $String*)},
	{}
};

$ClassInfo _ConstantInteger_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantInteger",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	"com.sun.org.apache.bcel.internal.classfile.ConstantObject",
	_ConstantInteger_FieldInfo_,
	_ConstantInteger_MethodInfo_
};

$Object* allocate$ConstantInteger($Class* clazz) {
	return $of($alloc(ConstantInteger));
}

$Object* ConstantInteger::clone() {
	 return this->$Constant::clone();
}

bool ConstantInteger::equals(Object$* obj) {
	 return this->$Constant::equals(obj);
}

int32_t ConstantInteger::hashCode() {
	 return this->$Constant::hashCode();
}

void ConstantInteger::finalize() {
	this->$Constant::finalize();
}

void ConstantInteger::init$(int32_t bytes) {
	$Constant::init$($Const::CONSTANT_Integer);
	this->bytes = bytes;
}

void ConstantInteger::init$(ConstantInteger* c) {
	ConstantInteger::init$($nc(c)->getBytes());
}

void ConstantInteger::init$($DataInput* file) {
	ConstantInteger::init$($nc(file)->readInt());
}

void ConstantInteger::accept($Visitor* v) {
	$nc(v)->visitConstantInteger(this);
}

void ConstantInteger::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeInt(this->bytes);
}

int32_t ConstantInteger::getBytes() {
	return this->bytes;
}

void ConstantInteger::setBytes(int32_t bytes) {
	this->bytes = bytes;
}

$String* ConstantInteger::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Constant::toString()), "(bytes = "_s, $$str(this->bytes), ")"_s});
}

$Object* ConstantInteger::getConstantValue($ConstantPool* cp) {
	return $of($Integer::valueOf(this->bytes));
}

ConstantInteger::ConstantInteger() {
}

$Class* ConstantInteger::load$($String* name, bool initialize) {
	$loadClass(ConstantInteger, name, initialize, &_ConstantInteger_ClassInfo_, allocate$ConstantInteger);
	return class$;
}

$Class* ConstantInteger::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com