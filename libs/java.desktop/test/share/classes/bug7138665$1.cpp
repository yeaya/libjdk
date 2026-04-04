#include <bug7138665$1.h>
#include <bug7138665.h>
#include <java/awt/Component.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

#undef OK_CANCEL_OPTION
#undef OK_OPTION
#undef QUESTION_MESSAGE

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Icon = ::javax::swing::Icon;
using $JDialog = ::javax::swing::JDialog;
using $JOptionPane = ::javax::swing::JOptionPane;

void bug7138665$1::init$() {
}

void bug7138665$1::run() {
	$useLocalObjectStack();
	$var($JOptionPane, pane, $new($JOptionPane, "Enter value"_s, $JOptionPane::QUESTION_MESSAGE, $JOptionPane::OK_CANCEL_OPTION, nullptr, nullptr, nullptr));
	pane->setWantsInput(true);
	$var($JDialog, dialog, pane->createDialog(nullptr, "My Dialog"_s));
	$nc(dialog)->setVisible(true);
	$var($Object, result, pane->getValue());
	if (result == nullptr || $cast($Integer, result)->intValue() != $JOptionPane::OK_OPTION) {
		$throwNew($RuntimeException, $$str({"Invalid result: "_s, result}));
	}
	$nc($System::out)->println("Test bug7138665 passed"_s);
}

bug7138665$1::bug7138665$1() {
}

$Class* bug7138665$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7138665$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7138665$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7138665",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7138665$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7138665$1",
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
		"bug7138665"
	};
	$loadClass(bug7138665$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7138665$1);
	});
	return class$;
}

$Class* bug7138665$1::class$ = nullptr;