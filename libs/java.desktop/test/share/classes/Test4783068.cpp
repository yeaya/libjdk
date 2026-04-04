#include <Test4783068.h>
#include <Test4783068$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Error.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef TEST_COLOR
#undef TYPE_INT_ARGB
#undef WHITE

using $Test4783068$1 = ::Test4783068$1;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $Border = ::javax::swing::border::Border;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$Color* Test4783068::TEST_COLOR = nullptr;
$String* Test4783068::html = nullptr;

void Test4783068::init$() {
}

void Test4783068::test() {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($Error, "Cannot set Metal LAF"_s);
	}
	$UIManager::put("textInactiveText"_s, Test4783068::TEST_COLOR);
	test($$new($JLabel, Test4783068::html));
	test($$new($JButton, Test4783068::html));
	$var($JEditorPane, pane, $new($JEditorPane, "text/html"_s, Test4783068::html));
	pane->setDisabledTextColor(Test4783068::TEST_COLOR);
	test(pane);
}

void Test4783068::test($JComponent* c) {
	$useLocalObjectStack();
	$nc(c)->setEnabled(false);
	c->setOpaque(true);
	c->setBackground(Test4783068::TEST_COLOR);
	c->setBorder(nullptr);
	$var($Dimension, size, c->getPreferredSize());
	c->setBounds(0, 0, $nc(size)->width, $nc(size)->height);
	$var($BufferedImage, image, $new($BufferedImage, size->width, size->height, $BufferedImage::TYPE_INT_ARGB));
	c->paint($(image->getGraphics()));
	int32_t rgb = $nc(Test4783068::TEST_COLOR)->getRGB();
	for (int32_t i = 0; i < size->height; ++i) {
		for (int32_t j = 0; j < size->width; ++j) {
			if (image->getRGB(j, i) != rgb) {
				$throwNew($RuntimeException, $($String::format("Color mismatch at [%d, %d]"_s, $$new($ObjectArray, {
					$($Integer::valueOf(j)),
					$($Integer::valueOf(i))
				}))));
			}
		}
	}
}

void Test4783068::main($StringArray* args) {
	$init(Test4783068);
	$SwingUtilities::invokeAndWait($$new($Test4783068$1));
}

void Test4783068::clinit$($Class* clazz) {
	$assignStatic(Test4783068::html, "<html>This is a <font color=\'red\'>colored</font> <b>text</b><p>with a <a href=\'http://ru.sun.com\'>link</a><ul><li>an unordered<li>list</ul><ol><li>and an ordered<li>list</ol></html>"_s);
	$init($Color);
	$assignStatic(Test4783068::TEST_COLOR, $Color::WHITE);
}

Test4783068::Test4783068() {
}

$Class* Test4783068::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $STATIC | $FINAL, $staticField(Test4783068, TEST_COLOR)},
		{"html", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Test4783068, html)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4783068, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test4783068, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, 0, $virtualMethod(Test4783068, test, void)},
		{"test", "(Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(Test4783068, test, void, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test4783068$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4783068",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test4783068$1"
	};
	$loadClass(Test4783068, name, initialize, &classInfo$$, Test4783068::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Test4783068);
	});
	return class$;
}

$Class* Test4783068::class$ = nullptr;