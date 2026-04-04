#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <java/io/Reader.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLEditorKit$Parser::init$() {
}

HTMLEditorKit$Parser::HTMLEditorKit$Parser() {
}

$Class* HTMLEditorKit$Parser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(HTMLEditorKit$Parser, init$, void)},
		{"parse", "(Ljava/io/Reader;Ljavax/swing/text/html/HTMLEditorKit$ParserCallback;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HTMLEditorKit$Parser, parse, void, $Reader*, $HTMLEditorKit$ParserCallback*, bool), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLEditorKit$Parser", "javax.swing.text.html.HTMLEditorKit", "Parser", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.text.html.HTMLEditorKit$Parser",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.HTMLEditorKit"
	};
	$loadClass(HTMLEditorKit$Parser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLEditorKit$Parser);
	});
	return class$;
}

$Class* HTMLEditorKit$Parser::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax