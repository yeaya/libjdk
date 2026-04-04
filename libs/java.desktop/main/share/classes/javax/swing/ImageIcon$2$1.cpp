#include <javax/swing/ImageIcon$2$1.h>
#include <java/awt/Component.h>
#include <javax/swing/ImageIcon$2.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon$2 = ::javax::swing::ImageIcon$2;

namespace javax {
	namespace swing {

void ImageIcon$2$1::init$($ImageIcon$2* this$0) {
	$set(this, this$0, this$0);
	$Component::init$();
}

ImageIcon$2$1::ImageIcon$2$1() {
}

$Class* ImageIcon$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/ImageIcon$2;", nullptr, $FINAL | $SYNTHETIC, $field(ImageIcon$2$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/ImageIcon$2;)V", nullptr, 0, $method(ImageIcon$2$1, init$, void, $ImageIcon$2*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.ImageIcon$2",
		"run",
		"()Ljava/awt/Component;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ImageIcon$2", nullptr, nullptr, 0},
		{"javax.swing.ImageIcon$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ImageIcon$2$1",
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
	$loadClass(ImageIcon$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ImageIcon$2$1));
	});
	return class$;
}

$Class* ImageIcon$2$1::class$ = nullptr;

	} // swing
} // javax