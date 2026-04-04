#include <javax/swing/plaf/basic/BasicIconFactory$EmptyFrameIcon.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/basic/BasicIconFactory.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicIconFactory$EmptyFrameIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool BasicIconFactory$EmptyFrameIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* BasicIconFactory$EmptyFrameIcon::clone() {
	 return this->$Icon::clone();
}

$String* BasicIconFactory$EmptyFrameIcon::toString() {
	 return this->$Icon::toString();
}

void BasicIconFactory$EmptyFrameIcon::finalize() {
	this->$Icon::finalize();
}

void BasicIconFactory$EmptyFrameIcon::init$() {
	this->height = 16;
	this->width = 14;
}

void BasicIconFactory$EmptyFrameIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t BasicIconFactory$EmptyFrameIcon::getIconWidth() {
	return this->width;
}

int32_t BasicIconFactory$EmptyFrameIcon::getIconHeight() {
	return this->height;
}

BasicIconFactory$EmptyFrameIcon::BasicIconFactory$EmptyFrameIcon() {
}

$Class* BasicIconFactory$EmptyFrameIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"height", "I", nullptr, 0, $field(BasicIconFactory$EmptyFrameIcon, height)},
		{"width", "I", nullptr, 0, $field(BasicIconFactory$EmptyFrameIcon, width)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PRIVATE, $method(BasicIconFactory$EmptyFrameIcon, init$, void)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(BasicIconFactory$EmptyFrameIcon, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(BasicIconFactory$EmptyFrameIcon, getIconWidth, int32_t)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(BasicIconFactory$EmptyFrameIcon, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicIconFactory$EmptyFrameIcon", "javax.swing.plaf.basic.BasicIconFactory", "EmptyFrameIcon", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicIconFactory$EmptyFrameIcon",
		"java.lang.Object",
		"javax.swing.Icon,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicIconFactory"
	};
	$loadClass(BasicIconFactory$EmptyFrameIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicIconFactory$EmptyFrameIcon));
	});
	return class$;
}

$Class* BasicIconFactory$EmptyFrameIcon::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax