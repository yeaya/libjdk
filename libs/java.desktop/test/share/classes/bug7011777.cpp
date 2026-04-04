#include <bug7011777.h>
#include <bug7011777$MyParserCallback.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <javax/swing/text/html/parser/ParserDelegator.h>
#include <jcpp.h>

using $bug7011777$MyParserCallback = ::bug7011777$MyParserCallback;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParserDelegator = ::javax::swing::text::html::parser::ParserDelegator;

$String* bug7011777::comment = nullptr;
$String* bug7011777::html = nullptr;

void bug7011777::init$() {
}

void bug7011777::main($StringArray* args) {
	$init(bug7011777);
	$useLocalObjectStack();
	$var($Reader, var$0, $new($StringReader, bug7011777::html));
	$$new($ParserDelegator)->parse(var$0, $$new($bug7011777$MyParserCallback), true);
}

void bug7011777::clinit$($Class* clazz) {
	$assignStatic(bug7011777::comment, "<!--\nfunction foo() {\n  var tag1 = \"</script>\";\n  var tag2 = \"<div>\";\n  var tag3 = \"</div>\";\n  var tag4 = \"<script>\";\n}\n// -->"_s);
	$assignStatic(bug7011777::html, $str({"<script>"_s, bug7011777::comment, "</script>"_s}));
}

bug7011777::bug7011777() {
}

$Class* bug7011777::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"comment", "Ljava/lang/String;", nullptr, $STATIC, $staticField(bug7011777, comment)},
		{"html", "Ljava/lang/String;", nullptr, $STATIC, $staticField(bug7011777, html)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7011777, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7011777, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7011777$MyParserCallback", "bug7011777", "MyParserCallback", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7011777",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7011777$MyParserCallback"
	};
	$loadClass(bug7011777, name, initialize, &classInfo$$, bug7011777::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug7011777);
	});
	return class$;
}

$Class* bug7011777::class$ = nullptr;