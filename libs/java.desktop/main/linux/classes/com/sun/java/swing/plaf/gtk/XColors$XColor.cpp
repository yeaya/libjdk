#include <com/sun/java/swing/plaf/gtk/XColors$XColor.h>
#include <com/sun/java/swing/plaf/gtk/XColors.h>
#include <java/awt/Color.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void XColors$XColor::init$($String* name, int32_t red, int32_t green, int32_t blue) {
	$set(this, name, name);
	this->red = red;
	this->green = green;
	this->blue = blue;
}

$Color* XColors$XColor::toColor() {
	return $new($ColorUIResource, this->red, this->green, this->blue);
}

int32_t XColors$XColor::compareTo(XColors$XColor* o) {
	return $nc(this->name)->compareTo($nc(o)->name);
}

int32_t XColors$XColor::compareTo(Object$* o) {
	return this->compareTo($cast(XColors$XColor, o));
}

XColors$XColor::XColors$XColor() {
}

$Class* XColors$XColor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, 0, $field(XColors$XColor, name)},
		{"red", "I", nullptr, 0, $field(XColors$XColor, red)},
		{"green", "I", nullptr, 0, $field(XColors$XColor, green)},
		{"blue", "I", nullptr, 0, $field(XColors$XColor, blue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;III)V", nullptr, 0, $method(XColors$XColor, init$, void, $String*, int32_t, int32_t, int32_t)},
		{"compareTo", "(Lcom/sun/java/swing/plaf/gtk/XColors$XColor;)I", nullptr, $PUBLIC, $virtualMethod(XColors$XColor, compareTo, int32_t, XColors$XColor*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XColors$XColor, compareTo, int32_t, Object$*)},
		{"toColor", "()Ljava/awt/Color;", nullptr, 0, $virtualMethod(XColors$XColor, toColor, $Color*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.XColors$XColor", "com.sun.java.swing.plaf.gtk.XColors", "XColor", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.XColors$XColor",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/java/swing/plaf/gtk/XColors$XColor;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.XColors"
	};
	$loadClass(XColors$XColor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XColors$XColor);
	});
	return class$;
}

$Class* XColors$XColor::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com