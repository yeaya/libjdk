#include <SpanTest.h>
#include <SpanTest$1.h>
#include <SpanTest$2.h>
#include <java/awt/Window.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $SpanTest$1 = ::SpanTest$1;
using $SpanTest$2 = ::SpanTest$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$JFrame* SpanTest::f = nullptr;
$JDialog* SpanTest::dialog = nullptr;

void SpanTest::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
}

void SpanTest::run() {
	$useLocalObjectStack();
	try {
		createUI();
		spanTest();
	} catch ($Exception& ex) {
		dispose();
		$nc(this->latch)->countDown();
		$throwNew($RuntimeException, $$str({"createUI Failed: "_s, $(ex->getMessage())}));
	}
}

void SpanTest::dispose() {
	if (SpanTest::dialog != nullptr) {
		SpanTest::dialog->dispose();
	}
	if (SpanTest::f != nullptr) {
		SpanTest::f->dispose();
	}
}

void SpanTest::spanTest() {
	$init(SpanTest);
	$SwingUtilities::invokeAndWait($$new($SpanTest$1));
}

void SpanTest::createUI() {
	$SwingUtilities::invokeAndWait($$new($SpanTest$2, this));
}

SpanTest::SpanTest() {
}

$Class* SpanTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(SpanTest, f)},
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $STATIC, $staticField(SpanTest, dialog)},
		{"testResult", "Z", nullptr, $PUBLIC, $field(SpanTest, testResult)},
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(SpanTest, latch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(SpanTest, init$, void, $CountDownLatch*), "java.lang.Exception"},
		{"createUI", "()V", nullptr, $PRIVATE | $FINAL, $method(SpanTest, createUI, void), "java.lang.Exception"},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(SpanTest, dispose, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SpanTest, run, void)},
		{"spanTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(SpanTest, spanTest, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpanTest$2", nullptr, nullptr, 0},
		{"SpanTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SpanTest",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SpanTest$2,SpanTest$1"
	};
	$loadClass(SpanTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpanTest);
	});
	return class$;
}

$Class* SpanTest::class$ = nullptr;