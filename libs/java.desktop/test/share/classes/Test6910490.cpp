#include <Test6910490.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/MatteBorder.h>
#include <jcpp.h>

#undef HORIZONTAL_SPLIT
#undef RED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JButton = ::javax::swing::JButton;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSplitPane = ::javax::swing::JSplitPane;
using $MatteBorder = ::javax::swing::border::MatteBorder;

$String* Test6910490::toString() {
	return this->$JApplet::toString();
}

int32_t Test6910490::hashCode() {
	return this->$JApplet::hashCode();
}

bool Test6910490::equals(Object$* arg0) {
	return this->$JApplet::equals(arg0);
}

$Object* Test6910490::clone() {
	return this->$JApplet::clone();
}

void Test6910490::finalize() {
	this->$JApplet::finalize();
}

void Test6910490::init$() {
	$JApplet::init$();
}

void Test6910490::init() {
	$useLocalObjectStack();
	$var($Insets, insets, $new($Insets, 10, 10, 10, 10));
	int32_t var$0 = getWidth() / 2;
	$var($Dimension, size, $new($Dimension, var$0, getHeight()));
	$init($Color);
	$var($Component, var$1, create("Color"_s, size, $$new($MatteBorder, insets, $Color::RED)));
	$var($JSplitPane, pane, $new($JSplitPane, $JSplitPane::HORIZONTAL_SPLIT, var$1, $(create("Icon"_s, size, $$new($MatteBorder, insets, this)))));
	pane->setDividerLocation(size->width - pane->getDividerSize() / 2);
	add(pane);
}

$JScrollPane* Test6910490::create($String* name, $Dimension* size, $MatteBorder* border) {
	$var($JButton, button, $new($JButton, name));
	button->setPreferredSize(size);
	button->setBorder(border);
	return $new($JScrollPane, button);
}

int32_t Test6910490::getIconWidth() {
	return 10;
}

int32_t Test6910490::getIconHeight() {
	return 10;
}

void Test6910490::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$init($Color);
	$nc(g)->setColor($Color::RED);
	int32_t var$0 = getIconWidth();
	g->fillRect(x, y, var$0, getIconHeight());
}

Test6910490::Test6910490() {
}

$Class* Test6910490::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6910490, init$, void)},
		{"create", "(Ljava/lang/String;Ljava/awt/Dimension;Ljavax/swing/border/MatteBorder;)Ljavax/swing/JScrollPane;", nullptr, $PRIVATE, $method(Test6910490, create, $JScrollPane*, $String*, $Dimension*, $MatteBorder*)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(Test6910490, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(Test6910490, getIconWidth, int32_t)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(Test6910490, init, void)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(Test6910490, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6910490",
		"javax.swing.JApplet",
		"javax.swing.Icon",
		nullptr,
		methodInfos$$
	};
	$loadClass(Test6910490, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6910490));
	});
	return class$;
}

$Class* Test6910490::class$ = nullptr;