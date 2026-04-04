#include <jdk/internal/net/http/hpack/HPACK.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/net/http/hpack/HPACK$BufferUpdateConsumer.h>
#include <jdk/internal/net/http/hpack/HPACK$Logger$Level.h>
#include <jdk/internal/net/http/hpack/HPACK$Logger.h>
#include <jdk/internal/net/http/hpack/HPACK$RootLogger.h>
#include <jcpp.h>

#undef DEBUG
#undef EXTRA
#undef HPACK
#undef INFO
#undef LOGGER
#undef NONE
#undef NORMAL
#undef PROPERTY

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Map = ::java::util::Map;
using $Supplier = ::java::util::function::Supplier;
using $Collectors = ::java::util::stream::Collectors;
using $HPACK$BufferUpdateConsumer = ::jdk::internal::net::http::hpack::HPACK$BufferUpdateConsumer;
using $HPACK$Logger = ::jdk::internal::net::http::hpack::HPACK$Logger;
using $HPACK$Logger$Level = ::jdk::internal::net::http::hpack::HPACK$Logger$Level;
using $HPACK$RootLogger = ::jdk::internal::net::http::hpack::HPACK$RootLogger;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

class HPACK$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(HPACK$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* PROPERTY) {
		$set(this, PROPERTY, PROPERTY);
	}
	virtual $Object* run() override {
		 return $of(HPACK::lambda$static$0(PROPERTY));
	}
	$String* PROPERTY = nullptr;
};
$Class* HPACK$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC, $field(HPACK$$Lambda$lambda$static$0, PROPERTY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HPACK$$Lambda$lambda$static$0, init$, void, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HPACK$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.HPACK$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HPACK$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HPACK$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* HPACK$$Lambda$lambda$static$0::class$ = nullptr;

class HPACK$$Lambda$lambda$static$1$1 : public $Supplier {
	$class(HPACK$$Lambda$lambda$static$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* PROPERTY, $String* value) {
		$set(this, PROPERTY, PROPERTY);
		$set(this, value, value);
	}
	virtual $Object* get() override {
		 return $of(HPACK::lambda$static$1(PROPERTY, value));
	}
	$String* PROPERTY = nullptr;
	$String* value = nullptr;
};
$Class* HPACK$$Lambda$lambda$static$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC, $field(HPACK$$Lambda$lambda$static$1$1, PROPERTY)},
		{"value", "Ljava/lang/String;", nullptr, $PUBLIC, $field(HPACK$$Lambda$lambda$static$1$1, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HPACK$$Lambda$lambda$static$1$1, init$, void, $String*, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HPACK$$Lambda$lambda$static$1$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.HPACK$$Lambda$lambda$static$1$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HPACK$$Lambda$lambda$static$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HPACK$$Lambda$lambda$static$1$1);
	});
	return class$;
}
$Class* HPACK$$Lambda$lambda$static$1$1::class$ = nullptr;

class HPACK$$Lambda$lambda$static$2$2 : public $Supplier {
	$class(HPACK$$Lambda$lambda$static$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$($HPACK$Logger$Level* l) {
		$set(this, l, l);
	}
	virtual $Object* get() override {
		 return $of(HPACK::lambda$static$2(l));
	}
	$HPACK$Logger$Level* l = nullptr;
};
$Class* HPACK$$Lambda$lambda$static$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"l", "Ljdk/internal/net/http/hpack/HPACK$Logger$Level;", nullptr, $PUBLIC, $field(HPACK$$Lambda$lambda$static$2$2, l)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/HPACK$Logger$Level;)V", nullptr, $PUBLIC, $method(HPACK$$Lambda$lambda$static$2$2, init$, void, $HPACK$Logger$Level*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HPACK$$Lambda$lambda$static$2$2, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.HPACK$$Lambda$lambda$static$2$2",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HPACK$$Lambda$lambda$static$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HPACK$$Lambda$lambda$static$2$2);
	});
	return class$;
}
$Class* HPACK$$Lambda$lambda$static$2$2::class$ = nullptr;

bool HPACK::$assertionsDisabled = false;
$HPACK$RootLogger* HPACK::LOGGER = nullptr;
$Map* HPACK::logLevels = nullptr;

$HPACK$Logger* HPACK::getLogger() {
	$init(HPACK);
	return HPACK::LOGGER;
}

void HPACK::init$() {
}

int32_t HPACK::read($ByteBuffer* source, int64_t buffer, int32_t bufferLen, $HPACK$BufferUpdateConsumer* consumer) {
	$init(HPACK);
	int32_t nBytes = $Math::min((64 - bufferLen) >> 3, $nc(source)->remaining());
	switch (nBytes) {
	case 0:
		break;
	case 3:
		buffer |= ($sl(source->get() & (int64_t)0xff, 56 - bufferLen));
		bufferLen += 8;
	case 2:
		buffer |= ($sl(source->get() & (int64_t)0xff, 56 - bufferLen));
		bufferLen += 8;
	case 1:
		buffer |= ($sl(source->get() & (int64_t)0xff, 56 - bufferLen));
		bufferLen += 8;
		$nc(consumer)->accept(buffer, bufferLen);
		break;
	case 7:
		buffer |= ($sl(source->get() & (int64_t)0xff, 56 - bufferLen));
		bufferLen += 8;
	case 6:
		buffer |= ($sl(source->get() & (int64_t)0xff, 56 - bufferLen));
		bufferLen += 8;
	case 5:
		buffer |= ($sl(source->get() & (int64_t)0xff, 56 - bufferLen));
		bufferLen += 8;
	case 4:
		buffer |= ($sl(source->getInt() & (int64_t)0xffffffff, 32 - bufferLen));
		bufferLen += 32;
		$nc(consumer)->accept(buffer, bufferLen);
		break;
	case 8:
		buffer = source->getLong();
		bufferLen = 64;
		$nc(consumer)->accept(buffer, bufferLen);
		break;
	default:
		$throwNew($InternalError, $($String::valueOf(nBytes)));
	}
	return nBytes;
}

int32_t HPACK::write(int64_t buffer, int32_t bufferLen, $HPACK$BufferUpdateConsumer* consumer, $ByteBuffer* destination) {
	$init(HPACK);
	int32_t nBytes = $Math::min(bufferLen >> 3, $nc(destination)->remaining());
	switch (nBytes) {
	case 0:
		break;
	case 3:
		destination->put((int8_t)((int64_t)((uint64_t)buffer >> 56)));
		buffer <<= 8;
		bufferLen -= 8;
	case 2:
		destination->put((int8_t)((int64_t)((uint64_t)buffer >> 56)));
		buffer <<= 8;
		bufferLen -= 8;
	case 1:
		destination->put((int8_t)((int64_t)((uint64_t)buffer >> 56)));
		buffer <<= 8;
		bufferLen -= 8;
		$nc(consumer)->accept(buffer, bufferLen);
		break;
	case 7:
		destination->put((int8_t)((int64_t)((uint64_t)buffer >> 56)));
		buffer <<= 8;
		bufferLen -= 8;
	case 6:
		destination->put((int8_t)((int64_t)((uint64_t)buffer >> 56)));
		buffer <<= 8;
		bufferLen -= 8;
	case 5:
		destination->put((int8_t)((int64_t)((uint64_t)buffer >> 56)));
		buffer <<= 8;
		bufferLen -= 8;
	case 4:
		destination->putInt((int32_t)((int64_t)((uint64_t)buffer >> 32)));
		buffer <<= 32;
		bufferLen -= 32;
		$nc(consumer)->accept(buffer, bufferLen);
		break;
	case 8:
		destination->putLong(buffer);
		buffer = 0;
		bufferLen = 0;
		$nc(consumer)->accept(buffer, bufferLen);
		break;
	default:
		$throwNew($InternalError, $($String::valueOf(nBytes)));
	}
	return nBytes;
}

int32_t HPACK::bytesForBits(int32_t n) {
	$init(HPACK);
	if (!HPACK::$assertionsDisabled && !((n / 8 + (n % 8 != 0 ? 1 : 0)) == (n + 7) / 8 && (n + 7) / 8 == ((n + 7) >> 3))) {
		$throwNew($AssertionError, n);
	}
	return (n + 7) >> 3;
}

$String* HPACK::lambda$static$2($HPACK$Logger$Level* l) {
	$init(HPACK);
	return $String::format("logging level %s"_s, $$new($ObjectArray, {l}));
}

$String* HPACK::lambda$static$1($String* PROPERTY, $String* value) {
	$init(HPACK);
	$useLocalObjectStack();
	return $String::format("%s value \'%s\' not recognized (use %s); logging disabled"_s, $$new($ObjectArray, {
		PROPERTY,
		value,
		$($$nc($$nc($nc(HPACK::logLevels)->keySet())->stream())->collect($($Collectors::joining(", "_s))))
	}));
}

$String* HPACK::lambda$static$0($String* PROPERTY) {
	$init(HPACK);
	return $System::getProperty(PROPERTY);
}

void HPACK::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	HPACK::$assertionsDisabled = !HPACK::class$->desiredAssertionStatus();
	$init($HPACK$Logger$Level);
	$assignStatic(HPACK::logLevels, $Map::of("NORMAL"_s, $HPACK$Logger$Level::NORMAL, "EXTRA"_s, $HPACK$Logger$Level::EXTRA));
	{
		$var($String, PROPERTY, "jdk.internal.httpclient.hpack.log.level"_s);
		$var($String, value, $cast($String, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(HPACK$$Lambda$lambda$static$0, PROPERTY)))));
		if (value == nullptr) {
			$assignStatic(HPACK::LOGGER, $new($HPACK$RootLogger, $HPACK$Logger$Level::NONE));
		} else {
			$var($String, upperCasedValue, value->toUpperCase());
			$HPACK$Logger$Level* l = $cast($HPACK$Logger$Level, $nc(HPACK::logLevels)->get(upperCasedValue));
			if (l == nullptr) {
				$assignStatic(HPACK::LOGGER, $new($HPACK$RootLogger, $HPACK$Logger$Level::NONE));
				$init($System$Logger$Level);
				HPACK::LOGGER->log($System$Logger$Level::INFO, $$new(HPACK$$Lambda$lambda$static$1$1, PROPERTY, value));
			} else {
				$assignStatic(HPACK::LOGGER, $new($HPACK$RootLogger, l));
				$init($System$Logger$Level);
				HPACK::LOGGER->log($System$Logger$Level::DEBUG, $$new(HPACK$$Lambda$lambda$static$2$2, l));
			}
		}
	}
}

HPACK::HPACK() {
}

$Class* HPACK::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.hpack.HPACK$$Lambda$lambda$static$0")) {
			return HPACK$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.HPACK$$Lambda$lambda$static$1$1")) {
			return HPACK$$Lambda$lambda$static$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.HPACK$$Lambda$lambda$static$2$2")) {
			return HPACK$$Lambda$lambda$static$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HPACK, $assertionsDisabled)},
		{"LOGGER", "Ljdk/internal/net/http/hpack/HPACK$RootLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HPACK, LOGGER)},
		{"logLevels", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljdk/internal/net/http/hpack/HPACK$Logger$Level;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HPACK, logLevels)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HPACK, init$, void)},
		{"bytesForBits", "(I)I", nullptr, $STATIC, $staticMethod(HPACK, bytesForBits, int32_t, int32_t)},
		{"getLogger", "()Ljdk/internal/net/http/hpack/HPACK$Logger;", nullptr, $PUBLIC | $STATIC, $staticMethod(HPACK, getLogger, $HPACK$Logger*)},
		{"lambda$static$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HPACK, lambda$static$0, $String*, $String*)},
		{"lambda$static$1", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HPACK, lambda$static$1, $String*, $String*, $String*)},
		{"lambda$static$2", "(Ljdk/internal/net/http/hpack/HPACK$Logger$Level;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HPACK, lambda$static$2, $String*, $HPACK$Logger$Level*)},
		{"read", "(Ljava/nio/ByteBuffer;JILjdk/internal/net/http/hpack/HPACK$BufferUpdateConsumer;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(HPACK, read, int32_t, $ByteBuffer*, int64_t, int32_t, $HPACK$BufferUpdateConsumer*)},
		{"write", "(JILjdk/internal/net/http/hpack/HPACK$BufferUpdateConsumer;Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(HPACK, write, int32_t, int64_t, int32_t, $HPACK$BufferUpdateConsumer*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.HPACK$BufferUpdateConsumer", "jdk.internal.net.http.hpack.HPACK", "BufferUpdateConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.net.http.hpack.HPACK$RootLogger", "jdk.internal.net.http.hpack.HPACK", "RootLogger", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.HPACK$Logger", "jdk.internal.net.http.hpack.HPACK", "Logger", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.HPACK",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.HPACK$BufferUpdateConsumer,jdk.internal.net.http.hpack.HPACK$RootLogger,jdk.internal.net.http.hpack.HPACK$Logger,jdk.internal.net.http.hpack.HPACK$Logger$Level"
	};
	$loadClass(HPACK, name, initialize, &classInfo$$, HPACK::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HPACK);
	});
	return class$;
}

$Class* HPACK::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk