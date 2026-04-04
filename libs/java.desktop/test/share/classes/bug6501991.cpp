#include <bug6501991.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

#undef TYPE_INT_RGB

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JLabel = ::javax::swing::JLabel;

void bug6501991::init$() {
}

void bug6501991::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($JLabel, l, $new($JLabel, u"ششششششش"_s));
		l->setSize(5, 22);
		$var($BufferedImage, image, $new($BufferedImage, 50, 50, $BufferedImage::TYPE_INT_RGB));
		l->paint($(image->createGraphics()));
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($RuntimeException, "failed"_s);
	}
}

bug6501991::bug6501991() {
}

$Class* bug6501991::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6501991, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6501991, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6501991",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6501991, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6501991);
	});
	return class$;
}

$Class* bug6501991::class$ = nullptr;