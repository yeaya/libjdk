#include <javax/swing/plaf/ColorUIResource.h>
#include <java/awt/Color.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace javax {
	namespace swing {
		namespace plaf {

int32_t ColorUIResource::hashCode() {
	return this->$Color::hashCode();
}

bool ColorUIResource::equals(Object$* obj) {
	return this->$Color::equals(obj);
}

$String* ColorUIResource::toString() {
	return this->$Color::toString();
}

$Object* ColorUIResource::clone() {
	return this->$Color::clone();
}

void ColorUIResource::finalize() {
	this->$Color::finalize();
}

void ColorUIResource::init$(int32_t r, int32_t g, int32_t b) {
	$Color::init$(r, g, b);
}

void ColorUIResource::init$(int32_t rgb) {
	$Color::init$(rgb);
}

void ColorUIResource::init$(float r, float g, float b) {
	$Color::init$(r, g, b);
}

void ColorUIResource::init$($Color* c) {
	int32_t var$0 = $nc(c)->getRGB();
	$Color::init$(var$0, (c->getRGB() & (int32_t)0xff000000) != (int32_t)0xff000000);
}

ColorUIResource::ColorUIResource() {
}

$Class* ColorUIResource::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'s', "red"},
		{'s', "green"},
		{'s', "blue"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(III)V", nullptr, $PUBLIC, $method(ColorUIResource, init$, void, int32_t, int32_t, int32_t), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(ColorUIResource, init$, void, int32_t)},
		{"<init>", "(FFF)V", nullptr, $PUBLIC, $method(ColorUIResource, init$, void, float, float, float)},
		{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(ColorUIResource, init$, void, $Color*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.ColorUIResource",
		"java.awt.Color",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$
	};
	$loadClass(ColorUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ColorUIResource));
	});
	return class$;
}

$Class* ColorUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax