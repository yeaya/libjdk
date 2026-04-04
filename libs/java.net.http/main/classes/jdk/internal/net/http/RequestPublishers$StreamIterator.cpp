#include <jdk/internal/net/http/RequestPublishers$StreamIterator.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/RequestPublishers.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Supplier = ::java::util::function::Supplier;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class RequestPublishers$StreamIterator$$Lambda$getBuffer : public $Supplier {
	$class(RequestPublishers$StreamIterator$$Lambda$getBuffer, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($Utils::getBuffer());
	}
};
$Class* RequestPublishers$StreamIterator$$Lambda$getBuffer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RequestPublishers$StreamIterator$$Lambda$getBuffer, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$StreamIterator$$Lambda$getBuffer, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.RequestPublishers$StreamIterator$$Lambda$getBuffer",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(RequestPublishers$StreamIterator$$Lambda$getBuffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$StreamIterator$$Lambda$getBuffer);
	});
	return class$;
}
$Class* RequestPublishers$StreamIterator$$Lambda$getBuffer::class$ = nullptr;

void RequestPublishers$StreamIterator::init$($InputStream* is) {
	RequestPublishers$StreamIterator::init$(is, $$new(RequestPublishers$StreamIterator$$Lambda$getBuffer));
}

void RequestPublishers$StreamIterator::init$($InputStream* is, $Supplier* bufSupplier) {
	this->need2Read = true;
	$set(this, is, is);
	$set(this, bufSupplier, bufSupplier);
}

int32_t RequestPublishers$StreamIterator::read() {
	if (this->eof) {
		return -1;
	}
	$set(this, nextBuffer, $cast($ByteBuffer, $nc(this->bufSupplier)->get()));
	$nc(this->nextBuffer)->clear();
	$var($bytes, buf, $cast($bytes, $nc(this->nextBuffer)->array()));
	int32_t offset = $nc(this->nextBuffer)->arrayOffset();
	int32_t cap = $nc(this->nextBuffer)->capacity();
	int32_t n = $nc(this->is)->read(buf, offset, cap);
	if (n == -1) {
		this->eof = true;
		return -1;
	}
	$nc(this->nextBuffer)->limit(n);
	$nc(this->nextBuffer)->position(0);
	return n;
}

void RequestPublishers$StreamIterator::closeStream() {
	try {
		$nc(this->is)->close();
	} catch ($IOException& e) {
		$throwNew($UncheckedIOException, e);
	}
}

bool RequestPublishers$StreamIterator::hasNext() {
	$synchronized(this) {
		if (this->need2Read) {
			$var($Throwable, var$0, nullptr);
			try {
				try {
					this->haveNext = read() != -1;
					if (this->haveNext) {
						this->need2Read = false;
					}
				} catch ($IOException& e) {
					this->haveNext = false;
					this->need2Read = false;
					$throwNew($UncheckedIOException, e);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (!this->haveNext) {
					closeStream();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		return this->haveNext;
	}
}

$Object* RequestPublishers$StreamIterator::next() {
	$synchronized(this) {
		if (!hasNext()) {
			$throwNew($NoSuchElementException);
		}
		this->need2Read = true;
		return $of(this->nextBuffer);
	}
}

RequestPublishers$StreamIterator::RequestPublishers$StreamIterator() {
}

$Class* RequestPublishers$StreamIterator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.RequestPublishers$StreamIterator$$Lambda$getBuffer")) {
			return RequestPublishers$StreamIterator$$Lambda$getBuffer::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"is", "Ljava/io/InputStream;", nullptr, $FINAL, $field(RequestPublishers$StreamIterator, is)},
		{"bufSupplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<+Ljava/nio/ByteBuffer;>;", $FINAL, $field(RequestPublishers$StreamIterator, bufSupplier)},
		{"eof", "Z", nullptr, $PRIVATE | $VOLATILE, $field(RequestPublishers$StreamIterator, eof)},
		{"nextBuffer", "Ljava/nio/ByteBuffer;", nullptr, $VOLATILE, $field(RequestPublishers$StreamIterator, nextBuffer)},
		{"need2Read", "Z", nullptr, $VOLATILE, $field(RequestPublishers$StreamIterator, need2Read)},
		{"haveNext", "Z", nullptr, $VOLATILE, $field(RequestPublishers$StreamIterator, haveNext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(RequestPublishers$StreamIterator, init$, void, $InputStream*)},
		{"<init>", "(Ljava/io/InputStream;Ljava/util/function/Supplier;)V", "(Ljava/io/InputStream;Ljava/util/function/Supplier<+Ljava/nio/ByteBuffer;>;)V", 0, $method(RequestPublishers$StreamIterator, init$, void, $InputStream*, $Supplier*)},
		{"closeStream", "()V", nullptr, $PRIVATE, $method(RequestPublishers$StreamIterator, closeStream, void)},
		{"hasNext", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(RequestPublishers$StreamIterator, hasNext, bool)},
		{"next", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(RequestPublishers$StreamIterator, next, $Object*)},
		{"read", "()I", nullptr, $PRIVATE, $method(RequestPublishers$StreamIterator, read, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RequestPublishers$StreamIterator", "jdk.internal.net.http.RequestPublishers", "StreamIterator", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.RequestPublishers$StreamIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/ByteBuffer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.RequestPublishers"
	};
	$loadClass(RequestPublishers$StreamIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$StreamIterator);
	});
	return class$;
}

$Class* RequestPublishers$StreamIterator::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk