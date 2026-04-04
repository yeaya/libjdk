#include <GetSelectedValueTest.h>
#include <GetSelectedValueTest$1.h>
#include <java/util/Objects.h>
#include <javax/swing/JList.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $GetSelectedValueTest$1 = ::GetSelectedValueTest$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Objects = ::java::util::Objects;
using $JList = ::javax::swing::JList;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void GetSelectedValueTest::init$() {
}

void GetSelectedValueTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($GetSelectedValueTest$1));
}

void GetSelectedValueTest::checkSelectedIndex($JList* list, Object$* value) {
	$useLocalObjectStack();
	$var($Object, selectedObject, $nc(list)->getSelectedValue());
	if (!$Objects::equals(value, selectedObject)) {
		$nc($System::out)->println($$str({"Expected: "_s, value}));
		$System::out->println($$str({"Actual: "_s, selectedObject}));
		$throwNew($RuntimeException, "Wrong selection"_s);
	}
}

GetSelectedValueTest::GetSelectedValueTest() {
}

$Class* GetSelectedValueTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetSelectedValueTest, init$, void)},
		{"checkSelectedIndex", "(Ljavax/swing/JList;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(GetSelectedValueTest, checkSelectedIndex, void, $JList*, Object$*), "java.lang.RuntimeException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetSelectedValueTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetSelectedValueTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetSelectedValueTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"GetSelectedValueTest$1"
	};
	$loadClass(GetSelectedValueTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetSelectedValueTest);
	});
	return class$;
}

$Class* GetSelectedValueTest::class$ = nullptr;