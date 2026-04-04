#include <sun/security/krb5/internal/rcache/AuthTime.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/StringTokenizer.h>
#include <sun/security/krb5/internal/rcache/AuthTimeWithHash.h>
#include <jcpp.h>

#undef UTF_8

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $StringTokenizer = ::java::util::StringTokenizer;
using $AuthTimeWithHash = ::sun::security::krb5::internal::rcache::AuthTimeWithHash;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace rcache {

void AuthTime::init$($String* client, $String* server, int32_t ctime, int32_t cusec) {
	this->ctime = ctime;
	this->cusec = cusec;
	$set(this, client, client);
	$set(this, server, server);
}

$String* AuthTime::toString() {
	$useLocalObjectStack();
	return $String::format("%d/%06d/----/%s"_s, $$new($ObjectArray, {
		$($Integer::valueOf(this->ctime)),
		$($Integer::valueOf(this->cusec)),
		this->client
	}));
}

$String* AuthTime::readStringWithLength($SeekableByteChannel* chan) {
	$useLocalObjectStack();
	$var($ByteBuffer, bb, $ByteBuffer::allocate(4));
	$nc(bb)->order($($ByteOrder::nativeOrder()));
	$nc(chan)->read(bb);
	bb->flip();
	int32_t len = bb->getInt();
	if (len > 1024) {
		$throwNew($IOException, "Invalid string length"_s);
	}
	$assign(bb, $ByteBuffer::allocate(len));
	if (chan->read(bb) != len) {
		$throwNew($IOException, "Not enough string"_s);
	}
	$var($bytes, data, $cast($bytes, $nc(bb)->array()));
	$init($StandardCharsets);
	return ($nc(data)->get(len - 1) == 0) ? $new($String, data, 0, len - 1, $StandardCharsets::UTF_8) : $new($String, data, $StandardCharsets::UTF_8);
}

AuthTime* AuthTime::readFrom($SeekableByteChannel* chan) {
	$useLocalObjectStack();
	$var($String, client, readStringWithLength(chan));
	$var($String, server, readStringWithLength(chan));
	$var($ByteBuffer, bb, $ByteBuffer::allocate(8));
	$nc(chan)->read(bb);
	$nc(bb)->order($($ByteOrder::nativeOrder()));
	int32_t cusec = bb->getInt(0);
	int32_t ctime = bb->getInt(4);
	if ($nc(client)->isEmpty()) {
		$var($StringTokenizer, st, $new($StringTokenizer, server, " :"_s));
		if (st->countTokens() != 6) {
			$throwNew($IOException, "Incorrect rcache style"_s);
		}
		$var($String, hashAlg, st->nextToken());
		$var($String, hash, st->nextToken());
		st->nextToken();
		$assign(client, st->nextToken());
		st->nextToken();
		$assign(server, st->nextToken());
		return $new($AuthTimeWithHash, client, server, ctime, cusec, hashAlg, hash);
	} else {
		return $new(AuthTime, client, server, ctime, cusec);
	}
}

$bytes* AuthTime::encode0($String* cstring, $String* sstring) {
	$useLocalObjectStack();
	$init($StandardCharsets);
	$var($bytes, c, $nc(cstring)->getBytes($StandardCharsets::UTF_8));
	;
	$var($bytes, s, $nc(sstring)->getBytes($StandardCharsets::UTF_8));
	;
	$var($bytes, zero, $new($bytes, 1));
	int32_t len = 4 + c->length + 1 + 4 + s->length + 1 + 4 + 4;
	$var($ByteBuffer, bb, $$nc($ByteBuffer::allocate(len))->order($($ByteOrder::nativeOrder())));
	$$nc($$nc($$nc($$nc($$nc($$nc($$nc($nc(bb)->putInt(c->length + 1))->put(c))->put(zero))->putInt(s->length + 1))->put(s))->put(zero))->putInt(this->cusec))->putInt(this->ctime);
	return $cast($bytes, bb->array());
}

$bytes* AuthTime::encode(bool withHash) {
	return encode0(this->client, this->server);
}

AuthTime::AuthTime() {
}

$Class* AuthTime::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ctime", "I", nullptr, $FINAL, $field(AuthTime, ctime)},
		{"cusec", "I", nullptr, $FINAL, $field(AuthTime, cusec)},
		{"client", "Ljava/lang/String;", nullptr, $FINAL, $field(AuthTime, client)},
		{"server", "Ljava/lang/String;", nullptr, $FINAL, $field(AuthTime, server)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(AuthTime, init$, void, $String*, $String*, int32_t, int32_t)},
		{"encode", "(Z)[B", nullptr, $PUBLIC, $virtualMethod(AuthTime, encode, $bytes*, bool)},
		{"encode0", "(Ljava/lang/String;Ljava/lang/String;)[B", nullptr, $PROTECTED, $virtualMethod(AuthTime, encode0, $bytes*, $String*, $String*)},
		{"readFrom", "(Ljava/nio/channels/SeekableByteChannel;)Lsun/security/krb5/internal/rcache/AuthTime;", nullptr, $PUBLIC | $STATIC, $staticMethod(AuthTime, readFrom, AuthTime*, $SeekableByteChannel*), "java.io.IOException"},
		{"readStringWithLength", "(Ljava/nio/channels/SeekableByteChannel;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(AuthTime, readStringWithLength, $String*, $SeekableByteChannel*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AuthTime, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.rcache.AuthTime",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthTime, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuthTime);
	});
	return class$;
}

$Class* AuthTime::class$ = nullptr;

				} // rcache
			} // internal
		} // krb5
	} // security
} // sun