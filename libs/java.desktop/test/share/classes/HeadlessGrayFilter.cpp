#include <HeadlessGrayFilter.h>
#include <java/awt/image/ImageFilter.h>
#include <javax/swing/GrayFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GrayFilter = ::javax::swing::GrayFilter;

void HeadlessGrayFilter::init$() {
}

void HeadlessGrayFilter::main($StringArray* args) {
	$$new($GrayFilter, true, 60)->clone();
}

HeadlessGrayFilter::HeadlessGrayFilter() {
}

$Class* HeadlessGrayFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessGrayFilter, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessGrayFilter, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessGrayFilter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessGrayFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessGrayFilter);
	});
	return class$;
}

$Class* HeadlessGrayFilter::class$ = nullptr;