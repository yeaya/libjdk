#include <com/sun/org/apache/bcel/internal/classfile/Synthetic.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_SYNTHETIC

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
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

$FieldInfo _Synthetic_FieldInfo_[] = {
	{"bytes", "[B", nullptr, $PRIVATE, $field(Synthetic, bytes)},
	{}
};

$MethodInfo _Synthetic_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/Synthetic;)V", nullptr, $PUBLIC, $method(Synthetic, init$, void, Synthetic*)},
	{"<init>", "(II[BLcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(Synthetic, init$, void, int32_t, int32_t, $bytes*, $ConstantPool*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(Synthetic, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(Synthetic, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(Synthetic, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Synthetic, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getBytes", "()[B", nullptr, $PUBLIC, $method(Synthetic, getBytes, $bytes*)},
	{"setBytes", "([B)V", nullptr, $PUBLIC, $method(Synthetic, setBytes, void, $bytes*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Synthetic, toString, $String*)},
	{}
};

$ClassInfo _Synthetic_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Synthetic",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_Synthetic_FieldInfo_,
	_Synthetic_MethodInfo_
};

$Object* allocate$Synthetic($Class* clazz) {
	return $of($alloc(Synthetic));
}

void Synthetic::init$(Synthetic* c) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	$var($bytes, var$2, c->getBytes());
	Synthetic::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void Synthetic::init$(int32_t name_index, int32_t length, $bytes* bytes, $ConstantPool* constant_pool) {
	$Attribute::init$($Const::ATTR_SYNTHETIC, name_index, length, constant_pool);
	$set(this, bytes, bytes);
}

void Synthetic::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	Synthetic::init$(name_index, length, ($bytes*)nullptr, constant_pool);
	if (length > 0) {
		$set(this, bytes, $new($bytes, length));
		$nc(input)->readFully(this->bytes);
		println("Synthetic attribute with length > 0"_s);
	}
}

void Synthetic::accept($Visitor* v) {
	$nc(v)->visitSynthetic(this);
}

void Synthetic::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	if ($Attribute::getLength() > 0) {
		$nc(file)->write(this->bytes, 0, $Attribute::getLength());
	}
}

$bytes* Synthetic::getBytes() {
	return this->bytes;
}

void Synthetic::setBytes($bytes* bytes) {
	$set(this, bytes, bytes);
}

$String* Synthetic::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, "Synthetic"_s));
	if ($Attribute::getLength() > 0) {
		buf->append(" "_s)->append($($Utility::toHexString(this->bytes)));
	}
	return buf->toString();
}

$Attribute* Synthetic::copy($ConstantPool* _constant_pool) {
	$var(Synthetic, c, $cast(Synthetic, clone()));
	if (this->bytes != nullptr) {
		$set($nc(c), bytes, $new($bytes, $nc(this->bytes)->length));
		$System::arraycopy(this->bytes, 0, c->bytes, 0, $nc(this->bytes)->length);
	}
	$nc(c)->setConstantPool(_constant_pool);
	return c;
}

Synthetic::Synthetic() {
}

$Class* Synthetic::load$($String* name, bool initialize) {
	$loadClass(Synthetic, name, initialize, &_Synthetic_ClassInfo_, allocate$Synthetic);
	return class$;
}

$Class* Synthetic::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com