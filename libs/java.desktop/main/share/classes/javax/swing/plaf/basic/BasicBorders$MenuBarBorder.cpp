#include <javax/swing/plaf/basic/BasicBorders$MenuBarBorder.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicBorders$MenuBarBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool BasicBorders$MenuBarBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* BasicBorders$MenuBarBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* BasicBorders$MenuBarBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void BasicBorders$MenuBarBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void BasicBorders$MenuBarBorder::init$($Color* shadow, $Color* highlight) {
	$AbstractBorder::init$();
	$set(this, shadow, shadow);
	$set(this, highlight, highlight);
}

void BasicBorders$MenuBarBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Color, oldColor, $nc(g)->getColor());
	g->translate(x, y);
	g->setColor(this->shadow);
	$SwingUtilities2::drawHLine(g, 0, width - 1, height - 2);
	g->setColor(this->highlight);
	$SwingUtilities2::drawHLine(g, 0, width - 1, height - 1);
	g->translate(-x, -y);
	g->setColor(oldColor);
}

$Insets* BasicBorders$MenuBarBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(0, 0, 2, 0);
	return insets;
}

BasicBorders$MenuBarBorder::BasicBorders$MenuBarBorder() {
}

$Class* BasicBorders$MenuBarBorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"shadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicBorders$MenuBarBorder, shadow)},
		{"highlight", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicBorders$MenuBarBorder, highlight)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(BasicBorders$MenuBarBorder, init$, void, $Color*, $Color*)},
		{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(BasicBorders$MenuBarBorder, getBorderInsets, $Insets*, $Component*, $Insets*)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(BasicBorders$MenuBarBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicBorders$MenuBarBorder", "javax.swing.plaf.basic.BasicBorders", "MenuBarBorder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicBorders$MenuBarBorder",
		"javax.swing.border.AbstractBorder",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicBorders"
	};
	$loadClass(BasicBorders$MenuBarBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicBorders$MenuBarBorder));
	});
	return class$;
}

$Class* BasicBorders$MenuBarBorder::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax