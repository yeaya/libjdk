#include <ListSelectionModelTest$1.h>
#include <ListSelectionModelTest.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <jcpp.h>

using $ListSelectionModelTest = ::ListSelectionModelTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

void ListSelectionModelTest$1::init$($UIManager$LookAndFeelInfo* val$lookAndFeelInfo) {
	$set(this, val$lookAndFeelInfo, val$lookAndFeelInfo);
}

void ListSelectionModelTest$1::run() {
	try {
		$ListSelectionModelTest::CreateGUIAndTest($($nc(this->val$lookAndFeelInfo)->getClassName()));
	} catch ($Exception& e) {
		e->printStackTrace();
		$throwNew($RuntimeException, "Exception while running test"_s);
	}
}

ListSelectionModelTest$1::ListSelectionModelTest$1() {
}

$Class* ListSelectionModelTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$lookAndFeelInfo", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $FINAL | $SYNTHETIC, $field(ListSelectionModelTest$1, val$lookAndFeelInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", "()V", 0, $method(ListSelectionModelTest$1, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ListSelectionModelTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ListSelectionModelTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ListSelectionModelTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ListSelectionModelTest$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ListSelectionModelTest"
	};
	$loadClass(ListSelectionModelTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListSelectionModelTest$1);
	});
	return class$;
}

$Class* ListSelectionModelTest$1::class$ = nullptr;