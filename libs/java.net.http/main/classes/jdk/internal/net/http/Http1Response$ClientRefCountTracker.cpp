#include <jdk/internal/net/http/Http1Response$ClientRefCountTracker.h>
#include <java/lang/AssertionError.h>
#include <jdk/internal/net/http/Http1Response.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Http1Response = ::jdk::internal::net::http::Http1Response;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool Http1Response$ClientRefCountTracker::$assertionsDisabled = false;

void Http1Response$ClientRefCountTracker::init$($Http1Response* this$0) {
	$set(this, this$0, this$0);
	$set(this, client, $nc(this->this$0->connection)->client());
}

void Http1Response$ClientRefCountTracker::acquire() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->state == 0) {
			if ($nc(this->this$0->debug)->on()) {
				this->this$0->debug->log("Operation started: incrementing ref count for %s"_s, $$new($ObjectArray, {this->client}));
			}
			$nc(this->client)->reference();
			this->state = 1;
		} else {
			if ($nc(this->this$0->debug)->on()) {
				this->this$0->debug->log("Operation ref count for %s is already %s"_s, $$new($ObjectArray, {
					this->client,
					((this->state & 2) == 2) ? "released."_s : "incremented!"_s
				}));
			}
			if (!Http1Response$ClientRefCountTracker::$assertionsDisabled && !((this->state & 1) == 0)) {
				$throwNew($AssertionError, $of("reference count already incremented"_s));
			}
		}
	}
}

void Http1Response$ClientRefCountTracker::tryRelease() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->state == 1) {
			if ($nc(this->this$0->debug)->on()) {
				this->this$0->debug->log("Operation finished: decrementing ref count for %s"_s, $$new($ObjectArray, {this->client}));
			}
			$nc(this->client)->unreference();
		} else if (this->state == 0) {
			if ($nc(this->this$0->debug)->on()) {
				this->this$0->debug->log("Operation finished: releasing ref count for %s"_s, $$new($ObjectArray, {this->client}));
			}
		} else if ((this->state & 2) == 2) {
			if ($nc(this->this$0->debug)->on()) {
				this->this$0->debug->log("ref count for %s already released"_s, $$new($ObjectArray, {this->client}));
			}
		}
		this->state |= 2;
	}
}

void Http1Response$ClientRefCountTracker::clinit$($Class* clazz) {
	$load($Http1Response);
	Http1Response$ClientRefCountTracker::$assertionsDisabled = !$Http1Response::class$->desiredAssertionStatus();
}

Http1Response$ClientRefCountTracker::Http1Response$ClientRefCountTracker() {
}

$Class* Http1Response$ClientRefCountTracker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/Http1Response;", nullptr, $FINAL | $SYNTHETIC, $field(Http1Response$ClientRefCountTracker, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Http1Response$ClientRefCountTracker, $assertionsDisabled)},
		{"client", "Ljdk/internal/net/http/HttpClientImpl;", nullptr, $FINAL, $field(Http1Response$ClientRefCountTracker, client)},
		{"state", "B", nullptr, 0, $field(Http1Response$ClientRefCountTracker, state)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Http1Response;)V", nullptr, $PRIVATE, $method(Http1Response$ClientRefCountTracker, init$, void, $Http1Response*)},
		{"acquire", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(Http1Response$ClientRefCountTracker, acquire, void)},
		{"tryRelease", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(Http1Response$ClientRefCountTracker, tryRelease, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Response$ClientRefCountTracker", "jdk.internal.net.http.Http1Response", "ClientRefCountTracker", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.Http1Response$ClientRefCountTracker",
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
		"jdk.internal.net.http.Http1Response"
	};
	$loadClass(Http1Response$ClientRefCountTracker, name, initialize, &classInfo$$, Http1Response$ClientRefCountTracker::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Response$ClientRefCountTracker);
	});
	return class$;
}

$Class* Http1Response$ClientRefCountTracker::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk