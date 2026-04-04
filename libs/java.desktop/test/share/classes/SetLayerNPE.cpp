#include <SetLayerNPE.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;

class SetLayerNPE$$Lambda$lambda$main$0 : public $Runnable {
	$class(SetLayerNPE$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SetLayerNPE::lambda$main$0();
	}
};
$Class* SetLayerNPE$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetLayerNPE$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SetLayerNPE$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SetLayerNPE$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SetLayerNPE$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetLayerNPE$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* SetLayerNPE$$Lambda$lambda$main$0::class$ = nullptr;

class SetLayerNPE$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(SetLayerNPE$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SetLayerNPE::lambda$main$1();
	}
};
$Class* SetLayerNPE$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetLayerNPE$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SetLayerNPE$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SetLayerNPE$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SetLayerNPE$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetLayerNPE$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* SetLayerNPE$$Lambda$lambda$main$1$1::class$ = nullptr;

void SetLayerNPE::init$() {
}

void SetLayerNPE::main($StringArray* args) {
	$useLocalObjectStack();
	$EventQueue::invokeAndWait($$new(SetLayerNPE$$Lambda$lambda$main$0));
	$EventQueue::invokeAndWait($$new(SetLayerNPE$$Lambda$lambda$main$1$1));
}

void SetLayerNPE::lambda$main$1() {
	$useLocalObjectStack();
	try {
		$var($JInternalFrame, jif, $new($JInternalFrame, "My Frame"_s));
		$$new($JDesktopPane)->add(jif);
		jif->setLayer(nullptr);
		$throwNew($AssertionError, $of("expected NPE was not thrown"_s));
	} catch ($NullPointerException& ignored) {
	}
}

void SetLayerNPE::lambda$main$0() {
	try {
		$$new($JInternalFrame, "My Frame"_s)->setLayer(nullptr);
		$throwNew($AssertionError, $of("expected NPE was not thrown"_s));
	} catch ($NullPointerException& ignored) {
	}
}

SetLayerNPE::SetLayerNPE() {
}

$Class* SetLayerNPE::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("SetLayerNPE$$Lambda$lambda$main$0")) {
			return SetLayerNPE$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("SetLayerNPE$$Lambda$lambda$main$1$1")) {
			return SetLayerNPE$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetLayerNPE, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SetLayerNPE, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SetLayerNPE, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetLayerNPE, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"SetLayerNPE",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SetLayerNPE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetLayerNPE);
	});
	return class$;
}

$Class* SetLayerNPE::class$ = nullptr;