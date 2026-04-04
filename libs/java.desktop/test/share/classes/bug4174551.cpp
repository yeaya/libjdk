#include <bug4174551.h>
#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Font.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef PLAIN

using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Font = ::java::awt::Font;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JApplet = ::javax::swing::JApplet;
using $JOptionPane = ::javax::swing::JOptionPane;
using $UIManager = ::javax::swing::UIManager;

class bug4174551$$Lambda$lambda$init$0 : public $Runnable {
	$class(bug4174551$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4174551::lambda$init$0();
	}
};
$Class* bug4174551$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4174551$$Lambda$lambda$init$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4174551$$Lambda$lambda$init$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4174551$$Lambda$lambda$init$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4174551$$Lambda$lambda$init$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4174551$$Lambda$lambda$init$0);
	});
	return class$;
}
$Class* bug4174551$$Lambda$lambda$init$0::class$ = nullptr;

void bug4174551::init$() {
	$JApplet::init$();
}

void bug4174551::init() {
	try {
		$EventQueue::invokeLater($$new(bug4174551$$Lambda$lambda$init$0));
	} catch ($Exception& ex) {
		ex->printStackTrace();
	}
}

void bug4174551::lambda$init$0() {
	$init(bug4174551);
	$useLocalObjectStack();
	$$nc($UIManager::getDefaults())->put("OptionPane.buttonFont"_s, $$new($Font, "Dialog"_s, $Font::PLAIN, 10));
	$$nc($UIManager::getDefaults())->put("OptionPane.messageFont"_s, $$new($Font, "Dialog"_s, $Font::PLAIN, 24));
	$JOptionPane::showMessageDialog(nullptr, "HI 24!"_s);
	$nc($System::out)->println($($$nc($UIManager::getDefaults())->get("OptionPane.buttonFont"_s)));
	$System::out->println($($$nc($UIManager::getDefaults())->get("OptionPane.messageFont"_s)));
}

bug4174551::bug4174551() {
}

$Class* bug4174551::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4174551$$Lambda$lambda$init$0")) {
			return bug4174551$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4174551, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug4174551, init, void)},
		{"lambda$init$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4174551, lambda$init$0, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4174551",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4174551, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4174551));
	});
	return class$;
}

$Class* bug4174551::class$ = nullptr;