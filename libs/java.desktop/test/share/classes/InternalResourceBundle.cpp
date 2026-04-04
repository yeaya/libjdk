#include <InternalResourceBundle.h>
#include <java/awt/EventQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

class InternalResourceBundle$$Lambda$lambda$main$0 : public $Runnable {
	$class(InternalResourceBundle$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		InternalResourceBundle::lambda$main$0();
	}
};
$Class* InternalResourceBundle$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InternalResourceBundle$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(InternalResourceBundle$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"InternalResourceBundle$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(InternalResourceBundle$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalResourceBundle$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* InternalResourceBundle$$Lambda$lambda$main$0::class$ = nullptr;

void InternalResourceBundle::init$() {
}

void InternalResourceBundle::main($StringArray* args) {
	$EventQueue::invokeAndWait($$new(InternalResourceBundle$$Lambda$lambda$main$0));
}

$Object* InternalResourceBundle::getValue($UIDefaults* defaults) {
	return $nc(defaults)->get("MetalTitlePane.restore.titleAndMnemonic"_s);
}

void InternalResourceBundle::lambda$main$0() {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($$new($NimbusLookAndFeel));
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, e);
	}
	$var($UIDefaults, defaults, $UIManager::getDefaults());
	$nc(defaults)->addResourceBundle("com.sun.swing.internal.plaf.metal.resources.metal"_s);
	$var($Object, value, getValue(defaults));
	if (value != nullptr) {
		$throwNew($RuntimeException, $$str({"value is not null = "_s, value}));
	}
	try {
		$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, e);
	}
	$assign(value, getValue(defaults));
	if (value == nullptr) {
		$throwNew($RuntimeException, "value is null"_s);
	}
}

InternalResourceBundle::InternalResourceBundle() {
}

$Class* InternalResourceBundle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("InternalResourceBundle$$Lambda$lambda$main$0")) {
			return InternalResourceBundle$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InternalResourceBundle, init$, void)},
		{"getValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(InternalResourceBundle, getValue, $Object*, $UIDefaults*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(InternalResourceBundle, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InternalResourceBundle, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InternalResourceBundle",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InternalResourceBundle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalResourceBundle);
	});
	return class$;
}

$Class* InternalResourceBundle::class$ = nullptr;