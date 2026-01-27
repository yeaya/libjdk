#include <HeadlessOverlayLayout.h>

#include <java/awt/Container.h>
#include <javax/swing/OverlayLayout.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OverlayLayout = ::javax::swing::OverlayLayout;

$MethodInfo _HeadlessOverlayLayout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessOverlayLayout, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessOverlayLayout, main, void, $StringArray*)},
	{}
};

$ClassInfo _HeadlessOverlayLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessOverlayLayout",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessOverlayLayout_MethodInfo_
};

$Object* allocate$HeadlessOverlayLayout($Class* clazz) {
	return $of($alloc(HeadlessOverlayLayout));
}

void HeadlessOverlayLayout::init$() {
}

void HeadlessOverlayLayout::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($OverlayLayout, msm, $new($OverlayLayout, $$new($Container)));
}

HeadlessOverlayLayout::HeadlessOverlayLayout() {
}

$Class* HeadlessOverlayLayout::load$($String* name, bool initialize) {
	$loadClass(HeadlessOverlayLayout, name, initialize, &_HeadlessOverlayLayout_ClassInfo_, allocate$HeadlessOverlayLayout);
	return class$;
}

$Class* HeadlessOverlayLayout::class$ = nullptr;