#include <HeadlessSpinnerNumberModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;

void HeadlessSpinnerNumberModel::init$() {
}

void HeadlessSpinnerNumberModel::main($StringArray* args) {
	$useLocalObjectStack();
	$var($SpinnerNumberModel, model, $new($SpinnerNumberModel));
	model->setValue($($Integer::valueOf(5)));
	model->getValue();
	model->getPreviousValue();
	model->getNextValue();
}

HeadlessSpinnerNumberModel::HeadlessSpinnerNumberModel() {
}

$Class* HeadlessSpinnerNumberModel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessSpinnerNumberModel, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessSpinnerNumberModel, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessSpinnerNumberModel",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessSpinnerNumberModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessSpinnerNumberModel);
	});
	return class$;
}

$Class* HeadlessSpinnerNumberModel::class$ = nullptr;