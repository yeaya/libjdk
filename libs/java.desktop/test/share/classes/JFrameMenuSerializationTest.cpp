#include <JFrameMenuSerializationTest.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/NotSerializableException.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JMenuBar = ::javax::swing::JMenuBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class JFrameMenuSerializationTest$$Lambda$lambda$main$1 : public $Runnable {
	$class(JFrameMenuSerializationTest$$Lambda$lambda$main$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JFrameMenuSerializationTest::lambda$main$1();
	}
};
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JFrameMenuSerializationTest$$Lambda$lambda$main$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JFrameMenuSerializationTest$$Lambda$lambda$main$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JFrameMenuSerializationTest$$Lambda$lambda$main$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JFrameMenuSerializationTest$$Lambda$lambda$main$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JFrameMenuSerializationTest$$Lambda$lambda$main$1);
	});
	return class$;
}
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$1::class$ = nullptr;

class JFrameMenuSerializationTest$$Lambda$lambda$main$2$1 : public $Runnable {
	$class(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($ObjectOutputStream* oos) {
		$set(this, oos, oos);
	}
	virtual void run() override {
		JFrameMenuSerializationTest::lambda$main$2(oos);
	}
	$ObjectOutputStream* oos = nullptr;
};
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"oos", "Ljava/io/ObjectOutputStream;", nullptr, $PUBLIC, $field(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1, oos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PUBLIC, $method(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1, init$, void, $ObjectOutputStream*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JFrameMenuSerializationTest$$Lambda$lambda$main$2$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1);
	});
	return class$;
}
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::class$ = nullptr;

class JFrameMenuSerializationTest$$Lambda$dispose$2 : public $Runnable {
	$class(JFrameMenuSerializationTest$$Lambda$dispose$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* JFrameMenuSerializationTest$$Lambda$dispose$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JFrameMenuSerializationTest$$Lambda$dispose$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(JFrameMenuSerializationTest$$Lambda$dispose$2, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JFrameMenuSerializationTest$$Lambda$dispose$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JFrameMenuSerializationTest$$Lambda$dispose$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JFrameMenuSerializationTest$$Lambda$dispose$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JFrameMenuSerializationTest$$Lambda$dispose$2);
	});
	return class$;
}
$Class* JFrameMenuSerializationTest$$Lambda$dispose$2::class$ = nullptr;

class JFrameMenuSerializationTest$$Lambda$lambda$main$0$3 : public $PropertyChangeListener {
	$class(JFrameMenuSerializationTest$$Lambda$lambda$main$0$3, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$() {
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		JFrameMenuSerializationTest::lambda$main$0(evt);
	}
};
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$0$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JFrameMenuSerializationTest$$Lambda$lambda$main$0$3, init$, void)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JFrameMenuSerializationTest$$Lambda$lambda$main$0$3, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JFrameMenuSerializationTest$$Lambda$lambda$main$0$3",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(JFrameMenuSerializationTest$$Lambda$lambda$main$0$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JFrameMenuSerializationTest$$Lambda$lambda$main$0$3);
	});
	return class$;
}
$Class* JFrameMenuSerializationTest$$Lambda$lambda$main$0$3::class$ = nullptr;

$JFrame* JFrameMenuSerializationTest::frame = nullptr;

void JFrameMenuSerializationTest::init$() {
}

void JFrameMenuSerializationTest::main($StringArray* args) {
	$useLocalObjectStack();
	$System::setProperty("apple.laf.useScreenMenuBar"_s, "true"_s);
	$SwingUtilities::invokeAndWait($$new(JFrameMenuSerializationTest$$Lambda$lambda$main$1));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream, 10000));
	$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
	$SwingUtilities::invokeAndWait($$new(JFrameMenuSerializationTest$$Lambda$lambda$main$2$1, oos));
	$init(JFrameMenuSerializationTest);
	$SwingUtilities::invokeLater($$new(JFrameMenuSerializationTest$$Lambda$dispose$2, $nc(JFrameMenuSerializationTest::frame)));
}

void JFrameMenuSerializationTest::lambda$main$2($ObjectOutputStream* oos) {
	try {
		$init(JFrameMenuSerializationTest);
		$nc(oos)->writeObject(JFrameMenuSerializationTest::frame);
	} catch ($NotSerializableException& e) {
		$throwNew($RuntimeException, "Test failed"_s, e);
	} catch ($IOException& e) {
		e->printStackTrace();
	}
}

void JFrameMenuSerializationTest::lambda$main$1() {
	$useLocalObjectStack();
	$init(JFrameMenuSerializationTest);
	$assignStatic(JFrameMenuSerializationTest::frame, $new($JFrame));
	JFrameMenuSerializationTest::frame->setJMenuBar($$new($JMenuBar));
	$nc(JFrameMenuSerializationTest::frame)->setVisible(true);
	$$nc($nc(JFrameMenuSerializationTest::frame)->getAccessibleContext())->addPropertyChangeListener($$new(JFrameMenuSerializationTest$$Lambda$lambda$main$0$3));
}

void JFrameMenuSerializationTest::lambda$main$0($PropertyChangeEvent* evt) {
}

JFrameMenuSerializationTest::JFrameMenuSerializationTest() {
}

$Class* JFrameMenuSerializationTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JFrameMenuSerializationTest$$Lambda$lambda$main$1")) {
			return JFrameMenuSerializationTest$$Lambda$lambda$main$1::load$(name, initialize);
		}
		if (name->equals("JFrameMenuSerializationTest$$Lambda$lambda$main$2$1")) {
			return JFrameMenuSerializationTest$$Lambda$lambda$main$2$1::load$(name, initialize);
		}
		if (name->equals("JFrameMenuSerializationTest$$Lambda$dispose$2")) {
			return JFrameMenuSerializationTest$$Lambda$dispose$2::load$(name, initialize);
		}
		if (name->equals("JFrameMenuSerializationTest$$Lambda$lambda$main$0$3")) {
			return JFrameMenuSerializationTest$$Lambda$lambda$main$0$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JFrameMenuSerializationTest, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JFrameMenuSerializationTest, init$, void)},
		{"lambda$main$0", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JFrameMenuSerializationTest, lambda$main$0, void, $PropertyChangeEvent*)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JFrameMenuSerializationTest, lambda$main$1, void)},
		{"lambda$main$2", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JFrameMenuSerializationTest, lambda$main$2, void, $ObjectOutputStream*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JFrameMenuSerializationTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JFrameMenuSerializationTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JFrameMenuSerializationTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JFrameMenuSerializationTest);
	});
	return class$;
}

$Class* JFrameMenuSerializationTest::class$ = nullptr;