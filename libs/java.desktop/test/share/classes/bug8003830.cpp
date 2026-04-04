#include <bug8003830.h>
#include <bug8003830$NullReturningTreeUI.h>
#include <java/awt/EventQueue.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/basic/BasicTreeUI$TreePageAction.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $bug8003830$NullReturningTreeUI = ::bug8003830$NullReturningTreeUI;
using $EventQueue = ::java::awt::EventQueue;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$TreePageAction = ::javax::swing::plaf::basic::BasicTreeUI$TreePageAction;

void bug8003830::init$() {
}

void bug8003830::main($StringArray* args) {
	$init(bug8003830);
	$EventQueue::invokeAndWait($$new(bug8003830));
}

void bug8003830::run() {
	testNPEAtActionsPage();
}

void bug8003830::testNPEAtActionsPage() {
	$useLocalObjectStack();
	$var($JTree, tree, $new($JTree));
	$var($BasicTreeUI, ui, $new($bug8003830$NullReturningTreeUI));
	tree->setUI(ui);
	$var($BasicTreeUI$TreePageAction, tpa, $new($BasicTreeUI$TreePageAction, ui, 0, "down"_s));
	tpa->actionPerformed($$new($ActionEvent, tree, 0, ""_s));
}

bug8003830::bug8003830() {
}

$Class* bug8003830::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8003830, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8003830, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8003830, run, void)},
		{"testNPEAtActionsPage", "()V", nullptr, $PUBLIC, $virtualMethod(bug8003830, testNPEAtActionsPage, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8003830$NullReturningTreeUI", "bug8003830", "NullReturningTreeUI", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8003830",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8003830$NullReturningTreeUI"
	};
	$loadClass(bug8003830, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8003830);
	});
	return class$;
}

$Class* bug8003830::class$ = nullptr;