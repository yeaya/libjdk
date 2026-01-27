#include <sun/text/resources/ext/CollationData_pl.h>

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

$MethodInfo _CollationData_pl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_pl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_pl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_pl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_pl",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_pl_MethodInfo_
};

$Object* allocate$CollationData_pl($Class* clazz) {
	return $of($alloc(CollationData_pl));
}

void CollationData_pl::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_pl::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& A < ą , Ą & C < ć , Ć & D < đ, Đ & E < ę , Ę & L < ł , Ł & N < ń , Ń & O < ó , Ó & S < ś , Ś & Z < ź , Ź < ż , Ż "_s)
	})});
}

CollationData_pl::CollationData_pl() {
}

$Class* CollationData_pl::load$($String* name, bool initialize) {
	$loadClass(CollationData_pl, name, initialize, &_CollationData_pl_ClassInfo_, allocate$CollationData_pl);
	return class$;
}

$Class* CollationData_pl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun