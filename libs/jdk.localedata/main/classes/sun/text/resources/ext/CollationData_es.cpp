#include <sun/text/resources/ext/CollationData_es.h>

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

$MethodInfo _CollationData_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_es, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_es, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_es_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_es",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_es_MethodInfo_
};

$Object* allocate$CollationData_es($Class* clazz) {
	return $of($alloc(CollationData_es));
}

void CollationData_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_es::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& N < ñ, Ñ "_s)
	})});
}

CollationData_es::CollationData_es() {
}

$Class* CollationData_es::load$($String* name, bool initialize) {
	$loadClass(CollationData_es, name, initialize, &_CollationData_es_ClassInfo_, allocate$CollationData_es);
	return class$;
}

$Class* CollationData_es::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun