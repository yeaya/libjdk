#include <bug6794831$1.h>
#include <bug6794831.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TYPE_INT_ARGB
#undef VERTICAL

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug6794831 = ::bug6794831;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSlider = ::javax::swing::JSlider;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

void bug6794831$1::init$($bug6794831* this$0) {
	$set(this, this$0, this$0);
}

void bug6794831$1::run() {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
		{
			try {
				$UIManager::setLookAndFeel($($nc(lookAndFeelInfo)->getClassName()));
			} catch ($Exception& e) {
				$bug6794831::fail($(e->getMessage()));
			}
			$var($BufferedImage, image, $new($BufferedImage, 300, 200, $BufferedImage::TYPE_INT_ARGB));
			$var($JSlider, slider, $new($JSlider, 0, $Integer::MAX_VALUE - 1, 0));
			slider->setMajorTickSpacing(($Integer::MAX_VALUE - 1) / 4);
			slider->setPaintTicks(true);
			$$sure($BasicSliderUI, $cast($SliderUI, slider->getUI()))->paintTicks($(image->getGraphics()));
			$assign(slider, $new($JSlider, 0, $Integer::MAX_VALUE - 1, 0));
			slider->setMinorTickSpacing(($Integer::MAX_VALUE - 1) / 4);
			slider->setPaintTicks(true);
			$$sure($BasicSliderUI, $cast($SliderUI, slider->getUI()))->paintTicks($(image->getGraphics()));
			$assign(slider, $new($JSlider, 0, $Integer::MAX_VALUE - 1, 0));
			slider->setOrientation($JSlider::VERTICAL);
			slider->setMajorTickSpacing(($Integer::MAX_VALUE - 1) / 4);
			slider->setPaintTicks(true);
			$$sure($BasicSliderUI, $cast($SliderUI, slider->getUI()))->paintTicks($(image->getGraphics()));
			$assign(slider, $new($JSlider, 0, $Integer::MAX_VALUE - 1, 0));
			slider->setOrientation($JSlider::VERTICAL);
			slider->setMinorTickSpacing(($Integer::MAX_VALUE - 1) / 4);
			slider->setPaintTicks(true);
			$$sure($BasicSliderUI, $cast($SliderUI, slider->getUI()))->paintTicks($(image->getGraphics()));
			$nc(this->this$0->countDownLatch)->countDown();
		}
	}
}

bug6794831$1::bug6794831$1() {
}

$Class* bug6794831$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6794831;", nullptr, $FINAL | $SYNTHETIC, $field(bug6794831$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6794831;)V", nullptr, 0, $method(bug6794831$1, init$, void, $bug6794831*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6794831$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6794831",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6794831$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6794831$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6794831"
	};
	$loadClass(bug6794831$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6794831$1);
	});
	return class$;
}

$Class* bug6794831$1::class$ = nullptr;