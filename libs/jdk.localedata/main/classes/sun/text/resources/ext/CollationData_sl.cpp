#include <sun/text/resources/ext/CollationData_sl.h>

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

$MethodInfo _CollationData_sl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_sl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_sl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_sl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_sl",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_sl_MethodInfo_
};

$Object* allocate$CollationData_sl($Class* clazz) {
	return $of($alloc(CollationData_sl));
}

void CollationData_sl::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_sl::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& C < č , Č < ć , Ć & D < ǳ , ǲ , Ǳ < ǆ , ǅ , Ǆ < đ , Đ & L < ł , Ł & N < nj , nJ , Nj , NJ & S < š , Š < ś, Ś & Z < ž , Ž < ź , Ź < ż , Ż "_s)
	})});
}

CollationData_sl::CollationData_sl() {
}

$Class* CollationData_sl::load$($String* name, bool initialize) {
	$loadClass(CollationData_sl, name, initialize, &_CollationData_sl_ClassInfo_, allocate$CollationData_sl);
	return class$;
}

$Class* CollationData_sl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun