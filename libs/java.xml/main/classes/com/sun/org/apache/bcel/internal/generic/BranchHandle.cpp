#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <jcpp.h>

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _BranchHandle_FieldInfo_[] = {
	{"bi", "Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PRIVATE, $field(BranchHandle, bi)},
	{}
};

$MethodInfo _BranchHandle_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;)V", nullptr, $PRIVATE, $method(BranchHandle, init$, void, $BranchInstruction*)},
	{"getBranchHandle", "(Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;)Lcom/sun/org/apache/bcel/internal/generic/BranchHandle;", nullptr, $STATIC, $staticMethod(BranchHandle, getBranchHandle, BranchHandle*, $BranchInstruction*)},
	{"getPosition", "()I", nullptr, $PUBLIC, $virtualMethod(BranchHandle, getPosition, int32_t)},
	{"getTarget", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $method(BranchHandle, getTarget, $InstructionHandle*)},
	{"setInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;)V", nullptr, $PUBLIC, $virtualMethod(BranchHandle, setInstruction, void, $Instruction*)},
	{"setPosition", "(I)V", nullptr, 0, $virtualMethod(BranchHandle, setPosition, void, int32_t)},
	{"setTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(BranchHandle, setTarget, void, $InstructionHandle*)},
	{"updatePosition", "(II)I", nullptr, $PROTECTED, $virtualMethod(BranchHandle, updatePosition, int32_t, int32_t, int32_t)},
	{"updateTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(BranchHandle, updateTarget, void, $InstructionHandle*, $InstructionHandle*)},
	{}
};

$ClassInfo _BranchHandle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.BranchHandle",
	"com.sun.org.apache.bcel.internal.generic.InstructionHandle",
	nullptr,
	_BranchHandle_FieldInfo_,
	_BranchHandle_MethodInfo_
};

$Object* allocate$BranchHandle($Class* clazz) {
	return $of($alloc(BranchHandle));
}

void BranchHandle::init$($BranchInstruction* i) {
	$InstructionHandle::init$(i);
	$set(this, bi, i);
}

BranchHandle* BranchHandle::getBranchHandle($BranchInstruction* i) {
	$init(BranchHandle);
	return $new(BranchHandle, i);
}

int32_t BranchHandle::getPosition() {
	return $nc(this->bi)->getPosition();
}

void BranchHandle::setPosition(int32_t pos) {
	$nc(this->bi)->setPosition(pos);
	$InstructionHandle::setPosition(pos);
}

int32_t BranchHandle::updatePosition(int32_t offset, int32_t max_offset) {
	int32_t x = $nc(this->bi)->updatePosition(offset, max_offset);
	$InstructionHandle::setPosition($nc(this->bi)->getPosition());
	return x;
}

void BranchHandle::setTarget($InstructionHandle* ih) {
	$nc(this->bi)->setTarget(ih);
}

void BranchHandle::updateTarget($InstructionHandle* old_ih, $InstructionHandle* new_ih) {
	$nc(this->bi)->updateTarget(old_ih, new_ih);
}

$InstructionHandle* BranchHandle::getTarget() {
	return $nc(this->bi)->getTarget();
}

void BranchHandle::setInstruction($Instruction* i) {
	$InstructionHandle::setInstruction(i);
	if (!($instanceOf($BranchInstruction, i))) {
		$throwNew($ClassGenException, $$str({"Assigning "_s, i, " to branch handle which is not a branch instruction"_s}));
	}
	$set(this, bi, $cast($BranchInstruction, i));
}

BranchHandle::BranchHandle() {
}

$Class* BranchHandle::load$($String* name, bool initialize) {
	$loadClass(BranchHandle, name, initialize, &_BranchHandle_ClassInfo_, allocate$BranchHandle);
	return class$;
}

$Class* BranchHandle::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com