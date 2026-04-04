#include <bug6691503$2.h>
#include <bug6691503.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6691503 = ::bug6691503;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6691503$2::init$($bug6691503* this$0) {
	$set(this, this$0, this$0);
}

void bug6691503$2::run() {
	$useLocalObjectStack();
	$nc(this->this$0->popupMenu)->show(this->this$0->frame, 0, 0);
	$var($Window, popupWindow, $cast($Window, $$nc($$nc($$nc($nc(this->this$0->popupMenu)->getParent())->getParent())->getParent())->getParent()));
	this->this$0->isAlwaysOnTop1 = $nc(popupWindow)->isAlwaysOnTop();
	$nc($System::out)->println($$str({"Application: popupWindow.isAlwaysOnTop() = "_s, $$str(this->this$0->isAlwaysOnTop1)}));
	$nc(this->this$0->popupMenu)->setVisible(false);
}

bug6691503$2::bug6691503$2() {
}

$Class* bug6691503$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6691503;", nullptr, $FINAL | $SYNTHETIC, $field(bug6691503$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6691503;)V", nullptr, 0, $method(bug6691503$2, init$, void, $bug6691503*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6691503$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6691503",
		"testApplication",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6691503$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6691503$2",
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
	$loadClass(bug6691503$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6691503$2);
	});
	return class$;
}

$Class* bug6691503$2::class$ = nullptr;