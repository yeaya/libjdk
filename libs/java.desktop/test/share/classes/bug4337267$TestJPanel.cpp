#include <bug4337267$TestJPanel.h>
#include <bug4337267$TestBufferedImage.h>
#include <bug4337267.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $bug4337267$TestBufferedImage = ::bug4337267$TestBufferedImage;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;

void bug4337267$TestJPanel::init$() {
	$JPanel::init$();
	$set(this, image, createImage($$new($Dimension, 1, 1)));
}

$bug4337267$TestBufferedImage* bug4337267$TestJPanel::createImage($Dimension* d) {
	return $new($bug4337267$TestBufferedImage, $nc(d)->width, $nc(d)->height, $BufferedImage::TYPE_INT_ARGB);
}

void bug4337267$TestJPanel::setPreferredSize($Dimension* size) {
	$JPanel::setPreferredSize(size);
	$set(this, image, createImage(size));
}

void bug4337267$TestJPanel::paint($Graphics* g) {
	$var($Graphics, g0, $nc(this->image)->getGraphics());
	$JPanel::paint(g0);
	$nc(g)->drawImage(this->image, 0, 0, this);
}

bug4337267$TestJPanel::bug4337267$TestJPanel() {
}

$Class* bug4337267$TestJPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"image", "Lbug4337267$TestBufferedImage;", nullptr, 0, $field(bug4337267$TestJPanel, image)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4337267$TestJPanel, init$, void)},
		{"createImage", "(Ljava/awt/Dimension;)Lbug4337267$TestBufferedImage;", nullptr, 0, $virtualMethod(bug4337267$TestJPanel, createImage, $bug4337267$TestBufferedImage*, $Dimension*)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(bug4337267$TestJPanel, paint, void, $Graphics*)},
		{"setPreferredSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $virtualMethod(bug4337267$TestJPanel, setPreferredSize, void, $Dimension*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4337267$TestJPanel", "bug4337267", "TestJPanel", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4337267$TestJPanel",
		"javax.swing.JPanel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4337267"
	};
	$loadClass(bug4337267$TestJPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4337267$TestJPanel));
	});
	return class$;
}

$Class* bug4337267$TestJPanel::class$ = nullptr;