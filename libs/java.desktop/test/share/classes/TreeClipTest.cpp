#include <TreeClipTest.h>
#include <TreeClipTest$1.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $TreeClipTest$1 = ::TreeClipTest$1;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

bool TreeClipTest::passed = false;

void TreeClipTest::init$() {
}

bool TreeClipTest::checkImage($BufferedImage* img, int32_t clipY) {
	$init(TreeClipTest);
	for (int32_t y = clipY; y < $nc(img)->getHeight(); ++y) {
		for (int32_t x = 0; x < img->getWidth(); ++x) {
			if ((img->getRGB(x, y) & 0x00ffffff) != 0x00ffffff) {
				return false;
			}
		}
	}
	return true;
}

void TreeClipTest::main($StringArray* args) {
	$init(TreeClipTest);
	$SwingUtilities::invokeAndWait($$new($TreeClipTest$1));
	if (!TreeClipTest::passed) {
		$throwNew($RuntimeException, "Test failed."_s);
	} else {
		$nc($System::out)->println("Passed."_s);
	}
}

void TreeClipTest::clinit$($Class* clazz) {
	TreeClipTest::passed = true;
}

TreeClipTest::TreeClipTest() {
}

$Class* TreeClipTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"passed", "Z", nullptr, $STATIC, $staticField(TreeClipTest, passed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TreeClipTest, init$, void)},
		{"checkImage", "(Ljava/awt/image/BufferedImage;I)Z", nullptr, $STATIC, $staticMethod(TreeClipTest, checkImage, bool, $BufferedImage*, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TreeClipTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TreeClipTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TreeClipTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TreeClipTest$1"
	};
	$loadClass(TreeClipTest, name, initialize, &classInfo$$, TreeClipTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TreeClipTest);
	});
	return class$;
}

$Class* TreeClipTest::class$ = nullptr;