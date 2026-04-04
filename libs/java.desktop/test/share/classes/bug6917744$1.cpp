#include <bug6917744$1.h>
#include <bug6917744.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/IOException.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

using $bug6917744 = ::bug6917744;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;

void bug6917744$1::init$() {
}

void bug6917744$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$init($bug6917744);
	$assignStatic($bug6917744::frame, $new($JFrame));
	$assignStatic($bug6917744::editorPane, $new($JEditorPane));
	try {
		$bug6917744::editorPane->setPage($($bug6917744::class$->getResource("/test.html"_s)));
	} catch ($IOException& e) {
		$nc($bug6917744::frame)->dispose();
		$throwNew($RuntimeException, "HTML resource not found"_s, e);
	}
	$assignStatic($bug6917744::scrollPane, $new($JScrollPane, $bug6917744::editorPane));
	$$nc($nc($bug6917744::frame)->getContentPane())->add($bug6917744::scrollPane);
	$nc($bug6917744::frame)->setSize(400, 300);
	$nc($bug6917744::frame)->setVisible(true);
}

bug6917744$1::bug6917744$1() {
}

$Class* bug6917744$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6917744$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6917744$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6917744",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6917744$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6917744$1",
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
		"bug6917744"
	};
	$loadClass(bug6917744$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6917744$1);
	});
	return class$;
}

$Class* bug6917744$1::class$ = nullptr;