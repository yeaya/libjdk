#include <MultiUIDefaultsNPECheck.h>
#include <MultiUIDefaultsNPECheck$1.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $MultiUIDefaultsNPECheck$1 = ::MultiUIDefaultsNPECheck$1;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class MultiUIDefaultsNPECheck$$Lambda$lambda$main$0 : public $Runnable {
	$class(MultiUIDefaultsNPECheck$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MultiUIDefaultsNPECheck::lambda$main$0();
	}
};
$Class* MultiUIDefaultsNPECheck$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiUIDefaultsNPECheck$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaultsNPECheck$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MultiUIDefaultsNPECheck$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(MultiUIDefaultsNPECheck$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiUIDefaultsNPECheck$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* MultiUIDefaultsNPECheck$$Lambda$lambda$main$0::class$ = nullptr;

void MultiUIDefaultsNPECheck::init$() {
}

void MultiUIDefaultsNPECheck::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new(MultiUIDefaultsNPECheck$$Lambda$lambda$main$0));
}

void MultiUIDefaultsNPECheck::Test() {
	$useLocalObjectStack();
	$var($JLabel, label, $new($JLabel));
	try {
		$UIManager::setLookAndFeel($$new($MultiUIDefaultsNPECheck$1));
	} catch ($UnsupportedLookAndFeelException& e) {
		$nc($System::err)->println("Warning: test not applicable because of unsupported look and feel"_s);
		return;
	}
	try {
		$$nc($UIManager::getDefaults())->getUI(label);
	} catch ($NullPointerException& e) {
		$throwNew($RuntimeException, "Got null pointer exception. Hence Test Failed"_s);
	}
}

void MultiUIDefaultsNPECheck::lambda$main$0() {
	Test();
}

MultiUIDefaultsNPECheck::MultiUIDefaultsNPECheck() {
}

$Class* MultiUIDefaultsNPECheck::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("MultiUIDefaultsNPECheck$$Lambda$lambda$main$0")) {
			return MultiUIDefaultsNPECheck$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiUIDefaultsNPECheck, init$, void)},
		{"Test", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiUIDefaultsNPECheck, Test, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MultiUIDefaultsNPECheck, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiUIDefaultsNPECheck, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiUIDefaultsNPECheck$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MultiUIDefaultsNPECheck",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"MultiUIDefaultsNPECheck$1"
	};
	$loadClass(MultiUIDefaultsNPECheck, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiUIDefaultsNPECheck);
	});
	return class$;
}

$Class* MultiUIDefaultsNPECheck::class$ = nullptr;