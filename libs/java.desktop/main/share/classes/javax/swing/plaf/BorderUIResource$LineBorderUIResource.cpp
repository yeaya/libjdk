#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>
#include <java/awt/Color.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $LineBorder = ::javax::swing::border::LineBorder;

namespace javax {
	namespace swing {
		namespace plaf {

int32_t BorderUIResource$LineBorderUIResource::hashCode() {
	 return this->$LineBorder::hashCode();
}

bool BorderUIResource$LineBorderUIResource::equals(Object$* arg0) {
	 return this->$LineBorder::equals(arg0);
}

$Object* BorderUIResource$LineBorderUIResource::clone() {
	 return this->$LineBorder::clone();
}

$String* BorderUIResource$LineBorderUIResource::toString() {
	 return this->$LineBorder::toString();
}

void BorderUIResource$LineBorderUIResource::finalize() {
	this->$LineBorder::finalize();
}

void BorderUIResource$LineBorderUIResource::init$($Color* color) {
	$LineBorder::init$(color);
}

void BorderUIResource$LineBorderUIResource::init$($Color* color, int32_t thickness) {
	$LineBorder::init$(color, thickness);
}

BorderUIResource$LineBorderUIResource::BorderUIResource$LineBorderUIResource() {
}

$Class* BorderUIResource$LineBorderUIResource::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'s', "lineColor"},
		{'s', "thickness"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$1$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$1$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(BorderUIResource$LineBorderUIResource, init$, void, $Color*)},
		{"<init>", "(Ljava/awt/Color;I)V", nullptr, $PUBLIC, $method(BorderUIResource$LineBorderUIResource, init$, void, $Color*, int32_t), nullptr, nullptr, init$methodAnnotations$$$1},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.BorderUIResource$LineBorderUIResource", "javax.swing.plaf.BorderUIResource", "LineBorderUIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.BorderUIResource$LineBorderUIResource",
		"javax.swing.border.LineBorder",
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
	$loadClass(BorderUIResource$LineBorderUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BorderUIResource$LineBorderUIResource));
	});
	return class$;
}

$Class* BorderUIResource$LineBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax