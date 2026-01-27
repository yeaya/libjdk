#include <com/sun/org/apache/bcel/internal/generic/ReturnaddressType.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

#undef NO_TARGET
#undef T_ADDRESS

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
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

$FieldInfo _ReturnaddressType_FieldInfo_[] = {
	{"NO_TARGET", "Lcom/sun/org/apache/bcel/internal/generic/ReturnaddressType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReturnaddressType, NO_TARGET)},
	{"returnTarget", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(ReturnaddressType, returnTarget)},
	{}
};

$MethodInfo _ReturnaddressType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ReturnaddressType, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(ReturnaddressType, init$, void, $InstructionHandle*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ReturnaddressType, equals, bool, Object$*)},
	{"getTarget", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(ReturnaddressType, getTarget, $InstructionHandle*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ReturnaddressType, hashCode, int32_t)},
	{}
};

$ClassInfo _ReturnaddressType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ReturnaddressType",
	"com.sun.org.apache.bcel.internal.generic.Type",
	nullptr,
	_ReturnaddressType_FieldInfo_,
	_ReturnaddressType_MethodInfo_
};

$Object* allocate$ReturnaddressType($Class* clazz) {
	return $of($alloc(ReturnaddressType));
}

ReturnaddressType* ReturnaddressType::NO_TARGET = nullptr;

void ReturnaddressType::init$() {
	$Type::init$($Const::T_ADDRESS, "<return address>"_s);
}

void ReturnaddressType::init$($InstructionHandle* returnTarget) {
	$Type::init$($Const::T_ADDRESS, $$str({"<return address targeting "_s, returnTarget, ">"_s}));
	$set(this, returnTarget, returnTarget);
}

int32_t ReturnaddressType::hashCode() {
	if (this->returnTarget == nullptr) {
		return 0;
	}
	return $nc($of(this->returnTarget))->hashCode();
}

bool ReturnaddressType::equals(Object$* rat) {
	if (!($instanceOf(ReturnaddressType, rat))) {
		return false;
	}
	$var(ReturnaddressType, that, $cast(ReturnaddressType, rat));
	if (this->returnTarget == nullptr || $nc(that)->returnTarget == nullptr) {
		return that->returnTarget == this->returnTarget;
	}
	return $nc($of($nc(that)->returnTarget))->equals(this->returnTarget);
}

$InstructionHandle* ReturnaddressType::getTarget() {
	return this->returnTarget;
}

void clinit$ReturnaddressType($Class* class$) {
	$assignStatic(ReturnaddressType::NO_TARGET, $new(ReturnaddressType));
}

ReturnaddressType::ReturnaddressType() {
}

$Class* ReturnaddressType::load$($String* name, bool initialize) {
	$loadClass(ReturnaddressType, name, initialize, &_ReturnaddressType_ClassInfo_, clinit$ReturnaddressType, allocate$ReturnaddressType);
	return class$;
}

$Class* ReturnaddressType::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com