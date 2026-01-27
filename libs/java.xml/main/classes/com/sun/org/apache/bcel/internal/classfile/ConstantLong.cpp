#include <com/sun/org/apache/bcel/internal/classfile/ConstantLong.h>

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
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ConstantLong_FieldInfo_[] = {
	{"bytes", "J", nullptr, $PRIVATE, $field(ConstantLong, bytes)},
	{}
};

$MethodInfo _ConstantLong_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(ConstantLong, init$, void, int64_t)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantLong;)V", nullptr, $PUBLIC, $method(ConstantLong, init$, void, ConstantLong*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantLong, init$, void, $DataInput*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantLong, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ConstantLong, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getBytes", "()J", nullptr, $PUBLIC, $method(ConstantLong, getBytes, int64_t)},
	{"getConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ConstantLong, getConstantValue, $Object*, $ConstantPool*)},
	{"setBytes", "(J)V", nullptr, $PUBLIC, $method(ConstantLong, setBytes, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantLong, toString, $String*)},
	{}
};

$ClassInfo _ConstantLong_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantLong",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	"com.sun.org.apache.bcel.internal.classfile.ConstantObject",
	_ConstantLong_FieldInfo_,
	_ConstantLong_MethodInfo_
};

$Object* allocate$ConstantLong($Class* clazz) {
	return $of($alloc(ConstantLong));
}

$Object* ConstantLong::clone() {
	 return this->$Constant::clone();
}

bool ConstantLong::equals(Object$* obj) {
	 return this->$Constant::equals(obj);
}

int32_t ConstantLong::hashCode() {
	 return this->$Constant::hashCode();
}

void ConstantLong::finalize() {
	this->$Constant::finalize();
}

void ConstantLong::init$(int64_t bytes) {
	$Constant::init$($Const::CONSTANT_Long);
	this->bytes = bytes;
}

void ConstantLong::init$(ConstantLong* c) {
	ConstantLong::init$($nc(c)->getBytes());
}

void ConstantLong::init$($DataInput* file) {
	ConstantLong::init$($nc(file)->readLong());
}

void ConstantLong::accept($Visitor* v) {
	$nc(v)->visitConstantLong(this);
}

void ConstantLong::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeLong(this->bytes);
}

int64_t ConstantLong::getBytes() {
	return this->bytes;
}

void ConstantLong::setBytes(int64_t bytes) {
	this->bytes = bytes;
}

$String* ConstantLong::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Constant::toString()), "(bytes = "_s, $$str(this->bytes), ")"_s});
}

$Object* ConstantLong::getConstantValue($ConstantPool* cp) {
	return $of($Long::valueOf(this->bytes));
}

ConstantLong::ConstantLong() {
}

$Class* ConstantLong::load$($String* name, bool initialize) {
	$loadClass(ConstantLong, name, initialize, &_ConstantLong_ClassInfo_, allocate$ConstantLong);
	return class$;
}

$Class* ConstantLong::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com