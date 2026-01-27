#include <HeadlessAbstractSpinnerModel$1.h>

#include <HeadlessAbstractSpinnerModel.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;

$MethodInfo _HeadlessAbstractSpinnerModel$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HeadlessAbstractSpinnerModel$1, init$, void)},
	{"getNextValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HeadlessAbstractSpinnerModel$1, getNextValue, $Object*)},
	{"getPreviousValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HeadlessAbstractSpinnerModel$1, getPreviousValue, $Object*)},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HeadlessAbstractSpinnerModel$1, getValue, $Object*)},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(HeadlessAbstractSpinnerModel$1, setValue, void, Object$*)},
	{}
};

$EnclosingMethodInfo _HeadlessAbstractSpinnerModel$1_EnclosingMethodInfo_ = {
	"HeadlessAbstractSpinnerModel",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessAbstractSpinnerModel$1_InnerClassesInfo_[] = {
	{"HeadlessAbstractSpinnerModel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessAbstractSpinnerModel$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessAbstractSpinnerModel$1",
	"javax.swing.AbstractSpinnerModel",
	nullptr,
	nullptr,
	_HeadlessAbstractSpinnerModel$1_MethodInfo_,
	nullptr,
	&_HeadlessAbstractSpinnerModel$1_EnclosingMethodInfo_,
	_HeadlessAbstractSpinnerModel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessAbstractSpinnerModel"
};

$Object* allocate$HeadlessAbstractSpinnerModel$1($Class* clazz) {
	return $of($alloc(HeadlessAbstractSpinnerModel$1));
}

void HeadlessAbstractSpinnerModel$1::init$() {
	$AbstractSpinnerModel::init$();
}

$Object* HeadlessAbstractSpinnerModel$1::getValue() {
	return $of(nullptr);
}

void HeadlessAbstractSpinnerModel$1::setValue(Object$* value) {
}

$Object* HeadlessAbstractSpinnerModel$1::getNextValue() {
	return $of(nullptr);
}

$Object* HeadlessAbstractSpinnerModel$1::getPreviousValue() {
	return $of(nullptr);
}

HeadlessAbstractSpinnerModel$1::HeadlessAbstractSpinnerModel$1() {
}

$Class* HeadlessAbstractSpinnerModel$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessAbstractSpinnerModel$1, name, initialize, &_HeadlessAbstractSpinnerModel$1_ClassInfo_, allocate$HeadlessAbstractSpinnerModel$1);
	return class$;
}

$Class* HeadlessAbstractSpinnerModel$1::class$ = nullptr;