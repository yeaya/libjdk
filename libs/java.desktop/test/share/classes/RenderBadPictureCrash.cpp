#include <RenderBadPictureCrash.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice$WindowTranslucency.h>
#include <java/awt/GraphicsDevice.h>
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

#undef PERPIXEL_TRANSLUCENT

using $Color = ::java::awt::Color;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsDevice$WindowTranslucency = ::java::awt::GraphicsDevice$WindowTranslucency;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class RenderBadPictureCrash$$Lambda$lambda$main$0 : public $Runnable {
	$class(RenderBadPictureCrash$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		RenderBadPictureCrash::lambda$main$0();
	}
};
$Class* RenderBadPictureCrash$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RenderBadPictureCrash$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RenderBadPictureCrash$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"RenderBadPictureCrash$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(RenderBadPictureCrash$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RenderBadPictureCrash$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* RenderBadPictureCrash$$Lambda$lambda$main$0::class$ = nullptr;

void RenderBadPictureCrash::init$() {
}

void RenderBadPictureCrash::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new(RenderBadPictureCrash$$Lambda$lambda$main$0));
}

void RenderBadPictureCrash::lambda$main$0() {
	$useLocalObjectStack();
	$var($JFrame, f, $new($JFrame));
	f->setUndecorated(true);
	$var($GraphicsDevice, gd, $$nc(f->getGraphicsConfiguration())->getDevice());
	$init($GraphicsDevice$WindowTranslucency);
	if ($nc(gd)->isWindowTranslucencySupported($GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSLUCENT)) {
		f->setBackground($$new($Color, 0, 0, 0, 0));
	}
	f->setSize(200, 300);
	f->setVisible(true);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$UIManager::setLookAndFeel("com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s);
		} catch ($Exception& e) {
			$nc($System::err)->println($of(e));
			$System::err->println("Could not set GTKLookAndFeel, skipping this test"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		f->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

RenderBadPictureCrash::RenderBadPictureCrash() {
}

$Class* RenderBadPictureCrash::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("RenderBadPictureCrash$$Lambda$lambda$main$0")) {
			return RenderBadPictureCrash$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RenderBadPictureCrash, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RenderBadPictureCrash, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RenderBadPictureCrash, main, void, $StringArray*), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"RenderBadPictureCrash",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RenderBadPictureCrash, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RenderBadPictureCrash);
	});
	return class$;
}

$Class* RenderBadPictureCrash::class$ = nullptr;