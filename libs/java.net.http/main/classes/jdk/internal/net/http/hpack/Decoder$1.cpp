#include <jdk/internal/net/http/hpack/Decoder$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/net/http/hpack/Decoder$State.h>
#include <jdk/internal/net/http/hpack/Decoder.h>
#include <jcpp.h>

#undef INDEXED
#undef LITERAL
#undef LITERAL_NEVER_INDEXED
#undef LITERAL_WITH_INDEXING
#undef READY
#undef SIZE_UPDATE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Decoder$State = ::jdk::internal::net::http::hpack::Decoder$State;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

$ints* Decoder$1::$SwitchMap$jdk$internal$net$http$hpack$Decoder$State = nullptr;

void Decoder$1::clinit$($Class* clazz) {
	$assignStatic(Decoder$1::$SwitchMap$jdk$internal$net$http$hpack$Decoder$State, $new($ints, $($Decoder$State::values())->length));
	{
		try {
			Decoder$1::$SwitchMap$jdk$internal$net$http$hpack$Decoder$State->set($Decoder$State::READY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Decoder$1::$SwitchMap$jdk$internal$net$http$hpack$Decoder$State->set($Decoder$State::INDEXED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Decoder$1::$SwitchMap$jdk$internal$net$http$hpack$Decoder$State->set($Decoder$State::LITERAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Decoder$1::$SwitchMap$jdk$internal$net$http$hpack$Decoder$State->set($Decoder$State::LITERAL_WITH_INDEXING->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Decoder$1::$SwitchMap$jdk$internal$net$http$hpack$Decoder$State->set($Decoder$State::LITERAL_NEVER_INDEXED->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Decoder$1::$SwitchMap$jdk$internal$net$http$hpack$Decoder$State->set($Decoder$State::SIZE_UPDATE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Decoder$1::Decoder$1() {
}

$Class* Decoder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$internal$net$http$hpack$Decoder$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Decoder$1, $SwitchMap$jdk$internal$net$http$hpack$Decoder$State)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.hpack.Decoder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.Decoder$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.net.http.hpack.Decoder$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.Decoder"
	};
	$loadClass(Decoder$1, name, initialize, &classInfo$$, Decoder$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$1);
	});
	return class$;
}

$Class* Decoder$1::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk