#include <JapaneseReadingAttributes$1.h>
#include <JapaneseReadingAttributes.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $JapaneseReadingAttributes = ::JapaneseReadingAttributes;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void JapaneseReadingAttributes$1::init$() {
	$WindowAdapter::init$();
}

void JapaneseReadingAttributes$1::windowClosing($WindowEvent* e) {
	$init($JapaneseReadingAttributes);
	$nc($JapaneseReadingAttributes::testStartLatch)->countDown();
}

void JapaneseReadingAttributes$1::windowOpened($WindowEvent* e) {
	$init($JapaneseReadingAttributes);
	$nc($JapaneseReadingAttributes::textFieldMain)->requestFocusInWindow();
}

JapaneseReadingAttributes$1::JapaneseReadingAttributes$1() {
}

$Class* JapaneseReadingAttributes$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JapaneseReadingAttributes$1, init$, void)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(JapaneseReadingAttributes$1, windowClosing, void, $WindowEvent*)},
		{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(JapaneseReadingAttributes$1, windowOpened, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JapaneseReadingAttributes",
		"setupUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JapaneseReadingAttributes$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JapaneseReadingAttributes$1",
		"java.awt.event.WindowAdapter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JapaneseReadingAttributes"
	};
	$loadClass(JapaneseReadingAttributes$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JapaneseReadingAttributes$1));
	});
	return class$;
}

$Class* JapaneseReadingAttributes$1::class$ = nullptr;