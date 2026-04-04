#include <bug7165725.h>
#include <bug7165725$1.h>
#include <bug7165725$2.h>
#include <bug7165725$GoldenElement.h>
#include <bug7165725$SBParserCallback.h>
#include <java/awt/Robot.h>
#include <java/io/File.h>
#include <java/io/FileReader.h>
#include <java/io/Reader.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/html/parser/ParserDelegator.h>
#include <jcpp.h>

using $bug7165725$GoldenElementArray = $Array<bug7165725$GoldenElement>;
using $bug7165725$1 = ::bug7165725$1;
using $bug7165725$2 = ::bug7165725$2;
using $bug7165725$GoldenElement = ::bug7165725$GoldenElement;
using $bug7165725$SBParserCallback = ::bug7165725$SBParserCallback;
using $Robot = ::java::awt::Robot;
using $File = ::java::io::File;
using $FileReader = ::java::io::FileReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ParserDelegator = ::javax::swing::text::html::parser::ParserDelegator;

void bug7165725::init$() {
	$JFrame::init$();
}

void bug7165725::execute($String* urlStr, $bug7165725$GoldenElement* goldenElement) {
	$useLocalObjectStack();
	$nc($System::out)->println();
	$System::out->println($$str({"***** TEST: "_s, urlStr, " *****"_s}));
	$System::out->println();
	$SwingUtilities::invokeAndWait($$new($bug7165725$1, this, urlStr));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7165725$2, this, goldenElement));
	$System::out->println();
	$System::out->println("*********************************"_s);
	$System::out->println();
}

void bug7165725::main($StringArray* args) {
	$init(bug7165725);
	$useLocalObjectStack();
	$var($String, dirURL, getDirURL());
	$nc($System::out)->println($$str({"dirURL = "_s, dirURL}));
	$$new(bug7165725)->execute($$str({dirURL, "successive-script-tag.html"_s}), $(createSuccessiveScriptTags()));
	$$new(bug7165725)->execute($$str({dirURL, "false-text-after-script.html"_s}), $(createFalseTextAfterScript()));
	checkByCallbackForSuccessiveScript();
	checkByCallbackForFalseTextAfterScript();
	$System::out->println();
	$System::out->println();
	$System::out->println("Test passed."_s);
}

$String* bug7165725::getDirURL() {
	$init(bug7165725);
	$useLocalObjectStack();
	$init($File);
	return $str({"file:///"_s, $($$new($File, $($System::getProperty("test.src"_s, "."_s)))->getAbsolutePath()), $File::separator});
}

$String* bug7165725::getParsedContentOneLine($String* path) {
	$init(bug7165725);
	$useLocalObjectStack();
	$var($File, f, $new($File, path));
	$var($FileReader, fr, $new($FileReader, f));
	$var($ParserDelegator, pd, $new($ParserDelegator));
	$var($bug7165725$SBParserCallback, sbcallback, $new($bug7165725$SBParserCallback));
	pd->parse(fr, sbcallback, true);
	fr->close();
	return sbcallback->getStringOneLine();
}

$String* bug7165725::getParsedContentOneLine($URL* url) {
	$init(bug7165725);
	return getParsedContentOneLine($($nc(url)->getPath()));
}

void bug7165725::checkByCallbackForSuccessiveScript() {
	$init(bug7165725);
	$useLocalObjectStack();
	$var($String, content, getParsedContentOneLine($$new($URL, $$str({$(getDirURL()), "successive-script-tag.html"_s}))));
	if (!$nc(content)->matches(".*<script .*/js/js1\\.js.*<script .*/js/js2\\.js.*<script .*/js/js3\\.js.*"_s)) {
		$throwNew($RuntimeException, "Failed to lookup script tags/attributes."_s);
	}
	if (!content->matches(".*<style .*stylesheets/base\\.css.*<style .*stylesheets/adv\\.css.*"_s)) {
		$throwNew($RuntimeException, "Failed to lookup style tags."_s);
	}
}

void bug7165725::checkByCallbackForFalseTextAfterScript() {
	$init(bug7165725);
	$useLocalObjectStack();
	$var($String, content, getParsedContentOneLine($$new($URL, $$str({$(getDirURL()), "false-text-after-script.html"_s}))));
	int32_t bodyIdx = $nc(content)->indexOf("<body "_s);
	if (bodyIdx > 0) {
		$var($String, sbody, content->substring(bodyIdx));
		if (sbody->indexOf("Text("_s) >= 0) {
			$throwNew($RuntimeException, "Unexpected text found."_s);
		}
	} else {
		$throwNew($RuntimeException, "Failed to find body tag."_s);
	}
}

$bug7165725$GoldenElement* bug7165725::createSuccessiveScriptTags() {
	$init(bug7165725);
	$useLocalObjectStack();
	return $new($bug7165725$GoldenElement, "html"_s, $$new($bug7165725$GoldenElementArray, {
		$$new($bug7165725$GoldenElement, "head"_s, $$new($bug7165725$GoldenElementArray, {$$new($bug7165725$GoldenElement, "p-implied"_s, $$new($bug7165725$GoldenElementArray, {
			$$new($bug7165725$GoldenElement, "title"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "title"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "comment"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "comment"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "comment"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "content"_s, $$new($bug7165725$GoldenElementArray, 0))
		}))})),
		$$new($bug7165725$GoldenElement, "body"_s, $$new($bug7165725$GoldenElementArray, {$$new($bug7165725$GoldenElement, "p-implied"_s, $$new($bug7165725$GoldenElementArray, {$$new($bug7165725$GoldenElement, "content"_s, $$new($bug7165725$GoldenElementArray, 0))}))}))
	}));
}

$bug7165725$GoldenElement* bug7165725::createFalseTextAfterScript() {
	$init(bug7165725);
	$useLocalObjectStack();
	return $new($bug7165725$GoldenElement, "html"_s, $$new($bug7165725$GoldenElementArray, {
		$$new($bug7165725$GoldenElement, "head"_s, $$new($bug7165725$GoldenElementArray, {$$new($bug7165725$GoldenElement, "p-implied"_s, $$new($bug7165725$GoldenElementArray, {
			$$new($bug7165725$GoldenElement, "title"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "title"_s, $$new($bug7165725$GoldenElementArray, 0)),
			$$new($bug7165725$GoldenElement, "content"_s, $$new($bug7165725$GoldenElementArray, 0))
		}))})),
		$$new($bug7165725$GoldenElement, "body"_s, $$new($bug7165725$GoldenElementArray, {
			$$new($bug7165725$GoldenElement, "form"_s, $$new($bug7165725$GoldenElementArray, {$$new($bug7165725$GoldenElement, "p-implied"_s, $$new($bug7165725$GoldenElementArray, {
				$$new($bug7165725$GoldenElement, "input"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "input"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "content"_s, $$new($bug7165725$GoldenElementArray, 0))
			}))})),
			$$new($bug7165725$GoldenElement, "p-implied"_s, $$new($bug7165725$GoldenElementArray, {
				$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "comment"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "comment"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "script"_s, $$new($bug7165725$GoldenElementArray, 0)),
				$$new($bug7165725$GoldenElement, "content"_s, $$new($bug7165725$GoldenElementArray, 0))
			}))
		}))
	}));
}

bug7165725::bug7165725() {
}

$Class* bug7165725::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"editorPane", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE, $field(bug7165725, editorPane)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7165725, init$, void)},
		{"checkByCallbackForFalseTextAfterScript", "()V", nullptr, $STATIC, $staticMethod(bug7165725, checkByCallbackForFalseTextAfterScript, void), "java.lang.Exception"},
		{"checkByCallbackForSuccessiveScript", "()V", nullptr, $STATIC, $staticMethod(bug7165725, checkByCallbackForSuccessiveScript, void), "java.lang.Exception"},
		{"createFalseTextAfterScript", "()Lbug7165725$GoldenElement;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7165725, createFalseTextAfterScript, $bug7165725$GoldenElement*)},
		{"createSuccessiveScriptTags", "()Lbug7165725$GoldenElement;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7165725, createSuccessiveScriptTags, $bug7165725$GoldenElement*)},
		{"execute", "(Ljava/lang/String;Lbug7165725$GoldenElement;)V", nullptr, $PUBLIC, $virtualMethod(bug7165725, execute, void, $String*, $bug7165725$GoldenElement*), "java.lang.Exception"},
		{"getDirURL", "()Ljava/lang/String;", nullptr, $STATIC, $staticMethod(bug7165725, getDirURL, $String*)},
		{"getParsedContentOneLine", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(bug7165725, getParsedContentOneLine, $String*, $String*), "java.lang.Exception"},
		{"getParsedContentOneLine", "(Ljava/net/URL;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(bug7165725, getParsedContentOneLine, $String*, $URL*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7165725, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7165725$SBParserCallback", "bug7165725", "SBParserCallback", $STATIC},
		{"bug7165725$GoldenElement", "bug7165725", "GoldenElement", $PRIVATE | $STATIC},
		{"bug7165725$2", nullptr, nullptr, 0},
		{"bug7165725$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7165725",
		"javax.swing.JFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7165725$SBParserCallback,bug7165725$GoldenElement,bug7165725$2,bug7165725$1,bug7165725$1$1"
	};
	$loadClass(bug7165725, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug7165725));
	});
	return class$;
}

$Class* bug7165725::class$ = nullptr;