#include <com/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantCP.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantCP = ::com::sun::org::apache::bcel::internal::classfile::ConstantCP;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _ConstantInvokeDynamic_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic;)V", nullptr, $PUBLIC, $method(ConstantInvokeDynamic, init$, void, ConstantInvokeDynamic*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantInvokeDynamic, init$, void, $DataInput*), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(ConstantInvokeDynamic, init$, void, int32_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantInvokeDynamic, accept, void, $Visitor*)},
	{"getBootstrapMethodAttrIndex", "()I", nullptr, $PUBLIC, $method(ConstantInvokeDynamic, getBootstrapMethodAttrIndex, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantInvokeDynamic, toString, $String*)},
	{}
};

$ClassInfo _ConstantInvokeDynamic_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantInvokeDynamic",
	"com.sun.org.apache.bcel.internal.classfile.ConstantCP",
	nullptr,
	nullptr,
	_ConstantInvokeDynamic_MethodInfo_
};

$Object* allocate$ConstantInvokeDynamic($Class* clazz) {
	return $of($alloc(ConstantInvokeDynamic));
}

void ConstantInvokeDynamic::init$(ConstantInvokeDynamic* c) {
	int32_t var$0 = $nc(c)->getBootstrapMethodAttrIndex();
	ConstantInvokeDynamic::init$(var$0, c->getNameAndTypeIndex());
}

void ConstantInvokeDynamic::init$($DataInput* file) {
	int32_t var$0 = (int32_t)$nc(file)->readShort();
	ConstantInvokeDynamic::init$(var$0, file->readShort());
}

void ConstantInvokeDynamic::init$(int32_t bootstrap_method_attr_index, int32_t name_and_type_index) {
	$ConstantCP::init$($Const::CONSTANT_InvokeDynamic, bootstrap_method_attr_index, name_and_type_index);
}

void ConstantInvokeDynamic::accept($Visitor* v) {
	$nc(v)->visitConstantInvokeDynamic(this);
}

int32_t ConstantInvokeDynamic::getBootstrapMethodAttrIndex() {
	return $ConstantCP::getClassIndex();
}

$String* ConstantInvokeDynamic::toString() {
	return $nc($($ConstantCP::toString()))->replace(static_cast<$CharSequence*>("class_index"_s), static_cast<$CharSequence*>("bootstrap_method_attr_index"_s));
}

ConstantInvokeDynamic::ConstantInvokeDynamic() {
}

$Class* ConstantInvokeDynamic::load$($String* name, bool initialize) {
	$loadClass(ConstantInvokeDynamic, name, initialize, &_ConstantInvokeDynamic_ClassInfo_, allocate$ConstantInvokeDynamic);
	return class$;
}

$Class* ConstantInvokeDynamic::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com