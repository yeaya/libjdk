#include <com/sun/org/apache/bcel/internal/classfile/ConstantDouble.h>

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
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ConstantDouble_FieldInfo_[] = {
	{"bytes", "D", nullptr, $PRIVATE, $field(ConstantDouble, bytes)},
	{}
};

$MethodInfo _ConstantDouble_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(D)V", nullptr, $PUBLIC, $method(ConstantDouble, init$, void, double)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDouble;)V", nullptr, $PUBLIC, $method(ConstantDouble, init$, void, ConstantDouble*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantDouble, init$, void, $DataInput*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantDouble, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ConstantDouble, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getBytes", "()D", nullptr, $PUBLIC, $method(ConstantDouble, getBytes, double)},
	{"getConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ConstantDouble, getConstantValue, $Object*, $ConstantPool*)},
	{"setBytes", "(D)V", nullptr, $PUBLIC, $method(ConstantDouble, setBytes, void, double)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantDouble, toString, $String*)},
	{}
};

$ClassInfo _ConstantDouble_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantDouble",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	"com.sun.org.apache.bcel.internal.classfile.ConstantObject",
	_ConstantDouble_FieldInfo_,
	_ConstantDouble_MethodInfo_
};

$Object* allocate$ConstantDouble($Class* clazz) {
	return $of($alloc(ConstantDouble));
}

$Object* ConstantDouble::clone() {
	 return this->$Constant::clone();
}

bool ConstantDouble::equals(Object$* obj) {
	 return this->$Constant::equals(obj);
}

int32_t ConstantDouble::hashCode() {
	 return this->$Constant::hashCode();
}

void ConstantDouble::finalize() {
	this->$Constant::finalize();
}

void ConstantDouble::init$(double bytes) {
	$Constant::init$($Const::CONSTANT_Double);
	this->bytes = bytes;
}

void ConstantDouble::init$(ConstantDouble* c) {
	ConstantDouble::init$($nc(c)->getBytes());
}

void ConstantDouble::init$($DataInput* file) {
	ConstantDouble::init$($nc(file)->readDouble());
}

void ConstantDouble::accept($Visitor* v) {
	$nc(v)->visitConstantDouble(this);
}

void ConstantDouble::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeDouble(this->bytes);
}

double ConstantDouble::getBytes() {
	return this->bytes;
}

void ConstantDouble::setBytes(double bytes) {
	this->bytes = bytes;
}

$String* ConstantDouble::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Constant::toString()), "(bytes = "_s, $$str(this->bytes), ")"_s});
}

$Object* ConstantDouble::getConstantValue($ConstantPool* cp) {
	return $of($Double::valueOf(this->bytes));
}

ConstantDouble::ConstantDouble() {
}

$Class* ConstantDouble::load$($String* name, bool initialize) {
	$loadClass(ConstantDouble, name, initialize, &_ConstantDouble_ClassInfo_, allocate$ConstantDouble);
	return class$;
}

$Class* ConstantDouble::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com