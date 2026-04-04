#include <GetSelectedValuesListTest.h>
#include <GetSelectedValuesListTest$1.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/JList.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $GetSelectedValuesListTest$1 = ::GetSelectedValuesListTest$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $JList = ::javax::swing::JList;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void GetSelectedValuesListTest::init$() {
}

void GetSelectedValuesListTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($GetSelectedValuesListTest$1));
}

void GetSelectedValuesListTest::checkSelection($JList* list, $List* selectionList) {
	$useLocalObjectStack();
	$var($List, listSelection, $nc(list)->getSelectedValuesList());
	if (!$nc(listSelection)->equals(selectionList)) {
		$nc($System::out)->println($$str({"Expected: "_s, selectionList}));
		$System::out->println($$str({"Actual: "_s, listSelection}));
		$throwNew($RuntimeException, "Wrong selection from getSelectedValuesList"_s);
	}
	$var($ObjectArray, arraySelection, list->getSelectedValues());
	if (!$Arrays::equals(arraySelection, $($nc(selectionList)->toArray()))) {
		$nc($System::out)->println($$str({"Expected: "_s, selectionList}));
		$System::out->println($$str({"Actual: "_s, $($Arrays::asList(arraySelection))}));
		$throwNew($RuntimeException, "Wrong selection from getSelectedValues"_s);
	}
}

GetSelectedValuesListTest::GetSelectedValuesListTest() {
}

$Class* GetSelectedValuesListTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetSelectedValuesListTest, init$, void)},
		{"checkSelection", "(Ljavax/swing/JList;Ljava/util/List;)V", "(Ljavax/swing/JList;Ljava/util/List<Ljava/lang/String;>;)V", $STATIC, $staticMethod(GetSelectedValuesListTest, checkSelection, void, $JList*, $List*), "java.lang.RuntimeException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetSelectedValuesListTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetSelectedValuesListTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetSelectedValuesListTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"GetSelectedValuesListTest$1"
	};
	$loadClass(GetSelectedValuesListTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetSelectedValuesListTest);
	});
	return class$;
}

$Class* GetSelectedValuesListTest::class$ = nullptr;