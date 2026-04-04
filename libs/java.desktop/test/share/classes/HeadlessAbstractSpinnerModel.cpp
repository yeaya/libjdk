#include <HeadlessAbstractSpinnerModel.h>
#include <HeadlessAbstractSpinnerModel$1.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <jcpp.h>

using $HeadlessAbstractSpinnerModel$1 = ::HeadlessAbstractSpinnerModel$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;

void HeadlessAbstractSpinnerModel::init$() {
}

void HeadlessAbstractSpinnerModel::main($StringArray* args) {
	$var($AbstractSpinnerModel, model, $new($HeadlessAbstractSpinnerModel$1));
	model->getPreviousValue();
	model->getNextValue();
	model->setValue("next"_s);
	model->getValue();
}

HeadlessAbstractSpinnerModel::HeadlessAbstractSpinnerModel() {
}

$Class* HeadlessAbstractSpinnerModel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessAbstractSpinnerModel, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessAbstractSpinnerModel, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessAbstractSpinnerModel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessAbstractSpinnerModel",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HeadlessAbstractSpinnerModel$1"
	};
	$loadClass(HeadlessAbstractSpinnerModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessAbstractSpinnerModel);
	});
	return class$;
}

$Class* HeadlessAbstractSpinnerModel::class$ = nullptr;