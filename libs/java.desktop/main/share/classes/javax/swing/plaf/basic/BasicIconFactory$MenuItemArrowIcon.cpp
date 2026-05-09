#include <javax/swing/plaf/basic/BasicIconFactory$MenuItemArrowIcon.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/basic/BasicIconFactory.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicIconFactory$MenuItemArrowIcon::hashCode() {
	return this->$Icon::hashCode();
}

bool BasicIconFactory$MenuItemArrowIcon::equals(Object$* arg0) {
	return this->$Icon::equals(arg0);
}

$Object* BasicIconFactory$MenuItemArrowIcon::clone() {
	return this->$Icon::clone();
}

$String* BasicIconFactory$MenuItemArrowIcon::toString() {
	return this->$Icon::toString();
}

void BasicIconFactory$MenuItemArrowIcon::finalize() {
	this->$Icon::finalize();
}

void BasicIconFactory$MenuItemArrowIcon::init$() {
}

void BasicIconFactory$MenuItemArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t BasicIconFactory$MenuItemArrowIcon::getIconWidth() {
	return 4;
}

int32_t BasicIconFactory$MenuItemArrowIcon::getIconHeight() {
	return 8;
}

BasicIconFactory$MenuItemArrowIcon::BasicIconFactory$MenuItemArrowIcon() {
}

$Class* BasicIconFactory$MenuItemArrowIcon::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PRIVATE, $method(BasicIconFactory$MenuItemArrowIcon, init$, void)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(BasicIconFactory$MenuItemArrowIcon, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(BasicIconFactory$MenuItemArrowIcon, getIconWidth, int32_t)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(BasicIconFactory$MenuItemArrowIcon, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicIconFactory$MenuItemArrowIcon", "javax.swing.plaf.basic.BasicIconFactory", "MenuItemArrowIcon", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicIconFactory$MenuItemArrowIcon",
		"java.lang.Object",
		"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicIconFactory"
	};
	$loadClass(BasicIconFactory$MenuItemArrowIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicIconFactory$MenuItemArrowIcon));
	});
	return class$;
}

$Class* BasicIconFactory$MenuItemArrowIcon::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax