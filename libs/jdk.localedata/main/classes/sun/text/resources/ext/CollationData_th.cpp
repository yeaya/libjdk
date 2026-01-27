#include <sun/text/resources/ext/CollationData_th.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _CollationData_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_th, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_th, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_th_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_th",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_th_MethodInfo_
};

$Object* allocate$CollationData_th($Class* clazz) {
	return $of($alloc(CollationData_th));
}

void CollationData_th::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_th::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of($cstr({'!', ' ', '&', ' ', 'Z', ' ', '<', ' ', 0xE01, ' ', '<', ' ', 0xE02, ' ', '<', ' ', 0xE03, ' ', '<', ' ', 0xE04, ' ', '<', ' ', 0xE05, ' ', '<', ' ', 0xE06, ' ', '<', ' ', 0xE07, ' ', '<', ' ', 0xE08, ' ', '<', ' ', 0xE09, ' ', '<', ' ', 0xE0A, ' ', '<', ' ', 0xE0B, ' ', '<', ' ', 0xE0C, ' ', '<', ' ', 0xE0D, ' ', '<', ' ', 0xE0E, ' ', '<', ' ', 0xE0F, ' ', '<', ' ', 0xE10, ' ', '<', ' ', 0xE11, ' ', '<', ' ', 0xE12, ' ', '<', ' ', 0xE13, ' ', '<', ' ', 0xE14, ' ', '<', ' ', 0xE15, ' ', '<', ' ', 0xE16, ' ', '<', ' ', 0xE17, ' ', '<', ' ', 0xE18, ' ', '<', ' ', 0xE19, ' ', '<', ' ', 0xE1A, ' ', '<', ' ', 0xE1B, ' ', '<', ' ', 0xE1C, ' ', '<', ' ', 0xE1D, ' ', '<', ' ', 0xE1E, ' ', '<', ' ', 0xE1F, ' ', '<', ' ', 0xE20, ' ', '<', ' ', 0xE21, ' ', '<', ' ', 0xE22, ' ', '<', ' ', 0xE23, ' ', '<', ' ', 0xE24, ' ', '<', ' ', 0xE25, ' ', '<', ' ', 0xE26, ' ', '<', ' ', 0xE27, ' ', '<', ' ', 0xE28, ' ', '<', ' ', 0xE29, ' ', '<', ' ', 0xE2A, ' ', '<', ' ', 0xE2B, ' ', '<', ' ', 0xE2C, ' ', '<', ' ', 0xE2D, ' ', '<', ' ', 0xE2E, ' ', '<', ' ', 0xE4D, ' ', '<', ' ', 0xE30, ' ', '<', ' ', 0xE31, ' ', '<', ' ', 0xE32, ' ', '<', ' ', 0xE33, ' ', '=', ' ', 0xE4D, 0xE32, ' ', '<', ' ', 0xE34, ' ', '<', ' ', 0xE35, ' ', '<', ' ', 0xE36, ' ', '<', ' ', 0xE37, ' ', '<', ' ', 0xE38, ' ', '<', ' ', 0xE39, ' ', '<', ' ', 0xE40, ' ', '<', ' ', 0xE41, ' ', '<', ' ', 0xE42, ' ', '<', ' ', 0xE43, ' ', '<', ' ', 0xE44, ' ', '<', ' ', 0xE3A, ' ', '<', ' ', 0xE45, ' ', '&', ' ', 0xE32, ' ', ',', ' ', '\0', 'E', '4', '5', ' ', '&', ' ', 0x301, ' ', ',', ' ', 0xE2F, ' ', ',', ' ', 0xE46, ' ', ',', ' ', 0xE4F, ' ', ',', ' ', 0xE5A, ' ', ',', ' ', 0xE5B, ' ', ';', ' ', 0xE4E, ' ', ';', ' ', 0xE4C, ' ', ';', ' ', 0xE47, ' ', ';', ' ', 0xE48, ' ', ';', ' ', 0xE49, ' ', ';', ' ', 0xE4A, ' ', ';', ' ', 0xE4B, ' ', '&', ' ', '0', ' ', '=', ' ', 0xE50, ' ', '&', ' ', '1', ' ', '=', ' ', 0xE51, ' ', '&', ' ', '2', ' ', '=', ' ', 0xE52, ' ', '&', ' ', '3', ' ', '=', ' ', 0xE53, ' ', '&', ' ', '4', ' ', '=', ' ', 0xE54, ' ', '&', ' ', '5', ' ', '=', ' ', 0xE55, ' ', '&', ' ', '6', ' ', '=', ' ', 0xE56, ' ', '&', ' ', '7', ' ', '=', ' ', 0xE57, ' ', '&', ' ', '8', ' ', '=', ' ', 0xE58, ' ', '&', ' ', '9', ' ', '=', ' ', 0xE59, ' '}))
	})});
}

CollationData_th::CollationData_th() {
}

$Class* CollationData_th::load$($String* name, bool initialize) {
	$loadClass(CollationData_th, name, initialize, &_CollationData_th_ClassInfo_, allocate$CollationData_th);
	return class$;
}

$Class* CollationData_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun