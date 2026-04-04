#include <bug4492274.h>
#include <bug4492274$1.h>
#include <bug4492274$2.h>
#include <bug4492274$3.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $bug4492274$1 = ::bug4492274$1;
using $bug4492274$2 = ::bug4492274$2;
using $bug4492274$3 = ::bug4492274$3;
using $Robot = ::java::awt::Robot;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URL = ::java::net::URL;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

class bug4492274$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4492274$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4492274::lambda$main$0();
	}
};
$Class* bug4492274$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4492274$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4492274$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4492274$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4492274$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4492274$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug4492274$$Lambda$lambda$main$0::class$ = nullptr;

$URL* bug4492274::page = nullptr;
$JEditorPane* bug4492274::jep = nullptr;
$JFrame* bug4492274::f = nullptr;

void bug4492274::init$() {
}

void bug4492274::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Robot, robot, $new($Robot));
		$SwingUtilities::invokeAndWait($$new($bug4492274$1));
		robot->waitForIdle();
		$SwingUtilities::invokeAndWait($$new($bug4492274$2));
		robot->waitForIdle();
		if (getPageAnchor() == nullptr) {
			$throwNew($RuntimeException, "JEditorPane.getPage() returns null anchor reference"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init(bug4492274);
		if (bug4492274::f != nullptr) {
			$SwingUtilities::invokeAndWait($$new(bug4492274$$Lambda$lambda$main$0));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$String* bug4492274::getPageAnchor() {
	$useLocalObjectStack();
	$var($StringArray, result, $new($StringArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug4492274$3, result));
	return result->get(0);
}

void bug4492274::createAndShowGUI() {
	$useLocalObjectStack();
	try {
		$var($File, file, $new($File, $($System::getProperty("test.src"_s, "."_s)), "test.html"_s));
		$init(bug4492274);
		$assignStatic(bug4492274::page, $$nc(file->toURI())->toURL());
		$assignStatic(bug4492274::f, $new($JFrame));
		$assignStatic(bug4492274::jep, $new($JEditorPane));
		bug4492274::jep->setEditorKit($$new($HTMLEditorKit));
		$nc(bug4492274::jep)->setEditable(false);
		$nc(bug4492274::jep)->setPage(bug4492274::page);
		$var($JScrollPane, sp, $new($JScrollPane, bug4492274::jep));
		$$nc($nc(bug4492274::f)->getContentPane())->add(sp);
		$nc(bug4492274::f)->setSize(500, 500);
		$nc(bug4492274::f)->setVisible(true);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
}

void bug4492274::lambda$main$0() {
	$init(bug4492274);
	$nc(bug4492274::f)->dispose();
}

bug4492274::bug4492274() {
}

$Class* bug4492274::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4492274$$Lambda$lambda$main$0")) {
			return bug4492274$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"page", "Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $staticField(bug4492274, page)},
		{"jep", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4492274, jep)},
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4492274, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4492274, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4492274, createAndShowGUI, void)},
		{"getPageAnchor", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4492274, getPageAnchor, $String*), "java.lang.Exception"},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4492274, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4492274, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4492274$3", nullptr, nullptr, 0},
		{"bug4492274$2", nullptr, nullptr, 0},
		{"bug4492274$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4492274",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4492274$3,bug4492274$2,bug4492274$1"
	};
	$loadClass(bug4492274, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4492274);
	});
	return class$;
}

$Class* bug4492274::class$ = nullptr;