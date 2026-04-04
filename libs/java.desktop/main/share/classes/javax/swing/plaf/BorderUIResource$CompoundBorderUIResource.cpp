#include <javax/swing/plaf/BorderUIResource$CompoundBorderUIResource.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;

namespace javax {
	namespace swing {
		namespace plaf {

int32_t BorderUIResource$CompoundBorderUIResource::hashCode() {
	 return this->$CompoundBorder::hashCode();
}

bool BorderUIResource$CompoundBorderUIResource::equals(Object$* arg0) {
	 return this->$CompoundBorder::equals(arg0);
}

$Object* BorderUIResource$CompoundBorderUIResource::clone() {
	 return this->$CompoundBorder::clone();
}

$String* BorderUIResource$CompoundBorderUIResource::toString() {
	 return this->$CompoundBorder::toString();
}

void BorderUIResource$CompoundBorderUIResource::finalize() {
	this->$CompoundBorder::finalize();
}

void BorderUIResource$CompoundBorderUIResource::init$($Border* outsideBorder, $Border* insideBorder) {
	$CompoundBorder::init$(outsideBorder, insideBorder);
}

BorderUIResource$CompoundBorderUIResource::BorderUIResource$CompoundBorderUIResource() {
}

$Class* BorderUIResource$CompoundBorderUIResource::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'s', "outsideBorder"},
		{'s', "insideBorder"},
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
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/border/Border;Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(BorderUIResource$CompoundBorderUIResource, init$, void, $Border*, $Border*), nullptr, nullptr, init$methodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.BorderUIResource$CompoundBorderUIResource", "javax.swing.plaf.BorderUIResource", "CompoundBorderUIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.BorderUIResource$CompoundBorderUIResource",
		"javax.swing.border.CompoundBorder",
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
	$loadClass(BorderUIResource$CompoundBorderUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BorderUIResource$CompoundBorderUIResource));
	});
	return class$;
}

$Class* BorderUIResource$CompoundBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax