#include <com/sun/org/apache/bcel/internal/classfile/ConstantFieldref.h>

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

$MethodInfo _ConstantFieldref_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFieldref;)V", nullptr, $PUBLIC, $method(ConstantFieldref, init$, void, ConstantFieldref*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantFieldref, init$, void, $DataInput*), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(ConstantFieldref, init$, void, int32_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantFieldref, accept, void, $Visitor*)},
	{}
};

$ClassInfo _ConstantFieldref_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantFieldref",
	"com.sun.org.apache.bcel.internal.classfile.ConstantCP",
	nullptr,
	nullptr,
	_ConstantFieldref_MethodInfo_
};

$Object* allocate$ConstantFieldref($Class* clazz) {
	return $of($alloc(ConstantFieldref));
}

void ConstantFieldref::init$(ConstantFieldref* c) {
	int32_t var$0 = $nc(c)->getClassIndex();
	$ConstantCP::init$($Const::CONSTANT_Fieldref, var$0, c->getNameAndTypeIndex());
}

void ConstantFieldref::init$($DataInput* input) {
	$ConstantCP::init$($Const::CONSTANT_Fieldref, input);
}

void ConstantFieldref::init$(int32_t class_index, int32_t name_and_type_index) {
	$ConstantCP::init$($Const::CONSTANT_Fieldref, class_index, name_and_type_index);
}

void ConstantFieldref::accept($Visitor* v) {
	$nc(v)->visitConstantFieldref(this);
}

ConstantFieldref::ConstantFieldref() {
}

$Class* ConstantFieldref::load$($String* name, bool initialize) {
	$loadClass(ConstantFieldref, name, initialize, &_ConstantFieldref_ClassInfo_, allocate$ConstantFieldref);
	return class$;
}

$Class* ConstantFieldref::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com