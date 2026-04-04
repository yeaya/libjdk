#include <javax/swing/ImageIcon$3.h>
#include <java/awt/Component.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;

namespace javax {
	namespace swing {

void ImageIcon$3::init$($ImageIcon* this$0) {
	$set(this, this$0, this$0);
	$Component::init$();
}

ImageIcon$3::ImageIcon$3() {
}

$Class* ImageIcon$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/ImageIcon;", nullptr, $FINAL | $SYNTHETIC, $field(ImageIcon$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/ImageIcon;)V", nullptr, 0, $method(ImageIcon$3, init$, void, $ImageIcon*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.ImageIcon",
		"getTracker",
		"()Ljava/awt/MediaTracker;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ImageIcon$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ImageIcon$3",
		"java.awt.Component",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.ImageIcon"
	};
	$loadClass(ImageIcon$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ImageIcon$3));
	});
	return class$;
}

$Class* ImageIcon$3::class$ = nullptr;

	} // swing
} // javax