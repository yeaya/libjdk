#include <GetSelectedValuesListTest$1.h>
#include <GetSelectedValuesListTest.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION

using $GetSelectedValuesListTest = ::GetSelectedValuesListTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JList = ::javax::swing::JList;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

void GetSelectedValuesListTest$1::init$() {
}

void GetSelectedValuesListTest$1::run() {
	$useLocalObjectStack();
	$var($DefaultListModel, dlm, $new($DefaultListModel));
	$var($JList, list, $new($JList, dlm));
	list->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	dlm->addElement("1"_s);
	dlm->addElement("2"_s);
	list->setSelectionInterval(0, 2);
	$GetSelectedValuesListTest::checkSelection(list, $($List::of("1"_s, "2"_s)));
	list->setSelectionInterval(4, 10);
	$GetSelectedValuesListTest::checkSelection(list, $($Collections::emptyList()));
	$$nc(list->getSelectionModel())->setSelectionInterval(0, 2);
	$GetSelectedValuesListTest::checkSelection(list, $($List::of("1"_s, "2"_s)));
}

GetSelectedValuesListTest$1::GetSelectedValuesListTest$1() {
}

$Class* GetSelectedValuesListTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetSelectedValuesListTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetSelectedValuesListTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GetSelectedValuesListTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetSelectedValuesListTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetSelectedValuesListTest$1",
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
		"GetSelectedValuesListTest"
	};
	$loadClass(GetSelectedValuesListTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetSelectedValuesListTest$1);
	});
	return class$;
}

$Class* GetSelectedValuesListTest$1::class$ = nullptr;