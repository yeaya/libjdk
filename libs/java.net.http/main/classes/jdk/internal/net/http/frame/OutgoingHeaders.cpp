#include <jdk/internal/net/http/frame/OutgoingHeaders.h>
#include <java/net/http/HttpHeaders.h>
#include <jdk/internal/net/http/frame/Http2Frame.h>
#include <jcpp.h>

#undef PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $Http2Frame = ::jdk::internal::net::http::frame::Http2Frame;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace frame {

void OutgoingHeaders::init$($HttpHeaders* hdrs1, $HttpHeaders* hdrs2, Object$* attachment) {
	$Http2Frame::init$(0, 0);
	$set(this, user, hdrs2);
	$set(this, system, hdrs1);
	$set(this, attachment, attachment);
}

void OutgoingHeaders::setPriority(int32_t streamDependency, bool exclusive, int32_t weight) {
	this->streamDependency = streamDependency;
	this->exclusive = exclusive;
	this->weight = weight;
	this->flags |= OutgoingHeaders::PRIORITY;
}

int32_t OutgoingHeaders::getStreamDependency() {
	return this->streamDependency;
}

int32_t OutgoingHeaders::getWeight() {
	return this->weight;
}

bool OutgoingHeaders::getExclusive() {
	return this->exclusive;
}

$Object* OutgoingHeaders::getAttachment() {
	return this->attachment;
}

$HttpHeaders* OutgoingHeaders::getUserHeaders() {
	return this->user;
}

$HttpHeaders* OutgoingHeaders::getSystemHeaders() {
	return this->system;
}

OutgoingHeaders::OutgoingHeaders() {
}

$Class* OutgoingHeaders::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"streamDependency", "I", nullptr, 0, $field(OutgoingHeaders, streamDependency)},
		{"weight", "I", nullptr, 0, $field(OutgoingHeaders, weight)},
		{"exclusive", "Z", nullptr, 0, $field(OutgoingHeaders, exclusive)},
		{"attachment", "Ljava/lang/Object;", "TT;", 0, $field(OutgoingHeaders, attachment)},
		{"PRIORITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OutgoingHeaders, PRIORITY)},
		{"user", "Ljava/net/http/HttpHeaders;", nullptr, 0, $field(OutgoingHeaders, user)},
		{"system", "Ljava/net/http/HttpHeaders;", nullptr, 0, $field(OutgoingHeaders, system)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/http/HttpHeaders;Ljava/net/http/HttpHeaders;Ljava/lang/Object;)V", "(Ljava/net/http/HttpHeaders;Ljava/net/http/HttpHeaders;TT;)V", $PUBLIC, $method(OutgoingHeaders, init$, void, $HttpHeaders*, $HttpHeaders*, Object$*)},
		{"getAttachment", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(OutgoingHeaders, getAttachment, $Object*)},
		{"getExclusive", "()Z", nullptr, $PUBLIC, $virtualMethod(OutgoingHeaders, getExclusive, bool)},
		{"getStreamDependency", "()I", nullptr, $PUBLIC, $virtualMethod(OutgoingHeaders, getStreamDependency, int32_t)},
		{"getSystemHeaders", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC, $virtualMethod(OutgoingHeaders, getSystemHeaders, $HttpHeaders*)},
		{"getUserHeaders", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC, $virtualMethod(OutgoingHeaders, getUserHeaders, $HttpHeaders*)},
		{"getWeight", "()I", nullptr, $PUBLIC, $virtualMethod(OutgoingHeaders, getWeight, int32_t)},
		{"setPriority", "(IZI)V", nullptr, $PUBLIC, $virtualMethod(OutgoingHeaders, setPriority, void, int32_t, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.frame.OutgoingHeaders",
		"jdk.internal.net.http.frame.Http2Frame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljdk/internal/net/http/frame/Http2Frame;"
	};
	$loadClass(OutgoingHeaders, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OutgoingHeaders);
	});
	return class$;
}

$Class* OutgoingHeaders::class$ = nullptr;

				} // frame
			} // http
		} // net
	} // internal
} // jdk