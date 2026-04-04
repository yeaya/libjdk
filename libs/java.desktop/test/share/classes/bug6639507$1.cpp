#include <bug6639507$1.h>
#include <bug6639507.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

#undef APPLICATION_MODAL

using $bug6639507 = ::bug6639507;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;

void bug6639507$1::init$() {
}

void bug6639507$1::run() {
	$useLocalObjectStack();
	$bug6639507::assertEmptyTitle($$new($Dialog, ($Frame*)nullptr), "new Dialog((Frame) null)"_s);
	$bug6639507::assertEmptyTitle($$new($Dialog, ($Frame*)nullptr, true), "new Dialog((Frame) null, true)"_s);
	$bug6639507::assertEmptyTitle($$new($Dialog, ($Dialog*)nullptr), "new Dialog((Dialog) null)"_s);
	$bug6639507::assertEmptyTitle($$new($Dialog, ($Window*)nullptr), "new Dialog((Window) null)"_s);
	$init($Dialog$ModalityType);
	$bug6639507::assertEmptyTitle($$new($Dialog, $$new($Dialog, ($Window*)nullptr), $Dialog$ModalityType::APPLICATION_MODAL), "new Dialog((Window) null), Dialog.ModalityType.APPLICATION_MODAL"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Frame*)nullptr), "new JDialog((Frame) null)"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Frame*)nullptr, true), "new JDialog((Frame) null, true)"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Dialog*)nullptr), "new JDialog((Dialog) null)"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Dialog*)nullptr, true), "new JDialog((Dialog) null, true)"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Window*)nullptr), "new JDialog((Window) null)"_s);
	$bug6639507::assertEmptyTitle($$new($JDialog, ($Window*)nullptr, $Dialog$ModalityType::APPLICATION_MODAL), "new JDialog((Window) null, Dialog.ModalityType.APPLICATION_MODAL)"_s);
}

bug6639507$1::bug6639507$1() {
}

$Class* bug6639507$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6639507$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6639507$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6639507",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6639507$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6639507$1",
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
		"bug6639507"
	};
	$loadClass(bug6639507$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6639507$1);
	});
	return class$;
}

$Class* bug6639507$1::class$ = nullptr;