#include <jdk/internal/net/http/Exchange$ConnectionAborter.h>
#include <jdk/internal/net/http/Exchange.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpConnection = ::jdk::internal::net::http::HttpConnection;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Exchange$ConnectionAborter::init$() {
}

void Exchange$ConnectionAborter::connection($HttpConnection* connection) {
	$set(this, connection$, connection);
	if (this->closeRequested) {
		closeConnection();
	}
}

void Exchange$ConnectionAborter::closeConnection() {
	this->closeRequested = true;
	$var($HttpConnection, connection, this->connection$);
	$set(this, connection$, nullptr);
	if (connection != nullptr) {
		try {
			connection->close();
		} catch ($Throwable& t) {
		}
	}
}

void Exchange$ConnectionAborter::disable() {
	$set(this, connection$, nullptr);
	this->closeRequested = false;
}

Exchange$ConnectionAborter::Exchange$ConnectionAborter() {
}

$Class* Exchange$ConnectionAborter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"connection", "Ljdk/internal/net/http/HttpConnection;", nullptr, $PRIVATE | $VOLATILE, $field(Exchange$ConnectionAborter, connection$)},
		{"closeRequested", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Exchange$ConnectionAborter, closeRequested)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Exchange$ConnectionAborter, init$, void)},
		{"closeConnection", "()V", nullptr, 0, $method(Exchange$ConnectionAborter, closeConnection, void)},
		{"connection", "(Ljdk/internal/net/http/HttpConnection;)V", nullptr, 0, $method(Exchange$ConnectionAborter, connection, void, $HttpConnection*)},
		{"disable", "()V", nullptr, 0, $method(Exchange$ConnectionAborter, disable, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Exchange$ConnectionAborter", "jdk.internal.net.http.Exchange", "ConnectionAborter", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.Exchange$ConnectionAborter",
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
		"jdk.internal.net.http.Exchange"
	};
	$loadClass(Exchange$ConnectionAborter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Exchange$ConnectionAborter);
	});
	return class$;
}

$Class* Exchange$ConnectionAborter::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk