#include <javax/swing/plaf/BorderUIResource$TitledBorderUIResource.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;

namespace javax {
	namespace swing {
		namespace plaf {

int32_t BorderUIResource$TitledBorderUIResource::hashCode() {
	return this->$TitledBorder::hashCode();
}

bool BorderUIResource$TitledBorderUIResource::equals(Object$* arg0) {
	return this->$TitledBorder::equals(arg0);
}

$Object* BorderUIResource$TitledBorderUIResource::clone() {
	return this->$TitledBorder::clone();
}

$String* BorderUIResource$TitledBorderUIResource::toString() {
	return this->$TitledBorder::toString();
}

void BorderUIResource$TitledBorderUIResource::finalize() {
	this->$TitledBorder::finalize();
}

void BorderUIResource$TitledBorderUIResource::init$($String* title) {
	$TitledBorder::init$(title);
}

void BorderUIResource$TitledBorderUIResource::init$($Border* border) {
	$TitledBorder::init$(border);
}

void BorderUIResource$TitledBorderUIResource::init$($Border* border, $String* title) {
	$TitledBorder::init$(border, title);
}

void BorderUIResource$TitledBorderUIResource::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition) {
	$TitledBorder::init$(border, title, titleJustification, titlePosition);
}

void BorderUIResource$TitledBorderUIResource::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, $Font* titleFont) {
	$TitledBorder::init$(border, title, titleJustification, titlePosition, titleFont);
}

void BorderUIResource$TitledBorderUIResource::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, $Font* titleFont, $Color* titleColor) {
	$TitledBorder::init$(border, title, titleJustification, titlePosition, titleFont, titleColor);
}

BorderUIResource$TitledBorderUIResource::BorderUIResource$TitledBorderUIResource() {
}

$Class* BorderUIResource$TitledBorderUIResource::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'s', "border"},
		{'s', "title"},
		{'s', "titleJustification"},
		{'s', "titlePosition"},
		{'s', "titleFont"},
		{'s', "titleColor"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$5$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$5[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$5$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BorderUIResource$TitledBorderUIResource, init$, void, $String*)},
		{"<init>", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(BorderUIResource$TitledBorderUIResource, init$, void, $Border*)},
		{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BorderUIResource$TitledBorderUIResource, init$, void, $Border*, $String*)},
		{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(BorderUIResource$TitledBorderUIResource, init$, void, $Border*, $String*, int32_t, int32_t)},
		{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;IILjava/awt/Font;)V", nullptr, $PUBLIC, $method(BorderUIResource$TitledBorderUIResource, init$, void, $Border*, $String*, int32_t, int32_t, $Font*)},
		{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;IILjava/awt/Font;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(BorderUIResource$TitledBorderUIResource, init$, void, $Border*, $String*, int32_t, int32_t, $Font*, $Color*), nullptr, nullptr, init$methodAnnotations$$$5},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.BorderUIResource$TitledBorderUIResource", "javax.swing.plaf.BorderUIResource", "TitledBorderUIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.BorderUIResource$TitledBorderUIResource",
		"javax.swing.border.TitledBorder",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.BorderUIResource"
	};
	$loadClass(BorderUIResource$TitledBorderUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BorderUIResource$TitledBorderUIResource));
	});
	return class$;
}

$Class* BorderUIResource$TitledBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax