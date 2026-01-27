#include <com/sun/org/apache/bcel/internal/classfile/ConstantDynamic.h>

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

$MethodInfo _ConstantDynamic_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDynamic;)V", nullptr, $PUBLIC, $method(ConstantDynamic, init$, void, ConstantDynamic*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantDynamic, init$, void, $DataInput*), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(ConstantDynamic, init$, void, int32_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantDynamic, accept, void, $Visitor*)},
	{"getBootstrapMethodAttrIndex", "()I", nullptr, $PUBLIC, $method(ConstantDynamic, getBootstrapMethodAttrIndex, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantDynamic, toString, $String*)},
	{}
};

$ClassInfo _ConstantDynamic_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantDynamic",
	"com.sun.org.apache.bcel.internal.classfile.ConstantCP",
	nullptr,
	nullptr,
	_ConstantDynamic_MethodInfo_
};

$Object* allocate$ConstantDynamic($Class* clazz) {
	return $of($alloc(ConstantDynamic));
}

void ConstantDynamic::init$(ConstantDynamic* c) {
	int32_t var$0 = $nc(c)->getBootstrapMethodAttrIndex();
	ConstantDynamic::init$(var$0, c->getNameAndTypeIndex());
}

void ConstantDynamic::init$($DataInput* file) {
	int32_t var$0 = (int32_t)$nc(file)->readShort();
	ConstantDynamic::init$(var$0, file->readShort());
}

void ConstantDynamic::init$(int32_t bootstrap_method_attr_index, int32_t name_and_type_index) {
	$ConstantCP::init$($Const::CONSTANT_Dynamic, bootstrap_method_attr_index, name_and_type_index);
}

void ConstantDynamic::accept($Visitor* v) {
	$nc(v)->visitConstantDynamic(this);
}

int32_t ConstantDynamic::getBootstrapMethodAttrIndex() {
	return $ConstantCP::getClassIndex();
}

$String* ConstantDynamic::toString() {
	return $nc($($ConstantCP::toString()))->replace(static_cast<$CharSequence*>("class_index"_s), static_cast<$CharSequence*>("bootstrap_method_attr_index"_s));
}

ConstantDynamic::ConstantDynamic() {
}

$Class* ConstantDynamic::load$($String* name, bool initialize) {
	$loadClass(ConstantDynamic, name, initialize, &_ConstantDynamic_ClassInfo_, allocate$ConstantDynamic);
	return class$;
}

$Class* ConstantDynamic::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com