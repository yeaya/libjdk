#include <jdk/internal/net/http/hpack/LiteralNeverIndexedWriter.h>
#include <jdk/internal/net/http/hpack/IndexNameValueWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IndexNameValueWriter = ::jdk::internal::net::http::hpack::IndexNameValueWriter;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void LiteralNeverIndexedWriter::init$() {
	$IndexNameValueWriter::init$(16, 4);
}

LiteralNeverIndexedWriter::LiteralNeverIndexedWriter() {
}

$Class* LiteralNeverIndexedWriter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LiteralNeverIndexedWriter, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.LiteralNeverIndexedWriter",
		"jdk.internal.net.http.hpack.IndexNameValueWriter",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LiteralNeverIndexedWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LiteralNeverIndexedWriter);
	});
	return class$;
}

$Class* LiteralNeverIndexedWriter::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk