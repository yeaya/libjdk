#include <javax/swing/RepaintManager$DoubleBufferInfo.h>
#include <java/awt/Dimension.h>
#include <java/awt/Image.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RepaintManager = ::javax::swing::RepaintManager;

namespace javax {
	namespace swing {

void RepaintManager$DoubleBufferInfo::init$($RepaintManager* this$0) {
	$set(this, this$0, this$0);
	this->needsReset = false;
}

RepaintManager$DoubleBufferInfo::RepaintManager$DoubleBufferInfo() {
}

$Class* RepaintManager$DoubleBufferInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/RepaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$DoubleBufferInfo, this$0)},
		{"image", "Ljava/awt/Image;", nullptr, $PUBLIC, $field(RepaintManager$DoubleBufferInfo, image)},
		{"size", "Ljava/awt/Dimension;", nullptr, $PUBLIC, $field(RepaintManager$DoubleBufferInfo, size)},
		{"needsReset", "Z", nullptr, $PUBLIC, $field(RepaintManager$DoubleBufferInfo, needsReset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/RepaintManager;)V", nullptr, $PRIVATE, $method(RepaintManager$DoubleBufferInfo, init$, void, $RepaintManager*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RepaintManager$DoubleBufferInfo", "javax.swing.RepaintManager", "DoubleBufferInfo", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.RepaintManager$DoubleBufferInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.RepaintManager"
	};
	$loadClass(RepaintManager$DoubleBufferInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintManager$DoubleBufferInfo);
	});
	return class$;
}

$Class* RepaintManager$DoubleBufferInfo::class$ = nullptr;

	} // swing
} // javax