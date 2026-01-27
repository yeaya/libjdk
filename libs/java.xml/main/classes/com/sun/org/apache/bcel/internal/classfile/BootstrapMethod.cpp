#include <com/sun/org/apache/bcel/internal/classfile/BootstrapMethod.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _BootstrapMethod_FieldInfo_[] = {
	{"bootstrapMethodRef", "I", nullptr, $PRIVATE, $field(BootstrapMethod, bootstrapMethodRef)},
	{"bootstrapArguments", "[I", nullptr, $PRIVATE, $field(BootstrapMethod, bootstrapArguments)},
	{}
};

$MethodInfo _BootstrapMethod_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethod;)V", nullptr, $PUBLIC, $method(BootstrapMethod, init$, void, BootstrapMethod*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(BootstrapMethod, init$, void, $DataInput*), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PRIVATE, $method(BootstrapMethod, init$, void, int32_t, int32_t)},
	{"<init>", "(I[I)V", nullptr, $PUBLIC, $method(BootstrapMethod, init$, void, int32_t, $ints*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethod;", nullptr, $PUBLIC, $virtualMethod(BootstrapMethod, copy, BootstrapMethod*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, $method(BootstrapMethod, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getBootstrapArguments", "()[I", nullptr, $PUBLIC, $virtualMethod(BootstrapMethod, getBootstrapArguments, $ints*)},
	{"getBootstrapMethodRef", "()I", nullptr, $PUBLIC, $virtualMethod(BootstrapMethod, getBootstrapMethodRef, int32_t)},
	{"getNumBootstrapArguments", "()I", nullptr, $PUBLIC, $virtualMethod(BootstrapMethod, getNumBootstrapArguments, int32_t)},
	{"setBootstrapArguments", "([I)V", nullptr, $PUBLIC, $virtualMethod(BootstrapMethod, setBootstrapArguments, void, $ints*)},
	{"setBootstrapMethodRef", "(I)V", nullptr, $PUBLIC, $virtualMethod(BootstrapMethod, setBootstrapMethodRef, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(BootstrapMethod, toString, $String*)},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(BootstrapMethod, toString, $String*, $ConstantPool*)},
	{}
};

$ClassInfo _BootstrapMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.BootstrapMethod",
	"java.lang.Object",
	"java.lang.Cloneable",
	_BootstrapMethod_FieldInfo_,
	_BootstrapMethod_MethodInfo_
};

$Object* allocate$BootstrapMethod($Class* clazz) {
	return $of($alloc(BootstrapMethod));
}

void BootstrapMethod::init$(BootstrapMethod* c) {
	int32_t var$0 = $nc(c)->getBootstrapMethodRef();
	BootstrapMethod::init$(var$0, $(c->getBootstrapArguments()));
}

void BootstrapMethod::init$($DataInput* input) {
	int32_t var$0 = $nc(input)->readUnsignedShort();
	BootstrapMethod::init$(var$0, input->readUnsignedShort());
	for (int32_t i = 0; i < $nc(this->bootstrapArguments)->length; ++i) {
		$nc(this->bootstrapArguments)->set(i, $nc(input)->readUnsignedShort());
	}
}

void BootstrapMethod::init$(int32_t bootstrap_method_ref, int32_t num_bootstrap_arguments) {
	BootstrapMethod::init$(bootstrap_method_ref, $$new($ints, num_bootstrap_arguments));
}

void BootstrapMethod::init$(int32_t bootstrapMethodRef, $ints* bootstrapArguments) {
	this->bootstrapMethodRef = bootstrapMethodRef;
	$set(this, bootstrapArguments, bootstrapArguments);
}

int32_t BootstrapMethod::getBootstrapMethodRef() {
	return this->bootstrapMethodRef;
}

void BootstrapMethod::setBootstrapMethodRef(int32_t bootstrapMethodRef) {
	this->bootstrapMethodRef = bootstrapMethodRef;
}

$ints* BootstrapMethod::getBootstrapArguments() {
	return this->bootstrapArguments;
}

int32_t BootstrapMethod::getNumBootstrapArguments() {
	return $nc(this->bootstrapArguments)->length;
}

void BootstrapMethod::setBootstrapArguments($ints* bootstrapArguments) {
	$set(this, bootstrapArguments, bootstrapArguments);
}

$String* BootstrapMethod::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"BootstrapMethod("_s, $$str(this->bootstrapMethodRef), ", "_s, $$str($nc(this->bootstrapArguments)->length), ", "_s, $($Arrays::toString(this->bootstrapArguments)), ")"_s});
}

$String* BootstrapMethod::toString($ConstantPool* constantPool) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($String, bootstrap_method_name, nullptr);
	$assign(bootstrap_method_name, $nc(constantPool)->constantToString(this->bootstrapMethodRef, $Const::CONSTANT_MethodHandle));
	buf->append($($Utility::compactClassName(bootstrap_method_name, false)));
	int32_t num_bootstrap_arguments = $nc(this->bootstrapArguments)->length;
	if (num_bootstrap_arguments > 0) {
		buf->append("\nMethod Arguments:"_s);
		for (int32_t i = 0; i < num_bootstrap_arguments; ++i) {
			buf->append("\n  "_s)->append(i)->append(": "_s);
			buf->append($(constantPool->constantToString($(constantPool->getConstant($nc(this->bootstrapArguments)->get(i))))));
		}
	}
	return buf->toString();
}

void BootstrapMethod::dump($DataOutputStream* file) {
	$nc(file)->writeShort(this->bootstrapMethodRef);
	file->writeShort($nc(this->bootstrapArguments)->length);
	{
		$var($ints, arr$, this->bootstrapArguments);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t bootstrap_argument = arr$->get(i$);
			{
				file->writeShort(bootstrap_argument);
			}
		}
	}
}

BootstrapMethod* BootstrapMethod::copy() {
	try {
		return $cast(BootstrapMethod, clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

BootstrapMethod::BootstrapMethod() {
}

$Class* BootstrapMethod::load$($String* name, bool initialize) {
	$loadClass(BootstrapMethod, name, initialize, &_BootstrapMethod_ClassInfo_, allocate$BootstrapMethod);
	return class$;
}

$Class* BootstrapMethod::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com