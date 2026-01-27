#include <sun/text/resources/ext/CollationData_hr.h>

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

$MethodInfo _CollationData_hr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_hr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_hr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_hr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_hr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_hr_MethodInfo_
};

$Object* allocate$CollationData_hr($Class* clazz) {
	return $of($alloc(CollationData_hr));
}

void CollationData_hr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_hr::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& \u200f = ̌ & ̆ = ̍ & C < č , Č < ć , Ć & D < ǳ , ǲ , Ǳ < dz , dZ , Dz , DZ < ǆ , ǅ , Ǆ < đ , Đ & L < lj , lJ , Lj , LJ & N < nj , nJ , Nj , NJ & S < š , Š & Z < ž , Ž "_s)
	})});
}

CollationData_hr::CollationData_hr() {
}

$Class* CollationData_hr::load$($String* name, bool initialize) {
	$loadClass(CollationData_hr, name, initialize, &_CollationData_hr_ClassInfo_, allocate$CollationData_hr);
	return class$;
}

$Class* CollationData_hr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun