#include <bug6691503$1.h>
#include <bug6691503.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6691503 = ::bug6691503;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;

void bug6691503$1::init$($bug6691503* this$0) {
	$set(this, this$0, this$0);
}

void bug6691503$1::run() {
	$set(this->this$0, frame, $new($JFrame));
	this->this$0->frame->setVisible(true);
	$set(this->this$0, popupMenu, $new($JPopupMenu));
	$var($JMenuItem, click, $new($JMenuItem, "Click"_s));
	this->this$0->popupMenu->add(click);
}

bug6691503$1::bug6691503$1() {
}

$Class* bug6691503$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6691503;", nullptr, $FINAL | $SYNTHETIC, $field(bug6691503$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6691503;)V", nullptr, 0, $method(bug6691503$1, init$, void, $bug6691503*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6691503$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6691503",
		"setupUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6691503$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6691503$1",
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
		"bug6691503"
	};
	$loadClass(bug6691503$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6691503$1);
	});
	return class$;
}

$Class* bug6691503$1::class$ = nullptr;