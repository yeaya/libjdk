#include <bug7011777$MyParserCallback.h>
#include <bug7011777.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <jcpp.h>

using $bug7011777 = ::bug7011777;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

void bug7011777$MyParserCallback::init$() {
	$HTMLEditorKit$ParserCallback::init$();
}

void bug7011777$MyParserCallback::handleComment($chars* data, int32_t pos) {
	$useLocalObjectStack();
	$init($bug7011777);
	int32_t var$0 = "<!--"_s->length();
	int32_t var$1 = $nc($bug7011777::comment)->length();
	$var($String, commentWithoutTags, $nc($bug7011777::comment)->substring(var$0, var$1 - "-->"_s->length()));
	$var($String, str, $new($String, data));
	if (!commentWithoutTags->equals(str)) {
		$nc($System::out)->println($$str({"Sample string:\n"_s, commentWithoutTags}));
		$System::out->println($$str({"Returned string:\n"_s, str}));
		$throwNew($RuntimeException, "Test Failed, sample and returned strings are mismatched!"_s);
	}
}

bug7011777$MyParserCallback::bug7011777$MyParserCallback() {
}

$Class* bug7011777$MyParserCallback::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7011777$MyParserCallback, init$, void)},
		{"handleComment", "([CI)V", nullptr, $PUBLIC, $virtualMethod(bug7011777$MyParserCallback, handleComment, void, $chars*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7011777$MyParserCallback", "bug7011777", "MyParserCallback", $STATIC},
		{"javax.swing.text.html.HTMLEditorKit$ParserCallback", "javax.swing.text.html.HTMLEditorKit", "ParserCallback", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7011777$MyParserCallback",
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
		"bug7011777"
	};
	$loadClass(bug7011777$MyParserCallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7011777$MyParserCallback);
	});
	return class$;
}

$Class* bug7011777$MyParserCallback::class$ = nullptr;