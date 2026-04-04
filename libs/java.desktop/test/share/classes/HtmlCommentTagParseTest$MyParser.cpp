#include <HtmlCommentTagParseTest$MyParser.h>
#include <HtmlCommentTagParseTest.h>
#include <java/lang/CharSequence.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <jcpp.h>

using $HtmlCommentTagParseTest = ::HtmlCommentTagParseTest;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

void HtmlCommentTagParseTest$MyParser::init$() {
	$HTMLEditorKit$ParserCallback::init$();
}

void HtmlCommentTagParseTest$MyParser::handleError($String* errorMsg, int32_t pos) {
	$init($HtmlCommentTagParseTest);
	$HtmlCommentTagParseTest::failed = $nc(errorMsg)->contains("eof.script"_s);
}

HtmlCommentTagParseTest$MyParser::HtmlCommentTagParseTest$MyParser() {
}

$Class* HtmlCommentTagParseTest$MyParser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HtmlCommentTagParseTest$MyParser, init$, void)},
		{"handleError", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(HtmlCommentTagParseTest$MyParser, handleError, void, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HtmlCommentTagParseTest$MyParser", "HtmlCommentTagParseTest", "MyParser", $PRIVATE | $STATIC},
		{"javax.swing.text.html.HTMLEditorKit$ParserCallback", "javax.swing.text.html.HTMLEditorKit", "ParserCallback", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HtmlCommentTagParseTest$MyParser",
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
		"HtmlCommentTagParseTest"
	};
	$loadClass(HtmlCommentTagParseTest$MyParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HtmlCommentTagParseTest$MyParser);
	});
	return class$;
}

$Class* HtmlCommentTagParseTest$MyParser::class$ = nullptr;