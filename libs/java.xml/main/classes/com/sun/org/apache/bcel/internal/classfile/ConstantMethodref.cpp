#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodref.h>

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

$MethodInfo _ConstantMethodref_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodref;)V", nullptr, $PUBLIC, $method(ConstantMethodref, init$, void, ConstantMethodref*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantMethodref, init$, void, $DataInput*), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(ConstantMethodref, init$, void, int32_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantMethodref, accept, void, $Visitor*)},
	{}
};

$ClassInfo _ConstantMethodref_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantMethodref",
	"com.sun.org.apache.bcel.internal.classfile.ConstantCP",
	nullptr,
	nullptr,
	_ConstantMethodref_MethodInfo_
};

$Object* allocate$ConstantMethodref($Class* clazz) {
	return $of($alloc(ConstantMethodref));
}

void ConstantMethodref::init$(ConstantMethodref* c) {
	int32_t var$0 = $nc(c)->getClassIndex();
	$ConstantCP::init$($Const::CONSTANT_Methodref, var$0, c->getNameAndTypeIndex());
}

void ConstantMethodref::init$($DataInput* input) {
	$ConstantCP::init$($Const::CONSTANT_Methodref, input);
}

void ConstantMethodref::init$(int32_t class_index, int32_t name_and_type_index) {
	$ConstantCP::init$($Const::CONSTANT_Methodref, class_index, name_and_type_index);
}

void ConstantMethodref::accept($Visitor* v) {
	$nc(v)->visitConstantMethodref(this);
}

ConstantMethodref::ConstantMethodref() {
}

$Class* ConstantMethodref::load$($String* name, bool initialize) {
	$loadClass(ConstantMethodref, name, initialize, &_ConstantMethodref_ClassInfo_, allocate$ConstantMethodref);
	return class$;
}

$Class* ConstantMethodref::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com