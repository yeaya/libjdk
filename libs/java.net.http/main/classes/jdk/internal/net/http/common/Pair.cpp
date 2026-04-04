#include <jdk/internal/net/http/common/Pair.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void Pair::init$(Object$* first, Object$* second) {
	$set(this, second, second);
	$set(this, first, first);
}

Pair* Pair::pair(Object$* first, Object$* second) {
	return $new(Pair, first, second);
}

$String* Pair::toString() {
	return $str({"("_s, this->first, ", "_s, this->second, ")"_s});
}

Pair::Pair() {
}

$Class* Pair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"first", "Ljava/lang/Object;", "TT;", $PUBLIC | $FINAL, $field(Pair, first)},
		{"second", "Ljava/lang/Object;", "TU;", $PUBLIC | $FINAL, $field(Pair, second)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TU;)V", $PUBLIC, $method(Pair, init$, void, Object$*, Object$*)},
		{"pair", "(Ljava/lang/Object;Ljava/lang/Object;)Ljdk/internal/net/http/common/Pair;", "<T:Ljava/lang/Object;U:Ljava/lang/Object;>(TT;TU;)Ljdk/internal/net/http/common/Pair<TT;TU;>;", $PUBLIC | $STATIC, $staticMethod(Pair, pair, Pair*, Object$*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Pair, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.common.Pair",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(Pair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pair);
	});
	return class$;
}

$Class* Pair::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk