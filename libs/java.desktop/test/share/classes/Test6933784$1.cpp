#include <Test6933784$1.h>
#include <Test6933784.h>
#include <java/io/StringReader.h>
#include <javax/swing/Icon.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/ImageView.h>
#include <jcpp.h>

using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Element = ::javax::swing::text::Element;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $ImageView = ::javax::swing::text::html::ImageView;

void Test6933784$1::init$() {
}

void Test6933784$1::run() {
	$useLocalObjectStack();
	$var($HTMLEditorKit, c, $new($HTMLEditorKit));
	$var($HTMLDocument, doc, $new($HTMLDocument));
	try {
		c->read($$new($StringReader, "<HTML><TITLE>Test</TITLE><BODY><IMG id=test></BODY></HTML>"_s), $cast($AbstractDocument, doc), 0);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, "The test failed"_s, e);
	}
	$var($Element, elem, doc->getElement("test"_s));
	$var($ImageView, iv, $new($ImageView, elem));
	if (iv->getLoadingImageIcon() == nullptr) {
		$throwNew($RuntimeException, "getLoadingImageIcon returns null"_s);
	}
	if (iv->getNoImageIcon() == nullptr) {
		$throwNew($RuntimeException, "getNoImageIcon returns null"_s);
	}
}

Test6933784$1::Test6933784$1() {
}

$Class* Test6933784$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6933784$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6933784$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6933784",
		"checkImages",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6933784$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6933784$1",
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
		"Test6933784"
	};
	$loadClass(Test6933784$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6933784$1);
	});
	return class$;
}

$Class* Test6933784$1::class$ = nullptr;