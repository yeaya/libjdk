#include <HtmlCommentTagParseTest.h>
#include <HtmlCommentTagParseTest$MyParser.h>
#include <java/io/File.h>
#include <java/io/FileReader.h>
#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $HtmlCommentTagParseTest$MyParser = ::HtmlCommentTagParseTest$MyParser;
using $File = ::java::io::File;
using $FileReader = ::java::io::FileReader;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

class HtmlCommentTagParseTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(HtmlCommentTagParseTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HtmlCommentTagParseTest::lambda$main$0();
	}
};
$Class* HtmlCommentTagParseTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HtmlCommentTagParseTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HtmlCommentTagParseTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HtmlCommentTagParseTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HtmlCommentTagParseTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HtmlCommentTagParseTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* HtmlCommentTagParseTest$$Lambda$lambda$main$0::class$ = nullptr;

$volatile(bool) HtmlCommentTagParseTest::failed = false;

void HtmlCommentTagParseTest::init$() {
}

void HtmlCommentTagParseTest::main($StringArray* args) {
	$init(HtmlCommentTagParseTest);
	$SwingUtilities::invokeAndWait($$new(HtmlCommentTagParseTest$$Lambda$lambda$main$0));
}

$String* HtmlCommentTagParseTest::getDirURL() {
	$init(HtmlCommentTagParseTest);
	$useLocalObjectStack();
	$init($File);
	return $str({$($$new($File, $($System::getProperty("test.src"_s, "."_s)))->getAbsolutePath()), $File::separator});
}

void HtmlCommentTagParseTest::lambda$main$0() {
	$init(HtmlCommentTagParseTest);
	$useLocalObjectStack();
	$var($HtmlCommentTagParseTest$MyParser, cb, $new($HtmlCommentTagParseTest$MyParser));
	$var($HTMLEditorKit, htmlKit, $new($HTMLEditorKit));
	$var($HTMLDocument, htmlDoc, $cast($HTMLDocument, htmlKit->createDefaultDocument()));
	$var($FileReader, reader, nullptr);
	try {
		$assign(reader, $new($FileReader, $$str({$(getDirURL()), "test.html"_s})));
		$$nc($nc(htmlDoc)->getParser())->parse(reader, cb, true);
		if (HtmlCommentTagParseTest::failed) {
			$throwNew($RuntimeException, "Test failed"_s);
		}
	} catch ($IOException& e) {
		$throwNew($RuntimeException, e);
	}
}

void HtmlCommentTagParseTest::clinit$($Class* clazz) {
	HtmlCommentTagParseTest::failed = false;
}

HtmlCommentTagParseTest::HtmlCommentTagParseTest() {
}

$Class* HtmlCommentTagParseTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("HtmlCommentTagParseTest$$Lambda$lambda$main$0")) {
			return HtmlCommentTagParseTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"failed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(HtmlCommentTagParseTest, failed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HtmlCommentTagParseTest, init$, void)},
		{"getDirURL", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(HtmlCommentTagParseTest, getDirURL, $String*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HtmlCommentTagParseTest, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HtmlCommentTagParseTest, main, void, $StringArray*), "java.io.IOException,java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HtmlCommentTagParseTest$MyParser", "HtmlCommentTagParseTest", "MyParser", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HtmlCommentTagParseTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HtmlCommentTagParseTest$MyParser"
	};
	$loadClass(HtmlCommentTagParseTest, name, initialize, &classInfo$$, HtmlCommentTagParseTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HtmlCommentTagParseTest);
	});
	return class$;
}

$Class* HtmlCommentTagParseTest::class$ = nullptr;