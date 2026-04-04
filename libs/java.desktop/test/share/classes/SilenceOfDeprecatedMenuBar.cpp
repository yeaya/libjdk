#include <SilenceOfDeprecatedMenuBar.h>
#include <SilenceOfDeprecatedMenuBar$DeprecatedFrame.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $SilenceOfDeprecatedMenuBar$DeprecatedFrame = ::SilenceOfDeprecatedMenuBar$DeprecatedFrame;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JMenuBar = ::javax::swing::JMenuBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0 : public $Runnable {
	$class(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		SilenceOfDeprecatedMenuBar::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::class$ = nullptr;

void SilenceOfDeprecatedMenuBar::init$() {
}

void SilenceOfDeprecatedMenuBar::main($StringArray* args) {
	$init(SilenceOfDeprecatedMenuBar);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$SwingUtilities::invokeAndWait($$new(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0, laf));
			$SwingUtilities::invokeAndWait($$new(SilenceOfDeprecatedMenuBar));
		}
	}
}

void SilenceOfDeprecatedMenuBar::run() {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($SilenceOfDeprecatedMenuBar$DeprecatedFrame));
	$var($Throwable, var$0, nullptr);
	try {
		$var($JMenuBar, bar, $new($JMenuBar));
		frame->setJMenuBar(bar);
		frame->setBounds(100, 100, 100, 100);
		frame->setLocationRelativeTo(nullptr);
		frame->setVisible(true);
		if (bar != frame->getJMenuBar()) {
			$throwNew($RuntimeException, "Wrong JMenuBar"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		frame->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void SilenceOfDeprecatedMenuBar::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(SilenceOfDeprecatedMenuBar);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $(laf->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void SilenceOfDeprecatedMenuBar::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(SilenceOfDeprecatedMenuBar);
	setLookAndFeel(laf);
}

SilenceOfDeprecatedMenuBar::SilenceOfDeprecatedMenuBar() {
}

$Class* SilenceOfDeprecatedMenuBar::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0")) {
			return SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SilenceOfDeprecatedMenuBar, init$, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SilenceOfDeprecatedMenuBar, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SilenceOfDeprecatedMenuBar, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SilenceOfDeprecatedMenuBar, run, void)},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SilenceOfDeprecatedMenuBar, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SilenceOfDeprecatedMenuBar$DeprecatedFrame", "SilenceOfDeprecatedMenuBar", "DeprecatedFrame", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"SilenceOfDeprecatedMenuBar",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SilenceOfDeprecatedMenuBar$DeprecatedFrame,SilenceOfDeprecatedMenuBar$DeprecatedFrame$1"
	};
	$loadClass(SilenceOfDeprecatedMenuBar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SilenceOfDeprecatedMenuBar);
	});
	return class$;
}

$Class* SilenceOfDeprecatedMenuBar::class$ = nullptr;