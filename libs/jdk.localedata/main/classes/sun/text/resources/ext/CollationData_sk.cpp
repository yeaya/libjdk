#include <sun/text/resources/ext/CollationData_sk.h>

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

$MethodInfo _CollationData_sk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_sk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_sk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_sk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_sk",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_sk_MethodInfo_
};

$Object* allocate$CollationData_sk($Class* clazz) {
	return $of($alloc(CollationData_sk));
}

void CollationData_sk::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_sk::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& ͡ ; ̈ = ̍ & A < ä , Ä & C < č , Č & D < đ, Đ & H < ch , cH , Ch , CH & L < ł , Ł & O < ô , Ô & R < ř , Ř & S < š , Š & Z < ž , Ž < ż , Ż "_s)
	})});
}

CollationData_sk::CollationData_sk() {
}

$Class* CollationData_sk::load$($String* name, bool initialize) {
	$loadClass(CollationData_sk, name, initialize, &_CollationData_sk_ClassInfo_, allocate$CollationData_sk);
	return class$;
}

$Class* CollationData_sk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun