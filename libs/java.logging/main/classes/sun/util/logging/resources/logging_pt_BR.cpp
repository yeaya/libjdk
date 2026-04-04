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

void logging_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_pt_BR::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ALL"_s,
			"Tudo"_s
		}),
		$$new($ObjectArray, {
			"CONFIG"_s,
			u"Configuração"_s
		}),
		$$new($ObjectArray, {
			"FINE"_s,
			"Detalhado"_s
		}),
		$$new($ObjectArray, {
			"FINER"_s,
			"Mais Detalhado"_s
		}),
		$$new($ObjectArray, {
			"FINEST"_s,
			"O Mais Detalhado"_s
		}),
		$$new($ObjectArray, {
			"INFO"_s,
			u"Informações"_s
		}),
		$$new($ObjectArray, {
			"OFF"_s,
			"Desativado"_s
		}),
		$$new($ObjectArray, {
			"SEVERE"_s,
			"Grave"_s
		}),
		$$new($ObjectArray, {
			"WARNING"_s,
			u"Advertência"_s
		})
	});
}

logging_pt_BR::logging_pt_BR() {
}

$Class* logging_pt_BR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(logging_pt_BR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_pt_BR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.logging.resources.logging_pt_BR",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(logging_pt_BR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(logging_pt_BR);
	});
	return class$;
}

$Class* logging_pt_BR::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun