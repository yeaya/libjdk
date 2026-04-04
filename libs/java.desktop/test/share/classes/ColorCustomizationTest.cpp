#include <ColorCustomizationTest.h>
#include <ColorCustomizationTest$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Error.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/Region.h>
#include <jcpp.h>

#undef BLUE
#undef GREEN
#undef HEIGHT
#undef LABEL
#undef RED
#undef TYPE_INT_ARGB
#undef WIDTH

using $ColorCustomizationTest$1 = ::ColorCustomizationTest$1;
using $Color = ::java::awt::Color;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $Region = ::javax::swing::plaf::synth::Region;

$NimbusLookAndFeel* ColorCustomizationTest::nimbus = nullptr;

void ColorCustomizationTest::init$() {
	$set(this, label, $new($JLabel));
	this->label->setSize(200, 100);
	$set(this, g, $$new($BufferedImage, ColorCustomizationTest::WIDTH, ColorCustomizationTest::HEIGHT, $BufferedImage::TYPE_INT_ARGB)->getGraphics());
}

void ColorCustomizationTest::main($StringArray* args) {
	$init(ColorCustomizationTest);
	$assignStatic(ColorCustomizationTest::nimbus, $new($NimbusLookAndFeel));
	try {
		$UIManager::setLookAndFeel(ColorCustomizationTest::nimbus);
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($Error, "Unable to set Nimbus LAF"_s);
	}
	$SwingUtilities::invokeAndWait($$new($ColorCustomizationTest$1));
}

void ColorCustomizationTest::check($Color* c) {
	$useLocalObjectStack();
	$SwingUtilities::updateComponentTreeUI(this->label);
	this->label->paint(this->g);
	int32_t var$0 = $$nc(this->label->getBackground())->getRGB();
	if (var$0 != $nc(c)->getRGB()) {
		$nc($System::err)->println("Color mismatch!"_s);
		$System::err->println($$str({"   found: "_s, $(this->label->getBackground())}));
		$System::err->println($$str({"   expected: "_s, c}));
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void ColorCustomizationTest::test() {
	testOverrides();
	testInheritance();
	testNames();
	testBaseColor();
}

void ColorCustomizationTest::testOverrides() {
	$useLocalObjectStack();
	$var($Color, defaultColor, this->label->getBackground());
	$var($UIDefaults, defs, $new($UIDefaults));
	$init($Color);
	defs->put("Label.background"_s, $$new($ColorUIResource, $Color::RED));
	this->label->putClientProperty("Nimbus.Overrides"_s, defs);
	check($Color::RED);
	$assign(defs, $new($UIDefaults));
	defs->put("Label.background"_s, $$new($ColorUIResource, $Color::GREEN));
	this->label->putClientProperty("Nimbus.Overrides"_s, defs);
	check($Color::GREEN);
	this->label->putClientProperty("Nimbus.Overrides"_s, nullptr);
	check(defaultColor);
}

void ColorCustomizationTest::testInheritance() {
	$useLocalObjectStack();
	$var($Color, defaultColor, this->label->getBackground());
	$init($Color);
	$UIManager::put("Label[Enabled].background"_s, $$new($ColorUIResource, $Color::RED));
	$var($UIDefaults, defs, $new($UIDefaults));
	defs->put("Label.background"_s, $$new($ColorUIResource, $Color::GREEN));
	this->label->putClientProperty("Nimbus.Overrides"_s, defs);
	check($Color::RED);
	this->label->putClientProperty("Nimbus.Overrides.InheritDefaults"_s, $($Boolean::valueOf(false)));
	check($Color::GREEN);
	this->label->putClientProperty("Nimbus.Overrides.InheritDefaults"_s, $($Boolean::valueOf(true)));
	check($Color::RED);
	$UIManager::put("Label[Enabled].background"_s, nullptr);
	this->label->putClientProperty("Nimbus.Overrides.InheritDefaults"_s, $($Boolean::valueOf(false)));
	this->label->putClientProperty("Nimbus.Overrides"_s, nullptr);
	check(defaultColor);
}

void ColorCustomizationTest::testNames() {
	$useLocalObjectStack();
	$var($Color, defaultColor, this->label->getBackground());
	$init($Color);
	$UIManager::put("\"BlueLabel\"[Enabled].background"_s, $$new($ColorUIResource, $Color::BLUE));
	$UIManager::put("\"RedLabel\"[Enabled].background"_s, $$new($ColorUIResource, $Color::RED));
	$init($Region);
	$nc(ColorCustomizationTest::nimbus)->register$($Region::LABEL, "\"BlueLabel\""_s);
	$nc(ColorCustomizationTest::nimbus)->register$($Region::LABEL, "\"RedLabel\""_s);
	this->label->setName("BlueLabel"_s);
	check($Color::BLUE);
	this->label->setName("RedLabel"_s);
	check($Color::RED);
	this->label->setName(nullptr);
	check(defaultColor);
}

void ColorCustomizationTest::testBaseColor() {
	$init($Color);
	$UIManager::put("control"_s, $Color::GREEN);
	check($Color::GREEN);
}

ColorCustomizationTest::ColorCustomizationTest() {
}

$Class* ColorCustomizationTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WIDTH", "I", nullptr, $STATIC | $FINAL, $constField(ColorCustomizationTest, WIDTH)},
		{"HEIGHT", "I", nullptr, $STATIC | $FINAL, $constField(ColorCustomizationTest, HEIGHT)},
		{"nimbus", "Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;", nullptr, $STATIC, $staticField(ColorCustomizationTest, nimbus)},
		{"label", "Ljavax/swing/JLabel;", nullptr, $FINAL, $field(ColorCustomizationTest, label)},
		{"g", "Ljava/awt/Graphics;", nullptr, $FINAL, $field(ColorCustomizationTest, g)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ColorCustomizationTest, init$, void)},
		{"check", "(Ljava/awt/Color;)V", nullptr, 0, $virtualMethod(ColorCustomizationTest, check, void, $Color*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ColorCustomizationTest, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, 0, $virtualMethod(ColorCustomizationTest, test, void)},
		{"testBaseColor", "()V", nullptr, 0, $virtualMethod(ColorCustomizationTest, testBaseColor, void)},
		{"testInheritance", "()V", nullptr, 0, $virtualMethod(ColorCustomizationTest, testInheritance, void)},
		{"testNames", "()V", nullptr, 0, $virtualMethod(ColorCustomizationTest, testNames, void)},
		{"testOverrides", "()V", nullptr, 0, $virtualMethod(ColorCustomizationTest, testOverrides, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ColorCustomizationTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ColorCustomizationTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ColorCustomizationTest$1"
	};
	$loadClass(ColorCustomizationTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ColorCustomizationTest);
	});
	return class$;
}

$Class* ColorCustomizationTest::class$ = nullptr;