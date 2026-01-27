#include <sun/text/resources/ext/CollationData_ca.h>

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

$MethodInfo _CollationData_ca_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_ca, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_ca, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_ca_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_ca",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_ca_MethodInfo_
};

$Object* allocate$CollationData_ca($Class* clazz) {
	return $of($alloc(CollationData_ca));
}

void CollationData_ca::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_ca::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of("@"_s)
	})});
}

CollationData_ca::CollationData_ca() {
}

$Class* CollationData_ca::load$($String* name, bool initialize) {
	$loadClass(CollationData_ca, name, initialize, &_CollationData_ca_ClassInfo_, allocate$CollationData_ca);
	return class$;
}

$Class* CollationData_ca::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun