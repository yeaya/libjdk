#include <javax/swing/plaf/BorderUIResource$EtchedBorderUIResource.h>
#include <java/awt/Color.h>
#include <javax/swing/border/EtchedBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EtchedBorder = ::javax::swing::border::EtchedBorder;

namespace javax {
	namespace swing {
		namespace plaf {

int32_t BorderUIResource$EtchedBorderUIResource::hashCode() {
	return this->$EtchedBorder::hashCode();
}

bool BorderUIResource$EtchedBorderUIResource::equals(Object$* arg0) {
	return this->$EtchedBorder::equals(arg0);
}

$Object* BorderUIResource$EtchedBorderUIResource::clone() {
	return this->$EtchedBorder::clone();
}

$String* BorderUIResource$EtchedBorderUIResource::toString() {
	return this->$EtchedBorder::toString();
}

void BorderUIResource$EtchedBorderUIResource::finalize() {
	this->$EtchedBorder::finalize();
}

void BorderUIResource$EtchedBorderUIResource::init$() {
	$EtchedBorder::init$();
}

void BorderUIResource$EtchedBorderUIResource::init$(int32_t etchType) {
	$EtchedBorder::init$(etchType);
}

void BorderUIResource$EtchedBorderUIResource::init$($Color* highlight, $Color* shadow) {
	$EtchedBorder::init$(highlight, shadow);
}

void BorderUIResource$EtchedBorderUIResource::init$(int32_t etchType, $Color* highlight, $Color* shadow) {
	$EtchedBorder::init$(etchType, highlight, shadow);
}

BorderUIResource$EtchedBorderUIResource::BorderUIResource$EtchedBorderUIResource() {
}

$Class* BorderUIResource$EtchedBorderUIResource::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'s', "etchType"},
		{'s', "highlightColor"},
		{'s', "shadowColor"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$3$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$3[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$3$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(BorderUIResource$EtchedBorderUIResource, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(BorderUIResource$EtchedBorderUIResource, init$, void, int32_t)},
		{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(BorderUIResource$EtchedBorderUIResource, init$, void, $Color*, $Color*)},
		{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(BorderUIResource$EtchedBorderUIResource, init$, void, int32_t, $Color*, $Color*), nullptr, nullptr, init$methodAnnotations$$$3},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.BorderUIResource$EtchedBorderUIResource", "javax.swing.plaf.BorderUIResource", "EtchedBorderUIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.BorderUIResource$EtchedBorderUIResource",
		"javax.swing.border.EtchedBorder",
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
	$loadClass(BorderUIResource$EtchedBorderUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BorderUIResource$EtchedBorderUIResource));
	});
	return class$;
}

$Class* BorderUIResource$EtchedBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax