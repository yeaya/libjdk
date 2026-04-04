#include <bug4222153.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JApplet = ::javax::swing::JApplet;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class bug4222153$$Lambda$lambda$init$0 : public $Runnable {
	$class(bug4222153$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4222153* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$init$0();
	}
	bug4222153* inst$ = nullptr;
};
$Class* bug4222153$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4222153$$Lambda$lambda$init$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4222153;)V", nullptr, $PUBLIC, $method(bug4222153$$Lambda$lambda$init$0, init$, void, bug4222153*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4222153$$Lambda$lambda$init$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4222153$$Lambda$lambda$init$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4222153$$Lambda$lambda$init$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4222153$$Lambda$lambda$init$0);
	});
	return class$;
}
$Class* bug4222153$$Lambda$lambda$init$0::class$ = nullptr;

void bug4222153::init$() {
	$JApplet::init$();
}

void bug4222153::init() {
	$SwingUtilities::invokeLater($$new(bug4222153$$Lambda$lambda$init$0, this));
}

void bug4222153::lambda$init$0() {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$$nc(getContentPane())->add($$new($JTable, 2, 2));
}

bug4222153::bug4222153() {
}

$Class* bug4222153::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4222153$$Lambda$lambda$init$0")) {
			return bug4222153$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4222153, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug4222153, init, void)},
		{"lambda$init$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(bug4222153, lambda$init$0, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4222153",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4222153, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4222153));
	});
	return class$;
}

$Class* bug4222153::class$ = nullptr;