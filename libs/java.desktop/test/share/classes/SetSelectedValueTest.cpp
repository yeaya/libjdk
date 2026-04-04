#include <SetSelectedValueTest.h>
#include <SetSelectedValueTest$1.h>
#include <java/util/List.h>
#include <javax/swing/JList.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $SetSelectedValueTest$1 = ::SetSelectedValueTest$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;
using $JList = ::javax::swing::JList;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void SetSelectedValueTest::init$() {
}

void SetSelectedValueTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($SetSelectedValueTest$1));
}

void SetSelectedValueTest::checkSelectionByList($JList* list, $List* selectionList) {
	$useLocalObjectStack();
	$var($List, listSelection, $nc(list)->getSelectedValuesList());
	if (!$nc(listSelection)->equals(selectionList)) {
		$nc($System::out)->println($$str({"Expected: "_s, selectionList}));
		$System::out->println($$str({"Actual: "_s, listSelection}));
		$throwNew($RuntimeException, "Wrong selection"_s);
	}
}

SetSelectedValueTest::SetSelectedValueTest() {
}

$Class* SetSelectedValueTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetSelectedValueTest, init$, void)},
		{"checkSelectionByList", "(Ljavax/swing/JList;Ljava/util/List;)V", "(Ljavax/swing/JList;Ljava/util/List<Ljava/lang/String;>;)V", $STATIC, $staticMethod(SetSelectedValueTest, checkSelectionByList, void, $JList*, $List*), "java.lang.RuntimeException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetSelectedValueTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SetSelectedValueTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SetSelectedValueTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SetSelectedValueTest$1"
	};
	$loadClass(SetSelectedValueTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetSelectedValueTest);
	});
	return class$;
}

$Class* SetSelectedValueTest::class$ = nullptr;