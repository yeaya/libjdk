#include <GetSelectedValueTest$1.h>
#include <GetSelectedValueTest.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION

using $GetSelectedValueTest = ::GetSelectedValueTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JList = ::javax::swing::JList;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

void GetSelectedValueTest$1::init$() {
}

void GetSelectedValueTest$1::run() {
	$useLocalObjectStack();
	$var($DefaultListModel, dlm, $new($DefaultListModel));
	$var($JList, list, $new($JList, dlm));
	list->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	dlm->addElement("1"_s);
	dlm->addElement("2"_s);
	list->setSelectionInterval(0, 2);
	$GetSelectedValueTest::checkSelectedIndex(list, "1"_s);
	list->setSelectionInterval(4, 5);
	$GetSelectedValueTest::checkSelectedIndex(list, nullptr);
}

GetSelectedValueTest$1::GetSelectedValueTest$1() {
}

$Class* GetSelectedValueTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetSelectedValueTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetSelectedValueTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GetSelectedValueTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetSelectedValueTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetSelectedValueTest$1",
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
		"GetSelectedValueTest"
	};
	$loadClass(GetSelectedValueTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetSelectedValueTest$1);
	});
	return class$;
}

$Class* GetSelectedValueTest$1::class$ = nullptr;