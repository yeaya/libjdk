#include <ProvokeGTK.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class ProvokeGTK$$Lambda$createAndShow : public $Runnable {
	$class(ProvokeGTK$$Lambda$createAndShow, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ProvokeGTK::createAndShow();
	}
};
$Class* ProvokeGTK$$Lambda$createAndShow::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProvokeGTK$$Lambda$createAndShow, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ProvokeGTK$$Lambda$createAndShow, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ProvokeGTK$$Lambda$createAndShow",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ProvokeGTK$$Lambda$createAndShow, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProvokeGTK$$Lambda$createAndShow);
	});
	return class$;
}
$Class* ProvokeGTK$$Lambda$createAndShow::class$ = nullptr;

class ProvokeGTK$$Lambda$lambda$main$0$1 : public $Runnable {
	$class(ProvokeGTK$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ProvokeGTK::lambda$main$0();
	}
};
$Class* ProvokeGTK$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProvokeGTK$$Lambda$lambda$main$0$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ProvokeGTK$$Lambda$lambda$main$0$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ProvokeGTK$$Lambda$lambda$main$0$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ProvokeGTK$$Lambda$lambda$main$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProvokeGTK$$Lambda$lambda$main$0$1);
	});
	return class$;
}
$Class* ProvokeGTK$$Lambda$lambda$main$0$1::class$ = nullptr;

$JFrame* ProvokeGTK::frame = nullptr;

void ProvokeGTK::init$() {
}

void ProvokeGTK::createAndShow() {
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s);
	} catch ($Exception& cnf) {
		cnf->printStackTrace();
	}
	$init(ProvokeGTK);
	$assignStatic(ProvokeGTK::frame, $new($JFrame, "JFrame"_s));
	ProvokeGTK::frame->setSize(200, 200);
	$nc(ProvokeGTK::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(ProvokeGTK::frame)->setVisible(true);
}

void ProvokeGTK::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(ProvokeGTK$$Lambda$createAndShow));
	$Thread::sleep(1000);
	$SwingUtilities::invokeAndWait($$new(ProvokeGTK$$Lambda$lambda$main$0$1));
}

void ProvokeGTK::lambda$main$0() {
	$init(ProvokeGTK);
	$nc(ProvokeGTK::frame)->setVisible(false);
	$nc(ProvokeGTK::frame)->dispose();
}

ProvokeGTK::ProvokeGTK() {
}

$Class* ProvokeGTK::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ProvokeGTK$$Lambda$createAndShow")) {
			return ProvokeGTK$$Lambda$createAndShow::load$(name, initialize);
		}
		if (name->equals("ProvokeGTK$$Lambda$lambda$main$0$1")) {
			return ProvokeGTK$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(ProvokeGTK, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProvokeGTK, init$, void)},
		{"createAndShow", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(ProvokeGTK, createAndShow, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ProvokeGTK, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ProvokeGTK, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ProvokeGTK",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProvokeGTK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProvokeGTK);
	});
	return class$;
}

$Class* ProvokeGTK::class$ = nullptr;