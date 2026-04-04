#include <LostText$1.h>
#include <LostText.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $LostText = ::LostText;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;

void LostText$1::init$() {
}

void LostText$1::run() {
	$init($LostText);
	$assignStatic($LostText::f, $new($JFrame));
	$LostText::f->add($(getComp()));
	$nc($LostText::f)->setSize(300, 300);
	$nc($LostText::f)->setLocationRelativeTo(nullptr);
	$nc($LostText::f)->setVisible(true);
}

$Component* LostText$1::getComp() {
	$useLocalObjectStack();
	$var($JTable, jTable, $new($JTable, $($LostText::testSelectionWithFilterTable())));
	return jTable;
}

LostText$1::LostText$1() {
}

$Class* LostText$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LostText$1, init$, void)},
		{"getComp", "()Ljava/awt/Component;", nullptr, $PRIVATE, $method(LostText$1, getComp, $Component*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LostText$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LostText",
		"lostTextTest",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LostText$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LostText$1",
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
		"LostText"
	};
	$loadClass(LostText$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LostText$1);
	});
	return class$;
}

$Class* LostText$1::class$ = nullptr;