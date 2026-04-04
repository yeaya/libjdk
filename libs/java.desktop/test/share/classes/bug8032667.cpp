#include <bug8032667.h>
#include <bug8032667$1.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $bug8032667$1 = ::bug8032667$1;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug8032667::init$() {
	$JApplet::init$();
}

void bug8032667::init() {
	$SwingUtilities::invokeLater($$new($bug8032667$1, this));
}

$JCheckBox* bug8032667::getCheckBox($String* text, bool selected) {
	$init(bug8032667);
	$useLocalObjectStack();
	$var($JCheckBox, checkBox, $new($JCheckBox, text));
	checkBox->setSelected(selected);
	checkBox->setSize($$new($Dimension, bug8032667::width, bug8032667::height));
	return checkBox;
}

$Image* bug8032667::getImage($JComponent* component) {
	$init(bug8032667);
	$useLocalObjectStack();
	$var($BufferedImage, image, $new($BufferedImage, bug8032667::scaledWidth, bug8032667::scaledHeight, $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics, g, image->getGraphics());
	$nc($cast($Graphics2D, g))->scale((double)bug8032667::scale, (double)bug8032667::scale);
	$nc(component)->paint(g);
	g->dispose();
	return image;
}

bug8032667::bug8032667() {
}

$Class* bug8032667::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"scale", "I", nullptr, $STATIC | $FINAL, $constField(bug8032667, scale)},
		{"width", "I", nullptr, $STATIC | $FINAL, $constField(bug8032667, width)},
		{"height", "I", nullptr, $STATIC | $FINAL, $constField(bug8032667, height)},
		{"scaledWidth", "I", nullptr, $STATIC | $FINAL, $constField(bug8032667, scaledWidth)},
		{"scaledHeight", "I", nullptr, $STATIC | $FINAL, $constField(bug8032667, scaledHeight)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8032667, init$, void)},
		{"getCheckBox", "(Ljava/lang/String;Z)Ljavax/swing/JCheckBox;", nullptr, $STATIC, $staticMethod(bug8032667, getCheckBox, $JCheckBox*, $String*, bool)},
		{"getImage", "(Ljavax/swing/JComponent;)Ljava/awt/Image;", nullptr, $STATIC, $staticMethod(bug8032667, getImage, $Image*, $JComponent*)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug8032667, init, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8032667$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8032667",
		"javax.swing.JApplet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8032667$1,bug8032667$1$1"
	};
	$loadClass(bug8032667, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8032667));
	});
	return class$;
}

$Class* bug8032667::class$ = nullptr;