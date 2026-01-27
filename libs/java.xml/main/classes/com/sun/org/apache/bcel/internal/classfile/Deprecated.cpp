#include <com/sun/org/apache/bcel/internal/classfile/Deprecated.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_DEPRECATED

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
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

$FieldInfo _Deprecated_FieldInfo_[] = {
	{"bytes", "[B", nullptr, $PRIVATE, $field(Deprecated, bytes)},
	{}
};

$MethodInfo _Deprecated_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/Deprecated;)V", nullptr, $PUBLIC, $method(Deprecated, init$, void, Deprecated*)},
	{"<init>", "(II[BLcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(Deprecated, init$, void, int32_t, int32_t, $bytes*, $ConstantPool*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(Deprecated, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(Deprecated, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(Deprecated, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Deprecated, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getBytes", "()[B", nullptr, $PUBLIC, $method(Deprecated, getBytes, $bytes*)},
	{"setBytes", "([B)V", nullptr, $PUBLIC, $method(Deprecated, setBytes, void, $bytes*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Deprecated, toString, $String*)},
	{}
};

$ClassInfo _Deprecated_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Deprecated",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_Deprecated_FieldInfo_,
	_Deprecated_MethodInfo_
};

$Object* allocate$Deprecated($Class* clazz) {
	return $of($alloc(Deprecated));
}

void Deprecated::init$(Deprecated* c) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	$var($bytes, var$2, c->getBytes());
	Deprecated::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void Deprecated::init$(int32_t name_index, int32_t length, $bytes* bytes, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_DEPRECATED, name_index, length, constant_pool);
	$set(this, bytes, bytes);
}

void Deprecated::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	Deprecated::init$(name_index, length, ($bytes*)nullptr, constant_pool);
	if (length > 0) {
		$set(this, bytes, $new($bytes, length));
		$nc(input)->readFully(this->bytes);
		println("Deprecated attribute with length > 0"_s);
	}
}

void Deprecated::accept($Visitor* v) {
	$nc(v)->visitDeprecated(this);
}

void Deprecated::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	if ($Attribute::getLength() > 0) {
		$nc(file)->write(this->bytes, 0, $Attribute::getLength());
	}
}

$bytes* Deprecated::getBytes() {
	return this->bytes;
}

void Deprecated::setBytes($bytes* bytes) {
	$set(this, bytes, bytes);
}

$String* Deprecated::toString() {
	return $Const::getAttributeName($Const::ATTR_DEPRECATED);
}

$Attribute* Deprecated::copy($ConstantPool* _constant_pool) {
	$var(Deprecated, c, $cast(Deprecated, clone()));
	if (this->bytes != nullptr) {
		$set($nc(c), bytes, $new($bytes, $nc(this->bytes)->length));
		$System::arraycopy(this->bytes, 0, c->bytes, 0, $nc(this->bytes)->length);
	}
	$nc(c)->setConstantPool(_constant_pool);
	return c;
}

Deprecated::Deprecated() {
}

$Class* Deprecated::load$($String* name, bool initialize) {
	$loadClass(Deprecated, name, initialize, &_Deprecated_ClassInfo_, allocate$Deprecated);
	return class$;
}

$Class* Deprecated::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com