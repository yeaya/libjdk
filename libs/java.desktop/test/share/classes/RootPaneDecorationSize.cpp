#include <RootPaneDecorationSize.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Window.h>
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
#include <javax/swing/JFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef FRAME

using $ComponentArray = $Array<::java::awt::Component>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
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
using $JFrame = ::javax::swing::JFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JRootPane = ::javax::swing::JRootPane;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class RootPaneDecorationSize$$Lambda$lambda$main$0 : public $Runnable {
	$class(RootPaneDecorationSize$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		RootPaneDecorationSize::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* RootPaneDecorationSize$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(RootPaneDecorationSize$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(RootPaneDecorationSize$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RootPaneDecorationSize$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"RootPaneDecorationSize$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RootPaneDecorationSize$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RootPaneDecorationSize$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* RootPaneDecorationSize$$Lambda$lambda$main$0::class$ = nullptr;

class RootPaneDecorationSize$$Lambda$test$1 : public $Runnable {
	$class(RootPaneDecorationSize$$Lambda$test$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		RootPaneDecorationSize::test();
	}
};
$Class* RootPaneDecorationSize$$Lambda$test$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RootPaneDecorationSize$$Lambda$test$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RootPaneDecorationSize$$Lambda$test$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"RootPaneDecorationSize$$Lambda$test$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(RootPaneDecorationSize$$Lambda$test$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RootPaneDecorationSize$$Lambda$test$1);
	});
	return class$;
}
$Class* RootPaneDecorationSize$$Lambda$test$1::class$ = nullptr;

void RootPaneDecorationSize::init$() {
}

void RootPaneDecorationSize::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$EventQueue::invokeAndWait($$new(RootPaneDecorationSize$$Lambda$lambda$main$0, laf));
			$EventQueue::invokeAndWait($$new(RootPaneDecorationSize$$Lambda$test$1));
		}
	}
}

void RootPaneDecorationSize::test() {
	$useLocalObjectStack();
	$var($JFrame, frame, $new($JFrame));
	$var($Dimension, size, nullptr);
	$var($Dimension, min, nullptr);
	$var($Dimension, pref, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		frame->setUndecorated(true);
		$$nc(frame->getRootPane())->setWindowDecorationStyle($JRootPane::FRAME);
		$var($JLayeredPane, layeredPane, $$nc(frame->getRootPane())->getLayeredPane());
		{
			$var($ComponentArray, arr$, $nc(layeredPane)->getComponents());
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					$nc(comp)->setMinimumSize($$new($Dimension, 1000, 10));
					comp->setMaximumSize($$new($Dimension, 1000, 10));
					comp->setPreferredSize($$new($Dimension, 1000, 10));
				}
			}
		}
		frame->pack();
		$assign(size, frame->getSize());
		$assign(min, frame->getMinimumSize());
		$assign(pref, frame->getPreferredSize());
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		frame->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$nc($System::err)->println($$str({"\tsize = "_s, size}));
	$System::err->println($$str({"\tminimumSize = "_s, min}));
	$System::err->println($$str({"\tpreferredSize = "_s, pref}));
	if ($nc(size)->height > 1000 || $nc(min)->height > 1000 || $nc(pref)->height > 1000) {
		$throwNew($RuntimeException, "The height too big"_s);
	}
	if (size->width < 1000 || $nc(min)->width < 1000 || $nc(pref)->width < 1000) {
		$throwNew($RuntimeException, "The width too small"_s);
	}
}

void RootPaneDecorationSize::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalObjectStack();
	try {
		$nc($System::err)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
		$UIManager::setLookAndFeel($(laf->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::err)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void RootPaneDecorationSize::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

RootPaneDecorationSize::RootPaneDecorationSize() {
}

$Class* RootPaneDecorationSize::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("RootPaneDecorationSize$$Lambda$lambda$main$0")) {
			return RootPaneDecorationSize$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("RootPaneDecorationSize$$Lambda$test$1")) {
			return RootPaneDecorationSize$$Lambda$test$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RootPaneDecorationSize, init$, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RootPaneDecorationSize, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RootPaneDecorationSize, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(RootPaneDecorationSize, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"test", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(RootPaneDecorationSize, test, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"RootPaneDecorationSize",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RootPaneDecorationSize, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RootPaneDecorationSize);
	});
	return class$;
}

$Class* RootPaneDecorationSize::class$ = nullptr;