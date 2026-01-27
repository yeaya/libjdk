#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
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

$FieldInfo _ConstantMethodHandle_FieldInfo_[] = {
	{"referenceKind", "I", nullptr, $PRIVATE, $field(ConstantMethodHandle, referenceKind)},
	{"referenceIndex", "I", nullptr, $PRIVATE, $field(ConstantMethodHandle, referenceIndex)},
	{}
};

$MethodInfo _ConstantMethodHandle_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle;)V", nullptr, $PUBLIC, $method(ConstantMethodHandle, init$, void, ConstantMethodHandle*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantMethodHandle, init$, void, $DataInput*), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(ConstantMethodHandle, init$, void, int32_t, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantMethodHandle, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ConstantMethodHandle, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getReferenceIndex", "()I", nullptr, $PUBLIC, $method(ConstantMethodHandle, getReferenceIndex, int32_t)},
	{"getReferenceKind", "()I", nullptr, $PUBLIC, $method(ConstantMethodHandle, getReferenceKind, int32_t)},
	{"setReferenceIndex", "(I)V", nullptr, $PUBLIC, $method(ConstantMethodHandle, setReferenceIndex, void, int32_t)},
	{"setReferenceKind", "(I)V", nullptr, $PUBLIC, $method(ConstantMethodHandle, setReferenceKind, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantMethodHandle, toString, $String*)},
	{}
};

$ClassInfo _ConstantMethodHandle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantMethodHandle",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	nullptr,
	_ConstantMethodHandle_FieldInfo_,
	_ConstantMethodHandle_MethodInfo_
};

$Object* allocate$ConstantMethodHandle($Class* clazz) {
	return $of($alloc(ConstantMethodHandle));
}

void ConstantMethodHandle::init$(ConstantMethodHandle* c) {
	int32_t var$0 = $nc(c)->getReferenceKind();
	ConstantMethodHandle::init$(var$0, c->getReferenceIndex());
}

void ConstantMethodHandle::init$($DataInput* file) {
	int32_t var$0 = $nc(file)->readUnsignedByte();
	ConstantMethodHandle::init$(var$0, file->readUnsignedShort());
}

void ConstantMethodHandle::init$(int32_t reference_kind, int32_t reference_index) {
	$Constant::init$($Const::CONSTANT_MethodHandle);
	this->referenceKind = reference_kind;
	this->referenceIndex = reference_index;
}

void ConstantMethodHandle::accept($Visitor* v) {
	$nc(v)->visitConstantMethodHandle(this);
}

void ConstantMethodHandle::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeByte(this->referenceKind);
	file->writeShort(this->referenceIndex);
}

int32_t ConstantMethodHandle::getReferenceKind() {
	return this->referenceKind;
}

void ConstantMethodHandle::setReferenceKind(int32_t reference_kind) {
	this->referenceKind = reference_kind;
}

int32_t ConstantMethodHandle::getReferenceIndex() {
	return this->referenceIndex;
}

void ConstantMethodHandle::setReferenceIndex(int32_t reference_index) {
	this->referenceIndex = reference_index;
}

$String* ConstantMethodHandle::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Constant::toString()), "(referenceKind = "_s, $$str(this->referenceKind), ", referenceIndex = "_s, $$str(this->referenceIndex), ")"_s});
}

ConstantMethodHandle::ConstantMethodHandle() {
}

$Class* ConstantMethodHandle::load$($String* name, bool initialize) {
	$loadClass(ConstantMethodHandle, name, initialize, &_ConstantMethodHandle_ClassInfo_, allocate$ConstantMethodHandle);
	return class$;
}

$Class* ConstantMethodHandle::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com