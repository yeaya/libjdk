#include <sun/util/logging/resources/logging_fr.h>
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

void logging_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_fr::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ALL"_s,
			"Tout"_s
		}),
		$$new($ObjectArray, {
			"CONFIG"_s,
			"Config"_s
		}),
		$$new($ObjectArray, {
			"FINE"_s,
			u"Précis"_s
		}),
		$$new($ObjectArray, {
			"FINER"_s,
			u"Plus précis"_s
		}),
		$$new($ObjectArray, {
			"FINEST"_s,
			u"Le plus précis"_s
		}),
		$$new($ObjectArray, {
			"INFO"_s,
			"Infos"_s
		}),
		$$new($ObjectArray, {
			"OFF"_s,
			u"Désactivé"_s
		}),
		$$new($ObjectArray, {
			"SEVERE"_s,
			"Grave"_s
		}),
		$$new($ObjectArray, {
			"WARNING"_s,
			"Avertissement"_s
		})
	});
}

logging_fr::logging_fr() {
}

$Class* logging_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(logging_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.logging.resources.logging_fr",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(logging_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(logging_fr);
	});
	return class$;
}

$Class* logging_fr::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun