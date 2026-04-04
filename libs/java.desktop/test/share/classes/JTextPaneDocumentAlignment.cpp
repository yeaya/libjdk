#include <JTextPaneDocumentAlignment.h>
#include <JTextPaneDocumentAlignment$1.h>
#include <JTextPaneDocumentAlignment$2.h>
#include <JTextPaneDocumentAlignment$3.h>
#include <java/awt/Robot.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $JTextPaneDocumentAlignment$1 = ::JTextPaneDocumentAlignment$1;
using $JTextPaneDocumentAlignment$2 = ::JTextPaneDocumentAlignment$2;
using $JTextPaneDocumentAlignment$3 = ::JTextPaneDocumentAlignment$3;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$JFrame* JTextPaneDocumentAlignment::frame = nullptr;
$JTextPane* JTextPaneDocumentAlignment::jTextPane = nullptr;
int32_t JTextPaneDocumentAlignment::position = 0;

void JTextPaneDocumentAlignment::init$() {
}

void JTextPaneDocumentAlignment::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentAlignment$1));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentAlignment$2));
	$init(JTextPaneDocumentAlignment);
	if (JTextPaneDocumentAlignment::position < 100) {
		$throwNew($RuntimeException, $$str({"Text is not right aligned "_s, $$str(JTextPaneDocumentAlignment::position)}));
	}
	$SwingUtilities::invokeAndWait($$new($JTextPaneDocumentAlignment$3));
	if (JTextPaneDocumentAlignment::position < 20) {
		$throwNew($RuntimeException, $$str({"Text is not center aligned "_s, $$str(JTextPaneDocumentAlignment::position)}));
	}
	$nc($System::out)->println("ok"_s);
}

JTextPaneDocumentAlignment::JTextPaneDocumentAlignment() {
}

$Class* JTextPaneDocumentAlignment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentAlignment, frame)},
		{"jTextPane", "Ljavax/swing/JTextPane;", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentAlignment, jTextPane)},
		{"position", "I", nullptr, $PRIVATE | $STATIC, $staticField(JTextPaneDocumentAlignment, position)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTextPaneDocumentAlignment, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JTextPaneDocumentAlignment, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTextPaneDocumentAlignment$3", nullptr, nullptr, 0},
		{"JTextPaneDocumentAlignment$2", nullptr, nullptr, 0},
		{"JTextPaneDocumentAlignment$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JTextPaneDocumentAlignment",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JTextPaneDocumentAlignment$3,JTextPaneDocumentAlignment$2,JTextPaneDocumentAlignment$1"
	};
	$loadClass(JTextPaneDocumentAlignment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextPaneDocumentAlignment);
	});
	return class$;
}

$Class* JTextPaneDocumentAlignment::class$ = nullptr;