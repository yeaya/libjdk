#include <HeadlessSpinnerListModel.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <javax/swing/SpinnerListModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedList = ::java::util::LinkedList;
using $SpinnerListModel = ::javax::swing::SpinnerListModel;

void HeadlessSpinnerListModel::init$() {
}

void HeadlessSpinnerListModel::main($StringArray* args) {
	$useLocalObjectStack();
	$var($LinkedList, list, $new($LinkedList));
	list->add("prev"_s);
	list->add("this"_s);
	list->add("next"_s);
	$var($SpinnerListModel, m, nullptr);
	$assign(m, $new($SpinnerListModel, list));
	$assign(m, $new($SpinnerListModel, $$new($StringArray, {
		"prev"_s,
		"this"_s,
		"next"_s
	})));
	m->getList();
	m->setList(list);
	m->setValue("next"_s);
	m->getNextValue();
	m->getPreviousValue();
}

HeadlessSpinnerListModel::HeadlessSpinnerListModel() {
}

$Class* HeadlessSpinnerListModel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessSpinnerListModel, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessSpinnerListModel, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessSpinnerListModel",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessSpinnerListModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessSpinnerListModel);
	});
	return class$;
}

$Class* HeadlessSpinnerListModel::class$ = nullptr;