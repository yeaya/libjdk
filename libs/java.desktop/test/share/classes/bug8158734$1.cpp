#include <bug8158734$1.h>
#include <bug8158734$MyClassloader.h>
#include <bug8158734$MyEditorKit.h>
#include <bug8158734.h>
#include <java/lang/ClassLoader.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/EditorKit.h>
#include <jcpp.h>

using $bug8158734 = ::bug8158734;
using $bug8158734$MyClassloader = ::bug8158734$MyClassloader;
using $bug8158734$MyEditorKit = ::bug8158734$MyEditorKit;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JEditorPane = ::javax::swing::JEditorPane;

void bug8158734$1::init$() {
}

void bug8158734$1::run() {
	$useLocalObjectStack();
	$var($JEditorPane, c, $new($JEditorPane));
	c->setContentType("test/test"_s);
	$var($bug8158734$MyClassloader, loader, $new($bug8158734$MyClassloader));
	$load($bug8158734$MyEditorKit);
	$JEditorPane::registerEditorKitForContentType("test2/test2"_s, $($bug8158734$MyEditorKit::class$->getName()), loader);
	$JEditorPane::registerEditorKitForContentType("test2/test2"_s, $($bug8158734$MyEditorKit::class$->getName()), nullptr);
	$JEditorPane::createEditorKitForContentType("test2/test2"_s);
	$init($bug8158734);
	if ($bug8158734::myClassloaderWasUsed) {
		$throwNew($RuntimeException, $$str({"Class loader has not been removed for \'"_s, "test2/test2"_s, "\' type"_s}));
	}
}

bug8158734$1::bug8158734$1() {
}

$Class* bug8158734$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8158734$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8158734$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8158734",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8158734$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8158734$1",
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
		"bug8158734"
	};
	$loadClass(bug8158734$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8158734$1);
	});
	return class$;
}

$Class* bug8158734$1::class$ = nullptr;