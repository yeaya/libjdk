#include <UIManagerSetLookAndFeelNPETest.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIManager = ::javax::swing::UIManager;

void UIManagerSetLookAndFeelNPETest::init$() {
}

void UIManagerSetLookAndFeelNPETest::main($StringArray* args) {
	bool NPEThrown = false;
	try {
		$UIManager::setLookAndFeel(($String*)nullptr);
	} catch ($NullPointerException& e) {
		NPEThrown = true;
	}
	if (!NPEThrown) {
		$throwNew($RuntimeException, "A NullPointerException is expected from setLookAndFeel(String), if the className is null"_s);
	}
}

UIManagerSetLookAndFeelNPETest::UIManagerSetLookAndFeelNPETest() {
}

$Class* UIManagerSetLookAndFeelNPETest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UIManagerSetLookAndFeelNPETest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManagerSetLookAndFeelNPETest, main, void, $StringArray*), "java.lang.ClassNotFoundException,javax.swing.UnsupportedLookAndFeelException,java.lang.InstantiationException,java.lang.IllegalAccessException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UIManagerSetLookAndFeelNPETest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UIManagerSetLookAndFeelNPETest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIManagerSetLookAndFeelNPETest);
	});
	return class$;
}

$Class* UIManagerSetLookAndFeelNPETest::class$ = nullptr;