#include <com/apple/laf/AquaTextPasswordFieldUI$CapsLockSymbolPainter.h>
#include <com/apple/laf/AquaTextPasswordFieldUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/RoundRectangle2D$Double.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef KEY_ANTIALIASING
#undef VALUE_ANTIALIAS_ON
#undef VK_CAPS_LOCK
#undef WIND_EVEN_ODD

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $RenderingHints = ::java::awt::RenderingHints;
using $Shape = ::java::awt::Shape;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Path2D = ::java::awt::geom::Path2D;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Double = ::java::awt::geom::RoundRectangle2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace apple {
		namespace laf {

int32_t AquaTextPasswordFieldUI$CapsLockSymbolPainter::hashCode() {
	 return this->$KeyAdapter::hashCode();
}

bool AquaTextPasswordFieldUI$CapsLockSymbolPainter::equals(Object$* arg0) {
	 return this->$KeyAdapter::equals(arg0);
}

$Object* AquaTextPasswordFieldUI$CapsLockSymbolPainter::clone() {
	 return this->$KeyAdapter::clone();
}

$String* AquaTextPasswordFieldUI$CapsLockSymbolPainter::toString() {
	 return this->$KeyAdapter::toString();
}

void AquaTextPasswordFieldUI$CapsLockSymbolPainter::finalize() {
	this->$KeyAdapter::finalize();
}

void AquaTextPasswordFieldUI$CapsLockSymbolPainter::init$() {
	$KeyAdapter::init$();
}

$Shape* AquaTextPasswordFieldUI$CapsLockSymbolPainter::getCapsLockShape() {
	$useLocalObjectStack();
	if (this->capsLockShape != nullptr) {
		return this->capsLockShape;
	}
	$var($RoundRectangle2D, rect, $new($RoundRectangle2D$Double, 0.5, 0.5, 16, 16, 8, 8));
	$var($GeneralPath, shape, $new($GeneralPath, rect));
	shape->setWindingRule($Path2D::WIND_EVEN_ODD);
	shape->moveTo(8.5, 2.0);
	shape->lineTo(4.0, 7.0);
	shape->lineTo(6.25, 7.0);
	shape->lineTo(6.25, 10.25);
	shape->lineTo(10.75, 10.25);
	shape->lineTo(10.75, 7.0);
	shape->lineTo(13.0, 7.0);
	shape->lineTo(8.5, 2.0);
	shape->moveTo(10.75, 12.0);
	shape->lineTo(6.25, 12.0);
	shape->lineTo(6.25, 14.25);
	shape->lineTo(10.75, 14.25);
	shape->lineTo(10.75, 12.0);
	return $set(this, capsLockShape, shape);
}

$Insets* AquaTextPasswordFieldUI$CapsLockSymbolPainter::getBorderInsets($Component* c) {
	return $new($Insets, 0, 0, 0, 0);
}

bool AquaTextPasswordFieldUI$CapsLockSymbolPainter::isBorderOpaque() {
	return false;
}

void AquaTextPasswordFieldUI$CapsLockSymbolPainter::paintBorder($Component* c, $Graphics* g$renamed, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	$var($Graphics, g, g$renamed);
	$assign(g, $nc(g)->create(width - 23, height / 2 - 8, 18, 18));
	$nc(g)->setColor($($UIManager::getColor("PasswordField.capsLockIconColor"_s)));
	$init($RenderingHints);
	$cast($Graphics2D, g)->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
	$cast($Graphics2D, g)->fill($(getCapsLockShape()));
	g->dispose();
}

void AquaTextPasswordFieldUI$CapsLockSymbolPainter::keyPressed($KeyEvent* e) {
	update(e);
}

void AquaTextPasswordFieldUI$CapsLockSymbolPainter::keyReleased($KeyEvent* e) {
	update(e);
}

void AquaTextPasswordFieldUI$CapsLockSymbolPainter::update($KeyEvent* e) {
	if ($KeyEvent::VK_CAPS_LOCK != $nc(e)->getKeyCode()) {
		return;
	}
	$$nc(e->getComponent())->repaint();
}

AquaTextPasswordFieldUI$CapsLockSymbolPainter::AquaTextPasswordFieldUI$CapsLockSymbolPainter() {
}

$Class* AquaTextPasswordFieldUI$CapsLockSymbolPainter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"capsLockShape", "Ljava/awt/Shape;", nullptr, $PROTECTED, $field(AquaTextPasswordFieldUI$CapsLockSymbolPainter, capsLockShape)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(AquaTextPasswordFieldUI$CapsLockSymbolPainter, init$, void)},
		{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(AquaTextPasswordFieldUI$CapsLockSymbolPainter, getBorderInsets, $Insets*, $Component*)},
		{"getCapsLockShape", "()Ljava/awt/Shape;", nullptr, $PROTECTED, $virtualMethod(AquaTextPasswordFieldUI$CapsLockSymbolPainter, getCapsLockShape, $Shape*)},
		{"isBorderOpaque", "()Z", nullptr, $PUBLIC, $virtualMethod(AquaTextPasswordFieldUI$CapsLockSymbolPainter, isBorderOpaque, bool)},
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextPasswordFieldUI$CapsLockSymbolPainter, keyPressed, void, $KeyEvent*)},
		{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextPasswordFieldUI$CapsLockSymbolPainter, keyReleased, void, $KeyEvent*)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(AquaTextPasswordFieldUI$CapsLockSymbolPainter, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"update", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0, $virtualMethod(AquaTextPasswordFieldUI$CapsLockSymbolPainter, update, void, $KeyEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextPasswordFieldUI$CapsLockSymbolPainter", "com.apple.laf.AquaTextPasswordFieldUI", "CapsLockSymbolPainter", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextPasswordFieldUI$CapsLockSymbolPainter",
		"java.awt.event.KeyAdapter",
		"javax.swing.border.Border,javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTextPasswordFieldUI"
	};
	$loadClass(AquaTextPasswordFieldUI$CapsLockSymbolPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTextPasswordFieldUI$CapsLockSymbolPainter));
	});
	return class$;
}

$Class* AquaTextPasswordFieldUI$CapsLockSymbolPainter::class$ = nullptr;

		} // laf
	} // apple
} // com