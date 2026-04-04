#include <SetSelectedValueTest$1.h>
#include <SetSelectedValueTest.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION

using $SetSelectedValueTest = ::SetSelectedValueTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JList = ::javax::swing::JList;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

void SetSelectedValueTest$1::init$() {
}

void SetSelectedValueTest$1::run() {
	$useLocalObjectStack();
	$var($DefaultListModel, dlm, $new($DefaultListModel));
	$var($JList, list, $new($JList, dlm));
	list->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	dlm->addElement("1"_s);
	dlm->addElement("2"_s);
	list->setSelectionInterval(0, 1);
	$SetSelectedValueTest::checkSelectionByList(list, $($List::of("1"_s, "2"_s)));
	list->setSelectedValue(nullptr, true);
	$SetSelectedValueTest::checkSelectionByList(list, $($Collections::emptyList()));
	list->setSelectionInterval(0, 1);
	$SetSelectedValueTest::checkSelectionByList(list, $($List::of("1"_s, "2"_s)));
}

SetSelectedValueTest$1::SetSelectedValueTest$1() {
}

$Class* SetSelectedValueTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SetSelectedValueTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SetSelectedValueTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SetSelectedValueTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SetSelectedValueTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SetSelectedValueTest$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SetSelectedValueTest"
	};
	$loadClass(SetSelectedValueTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetSelectedValueTest$1);
	});
	return class$;
}

$Class* SetSelectedValueTest$1::class$ = nullptr;