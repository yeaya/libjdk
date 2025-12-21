#include <sun/util/logging/resources/logging_pt_BR.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace util {
		namespace logging {
			namespace resources {

$MethodInfo _logging_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(logging_pt_BR::*)()>(&logging_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _logging_pt_BR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_pt_BR_MethodInfo_
};

$Object* allocate$logging_pt_BR($Class* clazz) {
	return $of($alloc(logging_pt_BR));
}

void logging_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_pt_BR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("Tudo"_s)
		}),
		$$new($ObjectArray, {
			$of("CONFIG"_s),
			$of(u"Configuração"_s)
		}),
		$$new($ObjectArray, {
			$of("FINE"_s),
			$of("Detalhado"_s)
		}),
		$$new($ObjectArray, {
			$of("FINER"_s),
			$of("Mais Detalhado"_s)
		}),
		$$new($ObjectArray, {
			$of("FINEST"_s),
			$of("O Mais Detalhado"_s)
		}),
		$$new($ObjectArray, {
			$of("INFO"_s),
			$of(u"Informações"_s)
		}),
		$$new($ObjectArray, {
			$of("OFF"_s),
			$of("Desativado"_s)
		}),
		$$new($ObjectArray, {
			$of("SEVERE"_s),
			$of("Grave"_s)
		}),
		$$new($ObjectArray, {
			$of("WARNING"_s),
			$of(u"Advertência"_s)
		})
	});
}

logging_pt_BR::logging_pt_BR() {
}

$Class* logging_pt_BR::load$($String* name, bool initialize) {
	$loadClass(logging_pt_BR, name, initialize, &_logging_pt_BR_ClassInfo_, allocate$logging_pt_BR);
	return class$;
}

$Class* logging_pt_BR::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun