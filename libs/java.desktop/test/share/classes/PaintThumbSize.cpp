#include <PaintThumbSize.h>
#include <java/awt/Color.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
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
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef BLACK
#undef CYAN
#undef SCALE
#undef SHIFT

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $EventQueue = ::java::awt::EventQueue;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ImageIO = ::javax::imageio::ImageIO;
using $JSlider = ::javax::swing::JSlider;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

class PaintThumbSize$$Lambda$lambda$main$0 : public $Runnable {
	$class(PaintThumbSize$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		PaintThumbSize::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* PaintThumbSize$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(PaintThumbSize$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(PaintThumbSize$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PaintThumbSize$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PaintThumbSize$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PaintThumbSize$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PaintThumbSize$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* PaintThumbSize$$Lambda$lambda$main$0::class$ = nullptr;

class PaintThumbSize$$Lambda$test$1 : public $Runnable {
	$class(PaintThumbSize$$Lambda$test$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		PaintThumbSize::test();
	}
};
$Class* PaintThumbSize$$Lambda$test$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PaintThumbSize$$Lambda$test$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PaintThumbSize$$Lambda$test$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PaintThumbSize$$Lambda$test$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(PaintThumbSize$$Lambda$test$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PaintThumbSize$$Lambda$test$1);
	});
	return class$;
}
$Class* PaintThumbSize$$Lambda$test$1::class$ = nullptr;

class PaintThumbSize$$Lambda$lambda$main$1$2 : public $Runnable {
	$class(PaintThumbSize$$Lambda$lambda$main$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		PaintThumbSize::lambda$main$1();
	}
};
$Class* PaintThumbSize$$Lambda$lambda$main$1$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PaintThumbSize$$Lambda$lambda$main$1$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PaintThumbSize$$Lambda$lambda$main$1$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"PaintThumbSize$$Lambda$lambda$main$1$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(PaintThumbSize$$Lambda$lambda$main$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PaintThumbSize$$Lambda$lambda$main$1$2);
	});
	return class$;
}
$Class* PaintThumbSize$$Lambda$lambda$main$1$2::class$ = nullptr;

void PaintThumbSize::init$() {
}

void PaintThumbSize::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$EventQueue::invokeAndWait($$new(PaintThumbSize$$Lambda$lambda$main$0, laf));
			$EventQueue::invokeAndWait($$new(PaintThumbSize$$Lambda$test$1));
			if ($$nc($nc(laf)->getClassName())->contains("Metal"_s)) {
				$EventQueue::invokeAndWait($$new(PaintThumbSize$$Lambda$lambda$main$1$2));
			}
		}
	}
}

void PaintThumbSize::test() {
	$useLocalObjectStack();
	$var($BufferedImage, bi, $new($BufferedImage, 500, 500, 2));
	$var($Graphics2D, g, bi->createGraphics());
	$init($Color);
	$nc(g)->setColor($Color::CYAN);
	int32_t var$0 = bi->getWidth();
	g->fillRect(0, 0, var$0, bi->getHeight());
	g->setColor($Color::BLACK);
	g->scale((double)PaintThumbSize::SCALE, (double)PaintThumbSize::SCALE);
	g->translate(PaintThumbSize::SHIFT, PaintThumbSize::SHIFT);
	$var($JSlider, slider, $new($JSlider));
	$var($SliderUI, ui, $cast($SliderUI, slider->getUI()));
	if ($instanceOf($BasicSliderUI, ui)) {
		$var($BasicSliderUI, bui, $cast($BasicSliderUI, ui));
		bui->setThumbLocation(0, 0);
		bui->paintThumb(g);
		for (int32_t y = 0; y < bi->getHeight(); ++y) {
			for (int32_t x = 0; x < bi->getWidth(); ++x) {
				if (x >= PaintThumbSize::SHIFT * PaintThumbSize::SCALE && y >= PaintThumbSize::SHIFT * PaintThumbSize::SCALE) {
					continue;
				}
				int32_t var$1 = bi->getRGB(x, y);
				if (var$1 != $nc($Color::CYAN)->getRGB()) {
					$nc($System::err)->println($$str({"x = "_s, $$str(x)}));
					$System::err->println($$str({"y = "_s, $$str(y)}));
					try {
						$ImageIO::write(bi, "png"_s, $$new($File, "image.png"_s));
					} catch ($IOException& e) {
						e->printStackTrace();
					}
					$throwNew($RuntimeException, "Wrong color"_s);
				}
			}
		}
	}
	g->dispose();
}

void PaintThumbSize::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
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

void PaintThumbSize::lambda$main$1() {
	$nc($System::err)->println("\tAdditional theme: DefaultMetalTheme"_s);
	$MetalLookAndFeel::setCurrentTheme($$new($DefaultMetalTheme));
	test();
}

void PaintThumbSize::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

PaintThumbSize::PaintThumbSize() {
}

$Class* PaintThumbSize::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("PaintThumbSize$$Lambda$lambda$main$0")) {
			return PaintThumbSize$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("PaintThumbSize$$Lambda$test$1")) {
			return PaintThumbSize$$Lambda$test$1::load$(name, initialize);
		}
		if (name->equals("PaintThumbSize$$Lambda$lambda$main$1$2")) {
			return PaintThumbSize$$Lambda$lambda$main$1$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"SCALE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PaintThumbSize, SCALE)},
		{"SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PaintThumbSize, SHIFT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PaintThumbSize, init$, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PaintThumbSize, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PaintThumbSize, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PaintThumbSize, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(PaintThumbSize, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"test", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(PaintThumbSize, test, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"PaintThumbSize",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PaintThumbSize, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PaintThumbSize);
	});
	return class$;
}

$Class* PaintThumbSize::class$ = nullptr;