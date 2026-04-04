#include <MisplacedBorder.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
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
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef H
#undef RED
#undef W

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
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
using $ImageIO = ::javax::imageio::ImageIO;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class MisplacedBorder$$Lambda$lambda$main$0 : public $Runnable {
	$class(MisplacedBorder$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		MisplacedBorder::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* MisplacedBorder$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(MisplacedBorder$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(MisplacedBorder$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MisplacedBorder$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"MisplacedBorder$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MisplacedBorder$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MisplacedBorder$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* MisplacedBorder$$Lambda$lambda$main$0::class$ = nullptr;

void MisplacedBorder::init$() {
}

void MisplacedBorder::main($StringArray* args) {
	$init(MisplacedBorder);
	$useLocalObjectStack();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait($$new(MisplacedBorder$$Lambda$lambda$main$0, laf));
				$SwingUtilities::invokeAndWait($$new(MisplacedBorder));
			}
		}
	}
	$nc($System::out)->println("Test passed"_s);
}

void MisplacedBorder::run() {
	$useLocalObjectStack();
	$var($JMenuBar, menubar, $new($JMenuBar));
	menubar->add($$new($JMenu, ""_s));
	menubar->add($$new($JMenu, ""_s));
	$var($JFrame, frame, $new($JFrame));
	frame->setUndecorated(true);
	frame->setJMenuBar(menubar);
	frame->setSize(MisplacedBorder::W / 3, MisplacedBorder::H / 3);
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
	$var($BufferedImage, bi1, step1(menubar));
	$var($BufferedImage, bi2, step2(menubar));
	frame->dispose();
	for (int32_t x = 0; x < MisplacedBorder::W; ++x) {
		for (int32_t y = 0; y < MisplacedBorder::H; ++y) {
			int32_t var$0 = $nc(bi1)->getRGB(x, y);
			if (var$0 != $nc(bi2)->getRGB(x, y)) {
				try {
					$ImageIO::write(bi1, "png"_s, $$new($File, "image1.png"_s));
					$ImageIO::write(bi2, "png"_s, $$new($File, "image2.png"_s));
				} catch ($IOException& e) {
					e->printStackTrace();
				}
				$throwNew($RuntimeException, "Failed: wrong color"_s);
			}
		}
	}
}

$BufferedImage* MisplacedBorder::step1($JMenuBar* menubar) {
	$useLocalObjectStack();
	$var($BufferedImage, bi1, $new($BufferedImage, MisplacedBorder::W, MisplacedBorder::H, 3));
	$var($Graphics2D, g2d, bi1->createGraphics());
	$nc(g2d)->scale(2, 2);
	$init($Color);
	g2d->setColor($Color::RED);
	g2d->fillRect(0, 0, MisplacedBorder::W, MisplacedBorder::H);
	$nc(menubar)->paintAll(g2d);
	g2d->dispose();
	return bi1;
}

$BufferedImage* MisplacedBorder::step2($JMenuBar* menubar) {
	$useLocalObjectStack();
	$var($BufferedImage, bi2, $new($BufferedImage, MisplacedBorder::W, MisplacedBorder::H, 3));
	$var($Graphics2D, g2d2, bi2->createGraphics());
	$nc(g2d2)->scale(2, 2);
	$init($Color);
	g2d2->setColor($Color::RED);
	g2d2->fillRect(0, 0, MisplacedBorder::W, MisplacedBorder::H);
	$nc(menubar)->paintAll(g2d2);
	int32_t var$0 = menubar->getX();
	int32_t var$1 = menubar->getX();
	int32_t var$2 = menubar->getWidth();
	$$nc(menubar->getBorder())->paintBorder(menubar, g2d2, var$0, var$1, var$2, menubar->getHeight());
	g2d2->dispose();
	return bi2;
}

void MisplacedBorder::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(MisplacedBorder);
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

void MisplacedBorder::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(MisplacedBorder);
	setLookAndFeel(laf);
}

MisplacedBorder::MisplacedBorder() {
}

$Class* MisplacedBorder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("MisplacedBorder$$Lambda$lambda$main$0")) {
			return MisplacedBorder$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"W", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MisplacedBorder, W)},
		{"H", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MisplacedBorder, H)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MisplacedBorder, init$, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MisplacedBorder, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MisplacedBorder, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MisplacedBorder, run, void)},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MisplacedBorder, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"step1", "(Ljavax/swing/JMenuBar;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $method(MisplacedBorder, step1, $BufferedImage*, $JMenuBar*)},
		{"step2", "(Ljavax/swing/JMenuBar;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $method(MisplacedBorder, step2, $BufferedImage*, $JMenuBar*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"MisplacedBorder",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MisplacedBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MisplacedBorder);
	});
	return class$;
}

$Class* MisplacedBorder::class$ = nullptr;