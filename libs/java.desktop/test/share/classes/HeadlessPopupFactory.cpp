#include <HeadlessPopupFactory.h>

#include <javax/swing/PopupFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PopupFactory = ::javax::swing::PopupFactory;

$MethodInfo _HeadlessPopupFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessPopupFactory, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessPopupFactory, main, void, $StringArray*)},
	{}
};

$ClassInfo _HeadlessPopupFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessPopupFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessPopupFactory_MethodInfo_
};

$Object* allocate$HeadlessPopupFactory($Class* clazz) {
	return $of($alloc(HeadlessPopupFactory));
}

void HeadlessPopupFactory::init$() {
}

void HeadlessPopupFactory::main($StringArray* args) {
	$var($PopupFactory, msm, $PopupFactory::getSharedInstance());
}

HeadlessPopupFactory::HeadlessPopupFactory() {
}

$Class* HeadlessPopupFactory::load$($String* name, bool initialize) {
	$loadClass(HeadlessPopupFactory, name, initialize, &_HeadlessPopupFactory_ClassInfo_, allocate$HeadlessPopupFactory);
	return class$;
}

$Class* HeadlessPopupFactory::class$ = nullptr;