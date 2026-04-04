#include <bug6797139$1.h>
#include <bug6797139.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;

void bug6797139$1::init$() {
	$BasicButtonUI::init$();
}

void bug6797139$1::paintText($Graphics* g, $AbstractButton* b, $Rectangle* textRect, $String* text) {
	$BasicButtonUI::paintText(g, b, textRect, text);
	if ($nc(text)->endsWith("..."_s)) {
		$throwNew($RuntimeException, "Text is truncated!"_s);
	}
}

bug6797139$1::bug6797139$1() {
}

$Class* bug6797139$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6797139$1, init$, void)},
		{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(bug6797139$1, paintText, void, $Graphics*, $AbstractButton*, $Rectangle*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6797139",
		"createGui",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6797139$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6797139$1",
		"javax.swing.plaf.basic.BasicButtonUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6797139"
	};
	$loadClass(bug6797139$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6797139$1);
	});
	return class$;
}

$Class* bug6797139$1::class$ = nullptr;