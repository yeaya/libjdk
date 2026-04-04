#include <bug5043626.h>
#include <bug5043626$1.h>
#include <bug5043626$2.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/Document.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_1
#undef VK_2
#undef VK_HOME

using $bug5043626$1 = ::bug5043626$1;
using $bug5043626$2 = ::bug5043626$2;
using $Component = ::java::awt::Component;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Document = ::javax::swing::text::Document;

class bug5043626$$Lambda$dispose : public $Runnable {
	$class(bug5043626$$Lambda$dispose, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* bug5043626$$Lambda$dispose::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug5043626$$Lambda$dispose, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(bug5043626$$Lambda$dispose, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug5043626$$Lambda$dispose, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug5043626$$Lambda$dispose",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug5043626$$Lambda$dispose, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug5043626$$Lambda$dispose);
	});
	return class$;
}
$Class* bug5043626$$Lambda$dispose::class$ = nullptr;

$Document* bug5043626::doc = nullptr;
$Robot* bug5043626::robot = nullptr;
$JFrame* bug5043626::frame = nullptr;

void bug5043626::init$() {
}

void bug5043626::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$init(bug5043626);
		$assignStatic(bug5043626::robot, $new($Robot));
		bug5043626::robot->setAutoDelay(100);
		$SwingUtilities::invokeAndWait($$new($bug5043626$1));
		$nc(bug5043626::robot)->waitForIdle();
		$nc(bug5043626::robot)->delay(1000);
		$nc(bug5043626::robot)->keyPress($KeyEvent::VK_HOME);
		$nc(bug5043626::robot)->keyRelease($KeyEvent::VK_HOME);
		$nc(bug5043626::robot)->keyPress($KeyEvent::VK_1);
		$nc(bug5043626::robot)->keyRelease($KeyEvent::VK_1);
		$nc(bug5043626::robot)->waitForIdle();
		$var($String, test, getText());
		if (!"1test"_s->equals(test)) {
			$throwNew($RuntimeException, "Begin line action set cursor inside <head> tag"_s);
		}
		$nc(bug5043626::robot)->keyPress($KeyEvent::VK_HOME);
		$nc(bug5043626::robot)->keyRelease($KeyEvent::VK_HOME);
		$nc(bug5043626::robot)->keyPress($KeyEvent::VK_2);
		$nc(bug5043626::robot)->keyRelease($KeyEvent::VK_2);
		$nc(bug5043626::robot)->waitForIdle();
		$assign(test, getText());
		if (!"21test"_s->equals(test)) {
			$throwNew($RuntimeException, "Begin action set cursor inside <head> tag"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init(bug5043626);
		if (bug5043626::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(bug5043626$$Lambda$dispose, bug5043626::frame));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$String* bug5043626::getText() {
	$useLocalObjectStack();
	$var($StringArray, result, $new($StringArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug5043626$2, result));
	return result->get(0);
}

void bug5043626::createAndShowGUI() {
	$init(bug5043626);
	$assignStatic(bug5043626::frame, $new($JFrame));
	bug5043626::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JEditorPane, editorPane, $new($JEditorPane));
	editorPane->setContentType("text/html"_s);
	editorPane->setText("test"_s);
	editorPane->setEditable(true);
	$nc(bug5043626::frame)->add(editorPane);
	$nc(bug5043626::frame)->pack();
	$nc(bug5043626::frame)->setLocationRelativeTo(nullptr);
	$nc(bug5043626::frame)->setVisible(true);
	$assignStatic(bug5043626::doc, editorPane->getDocument());
	editorPane->setCaretPosition($nc(bug5043626::doc)->getLength());
}

bug5043626::bug5043626() {
}

$Class* bug5043626::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug5043626$$Lambda$dispose")) {
			return bug5043626$$Lambda$dispose::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"doc", "Ljavax/swing/text/Document;", nullptr, $PRIVATE | $STATIC, $staticField(bug5043626, doc)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug5043626, robot)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug5043626, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug5043626, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug5043626, createAndShowGUI, void)},
		{"getText", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug5043626, getText, $String*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug5043626, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug5043626$2", nullptr, nullptr, 0},
		{"bug5043626$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug5043626",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug5043626$2,bug5043626$1"
	};
	$loadClass(bug5043626, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug5043626);
	});
	return class$;
}

$Class* bug5043626::class$ = nullptr;