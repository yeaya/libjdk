#include <sun/swing/PrintColorUIResource.h>
#include <java/awt/Color.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;

namespace sun {
	namespace swing {

void PrintColorUIResource::init$(int32_t rgb, $Color* printColor) {
	$ColorUIResource::init$(rgb);
	$set(this, printColor, printColor);
}

$Color* PrintColorUIResource::getPrintColor() {
	return ((this->printColor != nullptr) ? this->printColor : $cast($Color, this));
}

$Object* PrintColorUIResource::writeReplace() {
	return $of($new($ColorUIResource, this));
}

PrintColorUIResource::PrintColorUIResource() {
}

$Class* PrintColorUIResource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"printColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(PrintColorUIResource, printColor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/awt/Color;)V", nullptr, $PUBLIC, $method(PrintColorUIResource, init$, void, int32_t, $Color*)},
		{"getPrintColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(PrintColorUIResource, getPrintColor, $Color*)},
		{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(PrintColorUIResource, writeReplace, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.swing.PrintColorUIResource",
		"javax.swing.plaf.ColorUIResource",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrintColorUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrintColorUIResource));
	});
	return class$;
}

$Class* PrintColorUIResource::class$ = nullptr;

	} // swing
} // sun