#include <jdk/internal/net/http/Http1Exchange$DataPair.h>
#include <java/util/List.h>
#include <jdk/internal/net/http/Http1Exchange.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Http1Exchange$DataPair::init$($List* data, $Throwable* throwable) {
	$set(this, data, data);
	$set(this, throwable, throwable);
}

$String* Http1Exchange$DataPair::toString() {
	return $str({"DataPair [data="_s, this->data, ", throwable="_s, this->throwable, "]"_s});
}

Http1Exchange$DataPair::Http1Exchange$DataPair() {
}

$Class* Http1Exchange$DataPair::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"throwable", "Ljava/lang/Throwable;", nullptr, 0, $field(Http1Exchange$DataPair, throwable)},
		{"data", "Ljava/util/List;", "Ljava/util/List<Ljava/nio/ByteBuffer;>;", 0, $field(Http1Exchange$DataPair, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;Ljava/lang/Throwable;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;Ljava/lang/Throwable;)V", 0, $method(Http1Exchange$DataPair, init$, void, $List*, $Throwable*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Http1Exchange$DataPair, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Exchange$DataPair", "jdk.internal.net.http.Http1Exchange", "DataPair", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.Http1Exchange$DataPair",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Http1Exchange"
	};
	$loadClass(Http1Exchange$DataPair, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Exchange$DataPair);
	});
	return class$;
}

$Class* Http1Exchange$DataPair::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk