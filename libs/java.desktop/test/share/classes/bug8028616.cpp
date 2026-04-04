#include <bug8028616.h>
#include <bug8028616$ParserCB.h>
#include <java/io/StringReader.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $bug8028616$ParserCB = ::bug8028616$ParserCB;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$String* bug8028616::text = nullptr;
$Object* bug8028616::lock = nullptr;
bool bug8028616::isCallbackInvoked = false;
$Exception* bug8028616::exception = nullptr;

void bug8028616::init$() {
}

void bug8028616::main($StringArray* args) {
	$init(bug8028616);
	$useLocalObjectStack();
	$var($bug8028616$ParserCB, cb, $new($bug8028616$ParserCB));
	$var($HTMLEditorKit, htmlKit, $new($HTMLEditorKit));
	$var($HTMLDocument, htmlDoc, $cast($HTMLDocument, htmlKit->createDefaultDocument()));
	$$nc($nc(htmlDoc)->getParser())->parse($$new($StringReader, bug8028616::text), cb, true);
	$synchronized(bug8028616::lock) {
		if (!bug8028616::isCallbackInvoked) {
			bug8028616::lock->wait(5000);
		}
	}
	if (!bug8028616::isCallbackInvoked) {
		$throwNew($RuntimeException, $$str({"Test Failed: ParserCallback.handleText() is not invoked for text - "_s, bug8028616::text}));
	}
	if (bug8028616::exception != nullptr) {
		$throw(bug8028616::exception);
	}
}

void bug8028616::clinit$($Class* clazz) {
	$assignStatic(bug8028616::text, "/ at start is bad"_s);
	$assignStatic(bug8028616::lock, $new($Object));
	bug8028616::isCallbackInvoked = false;
	$assignStatic(bug8028616::exception, nullptr);
}

bug8028616::bug8028616() {
}

$Class* bug8028616::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"text", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8028616, text)},
		{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(bug8028616, lock)},
		{"isCallbackInvoked", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug8028616, isCallbackInvoked)},
		{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE | $STATIC, $staticField(bug8028616, exception)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8028616, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8028616, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8028616$ParserCB", "bug8028616", "ParserCB", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8028616",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8028616$ParserCB"
	};
	$loadClass(bug8028616, name, initialize, &classInfo$$, bug8028616::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8028616);
	});
	return class$;
}

$Class* bug8028616::class$ = nullptr;