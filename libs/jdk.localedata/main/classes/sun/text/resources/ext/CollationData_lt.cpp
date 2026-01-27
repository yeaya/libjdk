#include <sun/text/resources/ext/CollationData_lt.h>

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

$MethodInfo _CollationData_lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_lt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_lt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_lt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_lt",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_lt_MethodInfo_
};

$Object* allocate$CollationData_lt($Class* clazz) {
	return $of($alloc(CollationData_lt));
}

void CollationData_lt::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_lt::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"@& C < č , Č & I ; y = ı , Y = İ & S < š , Š & X < ý, Ý < ŷ , Ŷ < ÿ, Ÿ & Z < ž , Ž "_s)
	})});
}

CollationData_lt::CollationData_lt() {
}

$Class* CollationData_lt::load$($String* name, bool initialize) {
	$loadClass(CollationData_lt, name, initialize, &_CollationData_lt_ClassInfo_, allocate$CollationData_lt);
	return class$;
}

$Class* CollationData_lt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun