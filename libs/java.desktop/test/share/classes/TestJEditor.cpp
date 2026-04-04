#include <TestJEditor.h>
#include <TestJEditor$UserEditorKit.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/EditorKit.h>
#include <jcpp.h>

using $TestJEditor$UserEditorKit = ::TestJEditor$UserEditorKit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JEditorPane = ::javax::swing::JEditorPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $EditorKit = ::javax::swing::text::EditorKit;

class TestJEditor$$Lambda$testJEditorPane : public $Runnable {
	$class(TestJEditor$$Lambda$testJEditorPane, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJEditor::testJEditorPane();
	}
};
$Class* TestJEditor$$Lambda$testJEditorPane::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJEditor$$Lambda$testJEditorPane, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestJEditor$$Lambda$testJEditorPane, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestJEditor$$Lambda$testJEditorPane",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestJEditor$$Lambda$testJEditorPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJEditor$$Lambda$testJEditorPane);
	});
	return class$;
}
$Class* TestJEditor$$Lambda$testJEditorPane::class$ = nullptr;

void TestJEditor::init$() {
}

void TestJEditor::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestJEditor);
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait($$new(TestJEditor$$Lambda$testJEditorPane));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait($$new(TestJEditor$$Lambda$testJEditorPane));
}

void TestJEditor::testJEditorPane() {
	$useLocalObjectStack();
	try {
		$load($TestJEditor$UserEditorKit);
		$JEditorPane::registerEditorKitForContentType("text/html"_s, $($TestJEditor$UserEditorKit::class$->getName()));
		$var($EditorKit, editorKit, $JEditorPane::createEditorKitForContentType("text/html"_s));
		if (!($instanceOf($TestJEditor$UserEditorKit, editorKit))) {
			$throwNew($RuntimeException, "Editor kit is not UserEditorKit!"_s);
		}
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
}

TestJEditor::TestJEditor() {
}

$Class* TestJEditor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestJEditor$$Lambda$testJEditorPane")) {
			return TestJEditor$$Lambda$testJEditorPane::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestJEditor, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestJEditor, main, void, $StringArray*), "java.lang.Exception"},
		{"testJEditorPane", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestJEditor, testJEditorPane, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJEditor$UserEditorKit", "TestJEditor", "UserEditorKit", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestJEditor",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestJEditor$UserEditorKit"
	};
	$loadClass(TestJEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestJEditor);
	});
	return class$;
}

$Class* TestJEditor::class$ = nullptr;