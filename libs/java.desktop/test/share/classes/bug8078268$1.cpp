#include <bug8078268$1.h>
#include <bug8078268.h>
#include <java/io/FileReader.h>
#include <java/io/Reader.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $bug8078268 = ::bug8078268;
using $FileReader = ::java::io::FileReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::javax::swing::text::Document;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

void bug8078268$1::init$() {
}

void bug8078268$1::run() {
	$useLocalObjectStack();
	$var($HTMLEditorKit, htmlKit, $new($HTMLEditorKit));
	$var($Document, doc, htmlKit->createDefaultDocument());
	try {
		htmlKit->read($$new($FileReader, $$str({$($bug8078268::getDirURL()), "slowparse.html"_s})), doc, 0);
		$bug8078268::parsingDone = true;
	} catch ($Exception& e) {
		$init($bug8078268);
		$assignStatic($bug8078268::exception, e);
	}
}

bug8078268$1::bug8078268$1() {
}

$Class* bug8078268$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8078268$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8078268$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8078268",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8078268$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8078268$1",
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
		"bug8078268"
	};
	$loadClass(bug8078268$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8078268$1);
	});
	return class$;
}

$Class* bug8078268$1::class$ = nullptr;