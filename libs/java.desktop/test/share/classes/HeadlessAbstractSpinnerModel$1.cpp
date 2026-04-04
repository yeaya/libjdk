#include <HeadlessAbstractSpinnerModel$1.h>
#include <HeadlessAbstractSpinnerModel.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;

void HeadlessAbstractSpinnerModel$1::init$() {
	$AbstractSpinnerModel::init$();
}

$Object* HeadlessAbstractSpinnerModel$1::getValue() {
	return nullptr;
}

void HeadlessAbstractSpinnerModel$1::setValue(Object$* value) {
}

$Object* HeadlessAbstractSpinnerModel$1::getNextValue() {
	return nullptr;
}

$Object* HeadlessAbstractSpinnerModel$1::getPreviousValue() {
	return nullptr;
}

HeadlessAbstractSpinnerModel$1::HeadlessAbstractSpinnerModel$1() {
}

$Class* HeadlessAbstractSpinnerModel$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessAbstractSpinnerModel$1, init$, void)},
		{"getNextValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HeadlessAbstractSpinnerModel$1, getNextValue, $Object*)},
		{"getPreviousValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HeadlessAbstractSpinnerModel$1, getPreviousValue, $Object*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HeadlessAbstractSpinnerModel$1, getValue, $Object*)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(HeadlessAbstractSpinnerModel$1, setValue, void, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessAbstractSpinnerModel",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessAbstractSpinnerModel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessAbstractSpinnerModel$1",
		"javax.swing.AbstractSpinnerModel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HeadlessAbstractSpinnerModel"
	};
	$loadClass(HeadlessAbstractSpinnerModel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessAbstractSpinnerModel$1));
	});
	return class$;
}

$Class* HeadlessAbstractSpinnerModel$1::class$ = nullptr;