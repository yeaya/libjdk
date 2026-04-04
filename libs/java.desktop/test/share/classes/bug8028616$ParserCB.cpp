#include <bug8028616$ParserCB.h>
#include <bug8028616.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <jcpp.h>

using $bug8028616 = ::bug8028616;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

void bug8028616$ParserCB::init$() {
	$HTMLEditorKit$ParserCallback::init$();
}

void bug8028616$ParserCB::handleText($chars* data, int32_t pos) {
	$init($bug8028616);
	$synchronized($bug8028616::lock) {
		if (!"/ at start is bad"_s->equals($$new($String, data)) || pos != 0) {
			$assignStatic($bug8028616::exception, $new($RuntimeException, "Test Failed: the data passed to ParserCallback.handleText() does not meet the expectation"_s));
		}
		$bug8028616::isCallbackInvoked = true;
		$bug8028616::lock->notifyAll();
	}
}

bug8028616$ParserCB::bug8028616$ParserCB() {
}

$Class* bug8028616$ParserCB::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(bug8028616$ParserCB, init$, void)},
		{"handleText", "([CI)V", nullptr, $PUBLIC, $virtualMethod(bug8028616$ParserCB, handleText, void, $chars*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8028616$ParserCB", "bug8028616", "ParserCB", $PRIVATE | $STATIC},
		{"javax.swing.text.html.HTMLEditorKit$ParserCallback", "javax.swing.text.html.HTMLEditorKit", "ParserCallback", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8028616$ParserCB",
		"javax.swing.text.html.HTMLEditorKit$ParserCallback",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8028616"
	};
	$loadClass(bug8028616$ParserCB, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8028616$ParserCB);
	});
	return class$;
}

$Class* bug8028616$ParserCB::class$ = nullptr;