#include <javax/swing/plaf/BorderUIResource$BevelBorderUIResource.h>
#include <java/awt/Color.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $BevelBorder = ::javax::swing::border::BevelBorder;

namespace javax {
	namespace swing {
		namespace plaf {

int32_t BorderUIResource$BevelBorderUIResource::hashCode() {
	return this->$BevelBorder::hashCode();
}

bool BorderUIResource$BevelBorderUIResource::equals(Object$* arg0) {
	return this->$BevelBorder::equals(arg0);
}

$Object* BorderUIResource$BevelBorderUIResource::clone() {
	return this->$BevelBorder::clone();
}

$String* BorderUIResource$BevelBorderUIResource::toString() {
	return this->$BevelBorder::toString();
}

void BorderUIResource$BevelBorderUIResource::finalize() {
	this->$BevelBorder::finalize();
}

void BorderUIResource$BevelBorderUIResource::init$(int32_t bevelType) {
	$BevelBorder::init$(bevelType);
}

void BorderUIResource$BevelBorderUIResource::init$(int32_t bevelType, $Color* highlight, $Color* shadow) {
	$BevelBorder::init$(bevelType, highlight, shadow);
}

void BorderUIResource$BevelBorderUIResource::init$(int32_t bevelType, $Color* highlightOuter, $Color* highlightInner, $Color* shadowOuter, $Color* shadowInner) {
	$BevelBorder::init$(bevelType, highlightOuter, highlightInner, shadowOuter, shadowInner);
}

BorderUIResource$BevelBorderUIResource::BorderUIResource$BevelBorderUIResource() {
}

$Class* BorderUIResource$BevelBorderUIResource::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'s', "bevelType"},
		{'s', "highlightOuterColor"},
		{'s', "highlightInnerColor"},
		{'s', "shadowOuterColor"},
		{'s', "shadowInnerColor"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$2$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$2[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$2$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(BorderUIResource$BevelBorderUIResource, init$, void, int32_t)},
		{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(BorderUIResource$BevelBorderUIResource, init$, void, int32_t, $Color*, $Color*)},
		{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(BorderUIResource$BevelBorderUIResource, init$, void, int32_t, $Color*, $Color*, $Color*, $Color*), nullptr, nullptr, init$methodAnnotations$$$2},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.BorderUIResource$BevelBorderUIResource", "javax.swing.plaf.BorderUIResource", "BevelBorderUIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.BorderUIResource$BevelBorderUIResource",
		"javax.swing.border.BevelBorder",
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
	$loadClass(BorderUIResource$BevelBorderUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BorderUIResource$BevelBorderUIResource));
	});
	return class$;
}

$Class* BorderUIResource$BevelBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax