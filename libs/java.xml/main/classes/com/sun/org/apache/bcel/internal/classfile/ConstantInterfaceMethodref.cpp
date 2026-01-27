#include <com/sun/org/apache/bcel/internal/classfile/ConstantInterfaceMethodref.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantCP.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantCP = ::com::sun::org::apache::bcel::internal::classfile::ConstantCP;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _ConstantInterfaceMethodref_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInterfaceMethodref;)V", nullptr, $PUBLIC, $method(ConstantInterfaceMethodref, init$, void, ConstantInterfaceMethodref*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantInterfaceMethodref, init$, void, $DataInput*), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(ConstantInterfaceMethodref, init$, void, int32_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantInterfaceMethodref, accept, void, $Visitor*)},
	{}
};

$ClassInfo _ConstantInterfaceMethodref_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantInterfaceMethodref",
	"com.sun.org.apache.bcel.internal.classfile.ConstantCP",
	nullptr,
	nullptr,
	_ConstantInterfaceMethodref_MethodInfo_
};

$Object* allocate$ConstantInterfaceMethodref($Class* clazz) {
	return $of($alloc(ConstantInterfaceMethodref));
}

void ConstantInterfaceMethodref::init$(ConstantInterfaceMethodref* c) {
	int32_t var$0 = $nc(c)->getClassIndex();
	$ConstantCP::init$($Const::CONSTANT_InterfaceMethodref, var$0, c->getNameAndTypeIndex());
}

void ConstantInterfaceMethodref::init$($DataInput* input) {
	$ConstantCP::init$($Const::CONSTANT_InterfaceMethodref, input);
}

void ConstantInterfaceMethodref::init$(int32_t class_index, int32_t name_and_type_index) {
	$ConstantCP::init$($Const::CONSTANT_InterfaceMethodref, class_index, name_and_type_index);
}

void ConstantInterfaceMethodref::accept($Visitor* v) {
	$nc(v)->visitConstantInterfaceMethodref(this);
}

ConstantInterfaceMethodref::ConstantInterfaceMethodref() {
}

$Class* ConstantInterfaceMethodref::load$($String* name, bool initialize) {
	$loadClass(ConstantInterfaceMethodref, name, initialize, &_ConstantInterfaceMethodref_ClassInfo_, allocate$ConstantInterfaceMethodref);
	return class$;
}

$Class* ConstantInterfaceMethodref::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com