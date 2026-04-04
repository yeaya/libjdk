#include <ListSelectionModelTest.h>
#include <ListSelectionModelTest$1.h>
#include <java/util/Arrays.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION
#undef SINGLE_INTERVAL_SELECTION
#undef SINGLE_SELECTION

using $ListSelectionModelTest$1 = ::ListSelectionModelTest$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JList = ::javax::swing::JList;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

void ListSelectionModelTest::init$() {
}

void ListSelectionModelTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelInfoArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelInfoArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait($$new($ListSelectionModelTest$1, lookAndFeelInfo));
			}
		}
	}
}

void ListSelectionModelTest::CreateGUIAndTest($String* lookAndFeel) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel(lookAndFeel);
	$var($DefaultListModel, listModel, $new($DefaultListModel));
	for (int32_t j = 0; j < 10; ++j) {
		listModel->add(j, $$str({"Item: "_s, $$str(j)}));
	}
	$var($JList, list, $new($JList, listModel));
	$var($ListSelectionModel, selectionModel, list->getSelectionModel());
	$nc(selectionModel)->setSelectionMode($ListSelectionModel::SINGLE_INTERVAL_SELECTION);
	selectionModel->setSelectionInterval(0, 1);
	checkSelection(list, $$new($ints, {
		0,
		1
	}), lookAndFeel);
	selectionModel->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	selectionModel->setSelectionInterval(0, 2);
	checkSelection(list, $$new($ints, {
		0,
		1,
		2
	}), lookAndFeel);
	selectionModel->addSelectionInterval(5, 7);
	checkSelection(list, $$new($ints, {
		0,
		1,
		2,
		5,
		6,
		7
	}), lookAndFeel);
	selectionModel->setSelectionMode($ListSelectionModel::SINGLE_INTERVAL_SELECTION);
	checkSelection(list, $$new($ints, {
		0,
		1,
		2
	}), lookAndFeel);
	selectionModel->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
	checkSelection(list, $$new($ints, {0}), lookAndFeel);
	selectionModel->setSelectionMode($ListSelectionModel::SINGLE_INTERVAL_SELECTION);
	selectionModel->addSelectionInterval(4, 5);
	checkSelection(list, $$new($ints, {
		4,
		5
	}), lookAndFeel);
	selectionModel->addSelectionInterval(0, 2);
	checkSelection(list, $$new($ints, {
		0,
		1,
		2
	}), lookAndFeel);
	selectionModel->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	selectionModel->addSelectionInterval(6, 7);
	checkSelection(list, $$new($ints, {
		0,
		1,
		2,
		6,
		7
	}), lookAndFeel);
	$nc($System::out)->println($$str({"Test passed for "_s, lookAndFeel}));
}

void ListSelectionModelTest::checkSelection($JList* list, $ints* selectionArray, $String* lookAndFeel) {
	$useLocalObjectStack();
	$var($ints, listSelection, $nc(list)->getSelectedIndices());
	if ($nc(listSelection)->length != $nc(selectionArray)->length) {
		$nc($System::out)->println($$str({"Expected: "_s, $($Arrays::toString(selectionArray))}));
		$System::out->println($$str({"Actual: "_s, $($Arrays::toString(listSelection))}));
		$throwNew($RuntimeException, $$str({"Wrong selection for "_s, lookAndFeel}));
	}
	$Arrays::sort(listSelection);
	$Arrays::sort(selectionArray);
	if (!$Arrays::equals(listSelection, selectionArray)) {
		$nc($System::out)->println($$str({"Expected: "_s, $($Arrays::toString(selectionArray))}));
		$System::out->println($$str({"Actual: "_s, $($Arrays::toString(listSelection))}));
		$throwNew($RuntimeException, $$str({"Wrong selection for "_s, lookAndFeel}));
	}
}

ListSelectionModelTest::ListSelectionModelTest() {
}

$Class* ListSelectionModelTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ListSelectionModelTest, init$, void)},
		{"CreateGUIAndTest", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(ListSelectionModelTest, CreateGUIAndTest, void, $String*), "java.lang.Exception"},
		{"checkSelection", "(Ljavax/swing/JList;[ILjava/lang/String;)V", nullptr, $STATIC, $staticMethod(ListSelectionModelTest, checkSelection, void, $JList*, $ints*, $String*), "java.lang.RuntimeException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ListSelectionModelTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ListSelectionModelTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ListSelectionModelTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ListSelectionModelTest$1"
	};
	$loadClass(ListSelectionModelTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListSelectionModelTest);
	});
	return class$;
}

$Class* ListSelectionModelTest::class$ = nullptr;