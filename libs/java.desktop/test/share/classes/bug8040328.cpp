#include <bug8040328.h>
#include <bug8040328$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Window.h>
#include <java/io/ByteArrayInputStream.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef CENTER
#undef CYAN
#undef DARK_GRAY
#undef HORIZONTAL
#undef VERTICAL

using $bug8040328$1 = ::bug8040328$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Insets = ::java::awt::Insets;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JSlider = ::javax::swing::JSlider;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$String* bug8040328::synthXml = nullptr;

void bug8040328::init$() {
}

void bug8040328::main($StringArray* args) {
	$init(bug8040328);
	$useLocalObjectStack();
	$var($SynthLookAndFeel, lookAndFeel, $new($SynthLookAndFeel));
	lookAndFeel->load($$new($ByteArrayInputStream, $($nc(bug8040328::synthXml)->getBytes("UTF8"_s))), bug8040328::class$);
	$UIManager::setLookAndFeel(lookAndFeel);
	$SwingUtilities::invokeAndWait($$new($bug8040328$1));
	$nc($System::out)->println("ok"_s);
}

void bug8040328::test($JFrame* frame) {
	$init(bug8040328);
	$useLocalObjectStack();
	$var($JSlider, hslider, $new($JSlider, $JSlider::HORIZONTAL));
	$init($Color);
	hslider->setBackground($Color::DARK_GRAY);
	$init($BorderLayout);
	$$nc($nc(frame)->getContentPane())->add(hslider, $BorderLayout::CENTER);
	$$nc(frame->getContentPane())->setBackground($Color::CYAN);
	frame->pack();
	$var($Insets, insets, hslider->getInsets());
	if (hslider->getWidth() != 200 + $nc(insets)->left + $nc(insets)->right) {
		$throwNew($RuntimeException, $$str({"Horizontal slider width is wrong "_s, $$str(hslider->getWidth())}));
	}
	int32_t var$0 = hslider->getHeight();
	if (var$0 != $nc($(hslider->getMinimumSize()))->height) {
		$throwNew($RuntimeException, $$str({"Horizontal slider height is wrong "_s, $$str(hslider->getHeight())}));
	}
	$$nc(frame->getContentPane())->remove(hslider);
	$var($JSlider, vslider, $new($JSlider, $JSlider::VERTICAL));
	$$nc(frame->getContentPane())->add(vslider);
	frame->pack();
	$assign(insets, vslider->getInsets());
	int32_t var$1 = vslider->getWidth();
	if (var$1 != $nc($(vslider->getMinimumSize()))->width) {
		$throwNew($RuntimeException, $$str({"Verical slider width is wrong "_s, $$str(vslider->getWidth())}));
	}
	if (vslider->getHeight() != 200 + $nc(insets)->top + $nc(insets)->bottom) {
		$throwNew($RuntimeException, $$str({"Verical slider height is wrong "_s, $$str(vslider->getHeight())}));
	}
}

void bug8040328::clinit$($Class* clazz) {
	$assignStatic(bug8040328::synthXml, "<synth> <style id=\"all\"> <font name=\"Segoe UI\" size=\"12\"/> </style> <bind style=\"all\" type=\"REGION\" key=\".*\"/> <style id=\"slider\"> <insets top=\"10\" left=\"5\" bottom=\"10\" right=\"5\"/> </style> <bind style=\"slider\" type=\"region\" key=\"Slider\"/></synth>"_s);
}

bug8040328::bug8040328() {
}

$Class* bug8040328::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"synthXml", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(bug8040328, synthXml)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8040328, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8040328, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljavax/swing/JFrame;)V", nullptr, $STATIC, $staticMethod(bug8040328, test, void, $JFrame*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8040328$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8040328",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8040328$1"
	};
	$loadClass(bug8040328, name, initialize, &classInfo$$, bug8040328::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8040328);
	});
	return class$;
}

$Class* bug8040328::class$ = nullptr;