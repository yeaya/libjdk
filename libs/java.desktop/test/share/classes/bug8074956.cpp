#include <bug8074956.h>
#include <javax/swing/text/html/parser/ContentModel.h>
#include <javax/swing/text/html/parser/DTD.h>
#include <javax/swing/text/html/parser/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentModel = ::javax::swing::text::html::parser::ContentModel;
using $DTD = ::javax::swing::text::html::parser::DTD;
using $Element = ::javax::swing::text::html::parser::Element;

void bug8074956::init$() {
}

void bug8074956::main($StringArray* args) {
	$useLocalObjectStack();
	$var($DTD, html32, $DTD::getDTD("html32"_s));
	$var($ContentModel, contentModel, $new($ContentModel, u'&', $$new($ContentModel)));
	$var($Element, elem1, $nc(html32)->getElement("html-element"_s));
	contentModel->first(elem1);
	$var($Element, elem2, html32->getElement("test-element"_s));
	contentModel->first(elem2);
}

bug8074956::bug8074956() {
}

$Class* bug8074956::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8074956, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8074956, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8074956",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8074956, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8074956);
	});
	return class$;
}

$Class* bug8074956::class$ = nullptr;