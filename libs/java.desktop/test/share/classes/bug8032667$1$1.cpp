#include <bug8032667$1$1.h>
#include <bug8032667$1.h>
#include <java/awt/Canvas.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <jcpp.h>

using $bug8032667$1 = ::bug8032667$1;
using $Canvas = ::java::awt::Canvas;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8032667$1$1::init$($bug8032667$1* this$1, $Image* val$image1, $Image* val$image2) {
	$set(this, this$1, this$1);
	$set(this, val$image1, val$image1);
	$set(this, val$image2, val$image2);
	$Canvas::init$();
}

void bug8032667$1$1::paint($Graphics* g) {
	$Canvas::paint(g);
	$nc(g)->drawImage(this->val$image1, 0, 0, 260, 100, this);
	g->drawImage(this->val$image2, 0, 100 + 5, 260, 100, this);
}

bug8032667$1$1::bug8032667$1$1() {
}

$Class* bug8032667$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lbug8032667$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug8032667$1$1, this$1)},
		{"val$image2", "Ljava/awt/Image;", nullptr, $FINAL | $SYNTHETIC, $field(bug8032667$1$1, val$image2)},
		{"val$image1", "Ljava/awt/Image;", nullptr, $FINAL | $SYNTHETIC, $field(bug8032667$1$1, val$image1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug8032667$1;Ljava/awt/Image;Ljava/awt/Image;)V", nullptr, 0, $method(bug8032667$1$1, init$, void, $bug8032667$1*, $Image*, $Image*)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(bug8032667$1$1, paint, void, $Graphics*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8032667$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8032667$1", nullptr, nullptr, 0},
		{"bug8032667$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8032667$1$1",
		"java.awt.Canvas",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8032667"
	};
	$loadClass(bug8032667$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8032667$1$1));
	});
	return class$;
}

$Class* bug8032667$1$1::class$ = nullptr;