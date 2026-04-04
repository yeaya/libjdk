#include <InternalFrameIcon.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/Icon.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Icon = ::javax::swing::Icon;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class InternalFrameIcon$$Lambda$lambda$main$0 : public $Runnable {
	$class(InternalFrameIcon$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		InternalFrameIcon::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* InternalFrameIcon$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(InternalFrameIcon$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(InternalFrameIcon$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(InternalFrameIcon$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"InternalFrameIcon$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InternalFrameIcon$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalFrameIcon$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* InternalFrameIcon$$Lambda$lambda$main$0::class$ = nullptr;

void InternalFrameIcon::init$() {
}

void InternalFrameIcon::main($StringArray* args) {
	$init(InternalFrameIcon);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$SwingUtilities::invokeAndWait($$new(InternalFrameIcon$$Lambda$lambda$main$0, laf));
			$SwingUtilities::invokeAndWait($$new(InternalFrameIcon));
		}
	}
}

void InternalFrameIcon::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(InternalFrameIcon);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $(laf->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($UnsupportedLookAndFeelException& ignored) {
	}
}

void InternalFrameIcon::run() {
	$useLocalObjectStack();
	$var($Object, o, $$nc($UIManager::getDefaults())->get("InternalFrame.icon"_s));
	if (o != nullptr && !($instanceOf($Icon, o))) {
		$throwNew($RuntimeException, $$str({"Wrong object: "_s, o}));
	}
}

void InternalFrameIcon::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(InternalFrameIcon);
	setLookAndFeel(laf);
}

InternalFrameIcon::InternalFrameIcon() {
}

$Class* InternalFrameIcon::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("InternalFrameIcon$$Lambda$lambda$main$0")) {
			return InternalFrameIcon$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InternalFrameIcon, init$, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(InternalFrameIcon, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InternalFrameIcon, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(InternalFrameIcon, run, void)},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(InternalFrameIcon, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"InternalFrameIcon",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(InternalFrameIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalFrameIcon);
	});
	return class$;
}

$Class* InternalFrameIcon::class$ = nullptr;