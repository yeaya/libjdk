#include <javax/swing/plaf/BorderUIResource$MatteBorderUIResource.h>
#include <java/awt/Color.h>
#include <javax/swing/Icon.h>
#include <javax/swing/border/MatteBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $MatteBorder = ::javax::swing::border::MatteBorder;

namespace javax {
	namespace swing {
		namespace plaf {

int32_t BorderUIResource$MatteBorderUIResource::hashCode() {
	return this->$MatteBorder::hashCode();
}

bool BorderUIResource$MatteBorderUIResource::equals(Object$* arg0) {
	return this->$MatteBorder::equals(arg0);
}

$Object* BorderUIResource$MatteBorderUIResource::clone() {
	return this->$MatteBorder::clone();
}

$String* BorderUIResource$MatteBorderUIResource::toString() {
	return this->$MatteBorder::toString();
}

void BorderUIResource$MatteBorderUIResource::finalize() {
	this->$MatteBorder::finalize();
}

void BorderUIResource$MatteBorderUIResource::init$(int32_t top, int32_t left, int32_t bottom, int32_t right, $Color* color) {
	$MatteBorder::init$(top, left, bottom, right, color);
}

void BorderUIResource$MatteBorderUIResource::init$(int32_t top, int32_t left, int32_t bottom, int32_t right, $Icon* tileIcon) {
	$MatteBorder::init$(top, left, bottom, right, tileIcon);
}

void BorderUIResource$MatteBorderUIResource::init$($Icon* tileIcon) {
	$MatteBorder::init$(tileIcon);
}

BorderUIResource$MatteBorderUIResource::BorderUIResource$MatteBorderUIResource() {
}

$Class* BorderUIResource$MatteBorderUIResource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(IIIILjava/awt/Color;)V", nullptr, $PUBLIC, $method(BorderUIResource$MatteBorderUIResource, init$, void, int32_t, int32_t, int32_t, int32_t, $Color*)},
		{"<init>", "(IIIILjavax/swing/Icon;)V", nullptr, $PUBLIC, $method(BorderUIResource$MatteBorderUIResource, init$, void, int32_t, int32_t, int32_t, int32_t, $Icon*)},
		{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(BorderUIResource$MatteBorderUIResource, init$, void, $Icon*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.BorderUIResource$MatteBorderUIResource", "javax.swing.plaf.BorderUIResource", "MatteBorderUIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.BorderUIResource$MatteBorderUIResource",
		"javax.swing.border.MatteBorder",
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
	$loadClass(BorderUIResource$MatteBorderUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BorderUIResource$MatteBorderUIResource));
	});
	return class$;
}

$Class* BorderUIResource$MatteBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax