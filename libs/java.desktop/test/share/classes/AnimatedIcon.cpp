#include <AnimatedIcon.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef SOMEBITS

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JButton = ::javax::swing::JButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class AnimatedIcon$$Lambda$lambda$main$0 : public $Runnable {
	$class(AnimatedIcon$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		AnimatedIcon::lambda$main$0();
	}
};
$Class* AnimatedIcon$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AnimatedIcon$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AnimatedIcon$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"AnimatedIcon$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(AnimatedIcon$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnimatedIcon$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* AnimatedIcon$$Lambda$lambda$main$0::class$ = nullptr;

void AnimatedIcon::init$() {
}

void AnimatedIcon::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new(AnimatedIcon$$Lambda$lambda$main$0));
}

void AnimatedIcon::isAnimated($BufferedImage* bi, $JButton* button) {
	if (!$nc(button)->imageUpdate(bi, $ImageObserver::SOMEBITS, 0, 0, 1, 1)) {
		$throwNew($RuntimeException);
	}
}

void AnimatedIcon::lambda$main$0() {
	$useLocalObjectStack();
	$var($BufferedImage, bi, $new($BufferedImage, 1, 1, 1));
	$var($ImageIcon, icon, $new($ImageIcon, bi));
	$var($JButton, button, $new($JButton, icon));
	isAnimated(bi, button);
	$$nc(button->getModel())->setPressed(true);
	$$nc(button->getModel())->setArmed(true);
	isAnimated(bi, button);
	$$nc(button->getModel())->setPressed(false);
	$$nc(button->getModel())->setArmed(false);
	$$nc(button->getModel())->setSelected(true);
	isAnimated(bi, button);
	$$nc(button->getModel())->setSelected(false);
	$$nc(button->getModel())->setRollover(true);
	button->setRolloverEnabled(true);
	isAnimated(bi, button);
	$$nc(button->getModel())->setSelected(true);
	isAnimated(bi, button);
	button->setIcon(nullptr);
	button->setPressedIcon(icon);
	$$nc(button->getModel())->setPressed(true);
	$$nc(button->getModel())->setArmed(true);
	isAnimated(bi, button);
}

AnimatedIcon::AnimatedIcon() {
}

$Class* AnimatedIcon::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("AnimatedIcon$$Lambda$lambda$main$0")) {
			return AnimatedIcon$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AnimatedIcon, init$, void)},
		{"isAnimated", "(Ljava/awt/image/BufferedImage;Ljavax/swing/JButton;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(AnimatedIcon, isAnimated, void, $BufferedImage*, $JButton*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AnimatedIcon, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AnimatedIcon, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"AnimatedIcon",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AnimatedIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnimatedIcon);
	});
	return class$;
}

$Class* AnimatedIcon::class$ = nullptr;