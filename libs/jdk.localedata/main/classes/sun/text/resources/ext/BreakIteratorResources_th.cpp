#include <sun/text/resources/ext/BreakIteratorResources_th.h>

#include <java/util/ListResourceBundle.h>
#include <java/util/ResourceBundle.h>
#include <sun/text/resources/ext/BreakIteratorInfo_th.h>
#include <sun/util/resources/BreakIteratorResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;
using $ResourceBundle = ::java::util::ResourceBundle;
using $BreakIteratorInfo_th = ::sun::text::resources::ext::BreakIteratorInfo_th;
using $BreakIteratorResourceBundle = ::sun::util::resources::BreakIteratorResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _BreakIteratorResources_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BreakIteratorResources_th, init$, void)},
	{"getBreakIteratorInfo", "()Ljava/util/ResourceBundle;", nullptr, $PROTECTED, $virtualMethod(BreakIteratorResources_th, getBreakIteratorInfo, $ResourceBundle*)},
	{}
};

$ClassInfo _BreakIteratorResources_th_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.BreakIteratorResources_th",
	"sun.util.resources.BreakIteratorResourceBundle",
	nullptr,
	nullptr,
	_BreakIteratorResources_th_MethodInfo_
};

$Object* allocate$BreakIteratorResources_th($Class* clazz) {
	return $of($alloc(BreakIteratorResources_th));
}

void BreakIteratorResources_th::init$() {
	$BreakIteratorResourceBundle::init$();
}

$ResourceBundle* BreakIteratorResources_th::getBreakIteratorInfo() {
	return $new($BreakIteratorInfo_th);
}

BreakIteratorResources_th::BreakIteratorResources_th() {
}

$Class* BreakIteratorResources_th::load$($String* name, bool initialize) {
	$loadClass(BreakIteratorResources_th, name, initialize, &_BreakIteratorResources_th_ClassInfo_, allocate$BreakIteratorResources_th);
	return class$;
}

$Class* BreakIteratorResources_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun