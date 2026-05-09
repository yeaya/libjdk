#include <jdk/internal/net/http/SocketTube$SliceBufferSource.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/SocketTube.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Supplier = ::java::util::function::Supplier;
using $SocketTube = ::jdk::internal::net::http::SocketTube;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class SocketTube$SliceBufferSource$$Lambda$getBuffer : public $Supplier {
	$class(SocketTube$SliceBufferSource$$Lambda$getBuffer, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		return $of($Utils::getBuffer());
	}
};
$Class* SocketTube$SliceBufferSource$$Lambda$getBuffer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SocketTube$SliceBufferSource$$Lambda$getBuffer, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SocketTube$SliceBufferSource$$Lambda$getBuffer, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.SocketTube$SliceBufferSource$$Lambda$getBuffer",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(SocketTube$SliceBufferSource$$Lambda$getBuffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$SliceBufferSource$$Lambda$getBuffer);
	});
	return class$;
}
$Class* SocketTube$SliceBufferSource$$Lambda$getBuffer::class$ = nullptr;

bool SocketTube$SliceBufferSource::$assertionsDisabled = false;

void SocketTube$SliceBufferSource::init$() {
	SocketTube$SliceBufferSource::init$($$new(SocketTube$SliceBufferSource$$Lambda$getBuffer));
}

void SocketTube$SliceBufferSource::init$($Supplier* factory) {
	$set(this, factory, $cast($Supplier, $Objects::requireNonNull(factory)));
}

$ByteBuffer* SocketTube$SliceBufferSource::getBuffer() {
	$var($ByteBuffer, buf, this->current);
	$assign(buf, (buf == nullptr || !buf->hasRemaining()) ? ($set(this, current, $cast($ByteBuffer, $nc(this->factory)->get()))) : buf);
	if (!SocketTube$SliceBufferSource::$assertionsDisabled && !$nc(buf)->hasRemaining()) {
		$throwNew($AssertionError);
	}
	return buf;
}

$List* SocketTube$SliceBufferSource::append($List* list, $ByteBuffer* buf, int32_t start) {
	$useLocalObjectStack();
	int32_t limit = $nc(buf)->limit();
	buf->limit(buf->position());
	buf->position(start);
	$var($ByteBuffer, slice, buf->slice());
	buf->position(buf->limit());
	buf->limit(limit);
	return $SocketTube::listOf(list, $($nc(slice)->asReadOnlyBuffer()));
}

void SocketTube$SliceBufferSource::clinit$($Class* clazz) {
	$load($SocketTube);
	SocketTube$SliceBufferSource::$assertionsDisabled = !$SocketTube::class$->desiredAssertionStatus();
}

SocketTube$SliceBufferSource::SocketTube$SliceBufferSource() {
}

$Class* SocketTube$SliceBufferSource::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.SocketTube$SliceBufferSource$$Lambda$getBuffer")) {
			return SocketTube$SliceBufferSource$$Lambda$getBuffer::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocketTube$SliceBufferSource, $assertionsDisabled)},
		{"factory", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<Ljava/nio/ByteBuffer;>;", $PRIVATE | $FINAL, $field(SocketTube$SliceBufferSource, factory)},
		{"current", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $VOLATILE, $field(SocketTube$SliceBufferSource, current)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SocketTube$SliceBufferSource, init$, void)},
		{"<init>", "(Ljava/util/function/Supplier;)V", "(Ljava/util/function/Supplier<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $method(SocketTube$SliceBufferSource, init$, void, $Supplier*)},
		{"append", "(Ljava/util/List;Ljava/nio/ByteBuffer;I)Ljava/util/List;", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;Ljava/nio/ByteBuffer;I)Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PUBLIC | $FINAL, $virtualMethod(SocketTube$SliceBufferSource, append, $List*, $List*, $ByteBuffer*, int32_t)},
		{"getBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(SocketTube$SliceBufferSource, getBuffer, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.SocketTube$SliceBufferSource", "jdk.internal.net.http.SocketTube", "SliceBufferSource", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.net.http.SocketTube$BufferSource", "jdk.internal.net.http.SocketTube", "BufferSource", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.SocketTube$SliceBufferSource",
		"java.lang.Object",
		"jdk.internal.net.http.SocketTube$BufferSource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.SocketTube"
	};
	$loadClass(SocketTube$SliceBufferSource, name, initialize, &classInfo$$, SocketTube$SliceBufferSource::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$SliceBufferSource);
	});
	return class$;
}

$Class* SocketTube$SliceBufferSource::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk