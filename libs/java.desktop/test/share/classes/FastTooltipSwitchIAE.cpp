#include <FastTooltipSwitchIAE.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
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
#include <javax/swing/JToolTip.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Dimension = ::java::awt::Dimension;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JToolTip = ::javax::swing::JToolTip;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class FastTooltipSwitchIAE$$Lambda$lambda$main$0 : public $Runnable {
	$class(FastTooltipSwitchIAE$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		FastTooltipSwitchIAE::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* FastTooltipSwitchIAE$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(FastTooltipSwitchIAE$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(FastTooltipSwitchIAE$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FastTooltipSwitchIAE$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FastTooltipSwitchIAE$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FastTooltipSwitchIAE$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FastTooltipSwitchIAE$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* FastTooltipSwitchIAE$$Lambda$lambda$main$0::class$ = nullptr;

class FastTooltipSwitchIAE$$Lambda$doTest$1 : public $Runnable {
	$class(FastTooltipSwitchIAE$$Lambda$doTest$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		FastTooltipSwitchIAE::doTest();
	}
};
$Class* FastTooltipSwitchIAE$$Lambda$doTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FastTooltipSwitchIAE$$Lambda$doTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FastTooltipSwitchIAE$$Lambda$doTest$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FastTooltipSwitchIAE$$Lambda$doTest$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(FastTooltipSwitchIAE$$Lambda$doTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FastTooltipSwitchIAE$$Lambda$doTest$1);
	});
	return class$;
}
$Class* FastTooltipSwitchIAE$$Lambda$doTest$1::class$ = nullptr;

$Dimension* FastTooltipSwitchIAE::oneByOneSize = nullptr;

void FastTooltipSwitchIAE::init$() {
}

void FastTooltipSwitchIAE::main($StringArray* args) {
	$init(FastTooltipSwitchIAE);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		try {
			$SwingUtilities::invokeAndWait($$new(FastTooltipSwitchIAE$$Lambda$lambda$main$0, laf));
			$SwingUtilities::invokeAndWait($$new(FastTooltipSwitchIAE$$Lambda$doTest$1));
			$nc($System::out)->println($$str({"Test passed for LookAndFeel "_s, $($nc(laf)->getClassName())}));
		} catch ($Exception& e) {
			$throwNew($RuntimeException, $$str({"Test failed for "_s, $($nc(laf)->getClassName())}), e);
		}
	}
}

void FastTooltipSwitchIAE::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(FastTooltipSwitchIAE);
	$useLocalObjectStack();
	try {
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
		$UIManager::setLookAndFeel($(laf->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::err)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void FastTooltipSwitchIAE::doTest() {
	$init(FastTooltipSwitchIAE);
	$useLocalObjectStack();
	$var($JToolTip, toolTip, $new($JToolTip));
	toolTip->setTipText("<html><h1>Hello world</h1></html>"_s);
	toolTip->setMinimumSize(FastTooltipSwitchIAE::oneByOneSize);
	toolTip->setMaximumSize(FastTooltipSwitchIAE::oneByOneSize);
	toolTip->setPreferredSize(FastTooltipSwitchIAE::oneByOneSize);
	toolTip->setBounds(100, 100, 1, 1);
	$var($BufferedImage, img, $new($BufferedImage, 100, 100, $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics2D, g2d, img->createGraphics());
	toolTip->paint(g2d);
	$nc(g2d)->dispose();
}

void FastTooltipSwitchIAE::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(FastTooltipSwitchIAE);
	setLookAndFeel(laf);
}

void FastTooltipSwitchIAE::clinit$($Class* clazz) {
	$assignStatic(FastTooltipSwitchIAE::oneByOneSize, $new($Dimension, 1, 1));
}

FastTooltipSwitchIAE::FastTooltipSwitchIAE() {
}

$Class* FastTooltipSwitchIAE::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("FastTooltipSwitchIAE$$Lambda$lambda$main$0")) {
			return FastTooltipSwitchIAE$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("FastTooltipSwitchIAE$$Lambda$doTest$1")) {
			return FastTooltipSwitchIAE$$Lambda$doTest$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"oneByOneSize", "Ljava/awt/Dimension;", nullptr, $STATIC, $staticField(FastTooltipSwitchIAE, oneByOneSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FastTooltipSwitchIAE, init$, void)},
		{"doTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(FastTooltipSwitchIAE, doTest, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FastTooltipSwitchIAE, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FastTooltipSwitchIAE, main, void, $StringArray*)},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FastTooltipSwitchIAE, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FastTooltipSwitchIAE",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FastTooltipSwitchIAE, name, initialize, &classInfo$$, FastTooltipSwitchIAE::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FastTooltipSwitchIAE);
	});
	return class$;
}

$Class* FastTooltipSwitchIAE::class$ = nullptr;