#include <bug6836089$1.h>
#include <bug6836089.h>
#include <java/lang/CharSequence.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextPane = ::javax::swing::JTextPane;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

void bug6836089$1::init$() {
}

void bug6836089$1::run() {
	$useLocalObjectStack();
	$var($JTextPane, htmlPane, $new($JTextPane));
	htmlPane->setEditorKit($$new($HTMLEditorKit));
	htmlPane->setText("<html><head></head><body>&#131072;</body></html>"_s);
	$var($String, str, htmlPane->getText());
	if ($nc(str)->contains("&#0;"_s)) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

bug6836089$1::bug6836089$1() {
}

$Class* bug6836089$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6836089$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6836089$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6836089",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6836089$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6836089$1",
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
		"bug6836089"
	};
	$loadClass(bug6836089$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6836089$1);
	});
	return class$;
}

$Class* bug6836089$1::class$ = nullptr;