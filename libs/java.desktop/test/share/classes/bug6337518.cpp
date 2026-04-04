#include <bug6337518.h>
#include <bug6337518$1.h>
#include <javax/swing/JButton.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $bug6337518$1 = ::bug6337518$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;

void bug6337518::init$() {
	$BasicComboBoxUI::init$();
}

$JButton* bug6337518::createArrowButton() {
	return nullptr;
}

void bug6337518::main($StringArray* args) {
	$init(bug6337518);
	$SwingUtilities::invokeAndWait($$new($bug6337518$1));
}

bug6337518::bug6337518() {
}

$Class* bug6337518::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6337518, init$, void)},
		{"createArrowButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED, $virtualMethod(bug6337518, createArrowButton, $JButton*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6337518, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6337518$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6337518",
		"javax.swing.plaf.basic.BasicComboBoxUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6337518$1"
	};
	$loadClass(bug6337518, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6337518);
	});
	return class$;
}

$Class* bug6337518::class$ = nullptr;