#include <jdk/internal/net/http/hpack/SimpleHeaderTable.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/hpack/HPACK$Logger$Level.h>
#include <jdk/internal/net/http/hpack/HPACK$Logger.h>
#include <jdk/internal/net/http/hpack/SimpleHeaderTable$CircularBuffer.h>
#include <jdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField.h>
#include <jcpp.h>

#undef ENTRY_SIZE
#undef EXTRA
#undef NORMAL
#undef STATIC_TABLE_LENGTH

using $SimpleHeaderTable$HeaderFieldArray = $Array<::jdk::internal::net::http::hpack::SimpleHeaderTable$HeaderField>;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $Supplier = ::java::util::function::Supplier;
using $HPACK$Logger = ::jdk::internal::net::http::hpack::HPACK$Logger;
using $HPACK$Logger$Level = ::jdk::internal::net::http::hpack::HPACK$Logger$Level;
using $SimpleHeaderTable$CircularBuffer = ::jdk::internal::net::http::hpack::SimpleHeaderTable$CircularBuffer;
using $SimpleHeaderTable$HeaderField = ::jdk::internal::net::http::hpack::SimpleHeaderTable$HeaderField;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

class SimpleHeaderTable$$Lambda$lambda$put$0 : public $Supplier {
	$class(SimpleHeaderTable$$Lambda$lambda$put$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($SimpleHeaderTable$HeaderField* h) {
		$set(this, h, h);
	}
	virtual $Object* get() override {
		 return $of(SimpleHeaderTable::lambda$put$0(h));
	}
	$SimpleHeaderTable$HeaderField* h = nullptr;
};
$Class* SimpleHeaderTable$$Lambda$lambda$put$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"h", "Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;", nullptr, $PUBLIC, $field(SimpleHeaderTable$$Lambda$lambda$put$0, h)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;)V", nullptr, $PUBLIC, $method(SimpleHeaderTable$$Lambda$lambda$put$0, init$, void, $SimpleHeaderTable$HeaderField*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleHeaderTable$$Lambda$lambda$put$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$put$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleHeaderTable$$Lambda$lambda$put$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleHeaderTable$$Lambda$lambda$put$0);
	});
	return class$;
}
$Class* SimpleHeaderTable$$Lambda$lambda$put$0::class$ = nullptr;

class SimpleHeaderTable$$Lambda$lambda$put$1$1 : public $Supplier {
	$class(SimpleHeaderTable$$Lambda$lambda$put$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$($SimpleHeaderTable$HeaderField* h, int32_t entrySize) {
		$set(this, h, h);
		this->entrySize = entrySize;
	}
	virtual $Object* get() override {
		 return $of(SimpleHeaderTable::lambda$put$1(h, entrySize));
	}
	$SimpleHeaderTable$HeaderField* h = nullptr;
	int32_t entrySize = 0;
};
$Class* SimpleHeaderTable$$Lambda$lambda$put$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"h", "Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;", nullptr, $PUBLIC, $field(SimpleHeaderTable$$Lambda$lambda$put$1$1, h)},
		{"entrySize", "I", nullptr, $PUBLIC, $field(SimpleHeaderTable$$Lambda$lambda$put$1$1, entrySize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;I)V", nullptr, $PUBLIC, $method(SimpleHeaderTable$$Lambda$lambda$put$1$1, init$, void, $SimpleHeaderTable$HeaderField*, int32_t)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleHeaderTable$$Lambda$lambda$put$1$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$put$1$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleHeaderTable$$Lambda$lambda$put$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleHeaderTable$$Lambda$lambda$put$1$1);
	});
	return class$;
}
$Class* SimpleHeaderTable$$Lambda$lambda$put$1$1::class$ = nullptr;

class SimpleHeaderTable$$Lambda$lambda$put$2$2 : public $Supplier {
	$class(SimpleHeaderTable$$Lambda$lambda$put$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$(SimpleHeaderTable* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$put$2());
	}
	SimpleHeaderTable* inst$ = nullptr;
};
$Class* SimpleHeaderTable$$Lambda$lambda$put$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SimpleHeaderTable$$Lambda$lambda$put$2$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable;)V", nullptr, $PUBLIC, $method(SimpleHeaderTable$$Lambda$lambda$put$2$2, init$, void, SimpleHeaderTable*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleHeaderTable$$Lambda$lambda$put$2$2, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$put$2$2",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleHeaderTable$$Lambda$lambda$put$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleHeaderTable$$Lambda$lambda$put$2$2);
	});
	return class$;
}
$Class* SimpleHeaderTable$$Lambda$lambda$put$2$2::class$ = nullptr;

class SimpleHeaderTable$$Lambda$lambda$put$3$3 : public $Supplier {
	$class(SimpleHeaderTable$$Lambda$lambda$put$3$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($SimpleHeaderTable$HeaderField* h) {
		$set(this, h, h);
	}
	virtual $Object* get() override {
		 return $of(SimpleHeaderTable::lambda$put$3(h));
	}
	$SimpleHeaderTable$HeaderField* h = nullptr;
};
$Class* SimpleHeaderTable$$Lambda$lambda$put$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"h", "Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;", nullptr, $PUBLIC, $field(SimpleHeaderTable$$Lambda$lambda$put$3$3, h)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;)V", nullptr, $PUBLIC, $method(SimpleHeaderTable$$Lambda$lambda$put$3$3, init$, void, $SimpleHeaderTable$HeaderField*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleHeaderTable$$Lambda$lambda$put$3$3, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$put$3$3",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleHeaderTable$$Lambda$lambda$put$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleHeaderTable$$Lambda$lambda$put$3$3);
	});
	return class$;
}
$Class* SimpleHeaderTable$$Lambda$lambda$put$3$3::class$ = nullptr;

class SimpleHeaderTable$$Lambda$lambda$put$4$4 : public $Supplier {
	$class(SimpleHeaderTable$$Lambda$lambda$put$4$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$($SimpleHeaderTable$HeaderField* h) {
		$set(this, h, h);
	}
	virtual $Object* get() override {
		 return $of(SimpleHeaderTable::lambda$put$4(h));
	}
	$SimpleHeaderTable$HeaderField* h = nullptr;
};
$Class* SimpleHeaderTable$$Lambda$lambda$put$4$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"h", "Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;", nullptr, $PUBLIC, $field(SimpleHeaderTable$$Lambda$lambda$put$4$4, h)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;)V", nullptr, $PUBLIC, $method(SimpleHeaderTable$$Lambda$lambda$put$4$4, init$, void, $SimpleHeaderTable$HeaderField*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleHeaderTable$$Lambda$lambda$put$4$4, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$put$4$4",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleHeaderTable$$Lambda$lambda$put$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleHeaderTable$$Lambda$lambda$put$4$4);
	});
	return class$;
}
$Class* SimpleHeaderTable$$Lambda$lambda$put$4$4::class$ = nullptr;

class SimpleHeaderTable$$Lambda$toString$5 : public $Supplier {
	$class(SimpleHeaderTable$$Lambda$toString$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$(SimpleHeaderTable* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	SimpleHeaderTable* inst$ = nullptr;
};
$Class* SimpleHeaderTable$$Lambda$toString$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SimpleHeaderTable$$Lambda$toString$5, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable;)V", nullptr, $PUBLIC, $method(SimpleHeaderTable$$Lambda$toString$5, init$, void, SimpleHeaderTable*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleHeaderTable$$Lambda$toString$5, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$toString$5",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleHeaderTable$$Lambda$toString$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleHeaderTable$$Lambda$toString$5);
	});
	return class$;
}
$Class* SimpleHeaderTable$$Lambda$toString$5::class$ = nullptr;

class SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6 : public $Supplier {
	$class(SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$($SimpleHeaderTable$HeaderField* f, int32_t s) {
		$set(this, f, f);
		this->s = s;
	}
	virtual $Object* get() override {
		 return $of(SimpleHeaderTable::lambda$evictEntry$5(f, s));
	}
	$SimpleHeaderTable$HeaderField* f = nullptr;
	int32_t s = 0;
};
$Class* SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;", nullptr, $PUBLIC, $field(SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6, f)},
		{"s", "I", nullptr, $PUBLIC, $field(SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;I)V", nullptr, $PUBLIC, $method(SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6, init$, void, $SimpleHeaderTable$HeaderField*, int32_t)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6);
	});
	return class$;
}
$Class* SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6::class$ = nullptr;

$List* SimpleHeaderTable::staticTable = nullptr;
int32_t SimpleHeaderTable::STATIC_TABLE_LENGTH = 0;

void SimpleHeaderTable::init$(int32_t maxSize, $HPACK$Logger* logger) {
	$set(this, buffer, $new($SimpleHeaderTable$CircularBuffer, 0));
	$set(this, logger, logger);
	setMaxSize(maxSize);
}

int32_t SimpleHeaderTable::size() {
	return this->size$;
}

int32_t SimpleHeaderTable::maxSize() {
	return this->maxSize$;
}

int32_t SimpleHeaderTable::length() {
	return SimpleHeaderTable::STATIC_TABLE_LENGTH + this->buffer->size;
}

$SimpleHeaderTable$HeaderField* SimpleHeaderTable::get(int32_t index) {
	checkIndex(index);
	if (index <= SimpleHeaderTable::STATIC_TABLE_LENGTH) {
		return $cast($SimpleHeaderTable$HeaderField, $nc(SimpleHeaderTable::staticTable)->get(index));
	} else {
		return $cast($SimpleHeaderTable$HeaderField, this->buffer->get(index - SimpleHeaderTable::STATIC_TABLE_LENGTH - 1));
	}
}

void SimpleHeaderTable::put($CharSequence* name, $CharSequence* value) {
	$useLocalObjectStack();
	$var($String, var$0, $nc(name)->toString());
	put($$new($SimpleHeaderTable$HeaderField, var$0, $($nc(value)->toString())));
}

void SimpleHeaderTable::put($SimpleHeaderTable$HeaderField* h) {
	$useLocalObjectStack();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(SimpleHeaderTable$$Lambda$lambda$put$0, h));
	}
	int32_t entrySize = sizeOf(h);
	if (this->logger->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(SimpleHeaderTable$$Lambda$lambda$put$1$1, h, entrySize));
	}
	while (entrySize > this->maxSize$ - this->size$ && this->size$ != 0) {
		if (this->logger->isLoggable($HPACK$Logger$Level::EXTRA)) {
			this->logger->log($HPACK$Logger$Level::EXTRA, $$new(SimpleHeaderTable$$Lambda$lambda$put$2$2, this));
		}
		evictEntry();
	}
	if (entrySize > this->maxSize$ - this->size$) {
		if (this->logger->isLoggable($HPACK$Logger$Level::EXTRA)) {
			this->logger->log($HPACK$Logger$Level::EXTRA, $$new(SimpleHeaderTable$$Lambda$lambda$put$3$3, h));
		}
		return;
	}
	this->size$ += entrySize;
	add(h);
	if (this->logger->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(SimpleHeaderTable$$Lambda$lambda$put$4$4, h));
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(SimpleHeaderTable$$Lambda$toString$5, this));
	}
}

void SimpleHeaderTable::setMaxSize(int32_t maxSize) {
	$useLocalObjectStack();
	if (maxSize < 0) {
		$throwNew($IllegalArgumentException, $$str({"maxSize >= 0: maxSize="_s, $$str(maxSize)}));
	}
	while (maxSize < this->size$ && this->size$ != 0) {
		evictEntry();
	}
	this->maxSize$ = maxSize;
	int32_t upperBound = $div(maxSize, SimpleHeaderTable::ENTRY_SIZE);
	this->buffer->resize(upperBound);
}

$SimpleHeaderTable$HeaderField* SimpleHeaderTable::evictEntry() {
	$useLocalObjectStack();
	$var($SimpleHeaderTable$HeaderField, f, remove());
	int32_t s = sizeOf(f);
	this->size$ -= s;
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6, f, s));
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(SimpleHeaderTable$$Lambda$toString$5, this));
	}
	return f;
}

$String* SimpleHeaderTable::toString() {
	$useLocalObjectStack();
	double used = this->maxSize$ == 0 ? 0 : 100 * (((double)this->size$) / this->maxSize$);
	return $String::format("dynamic length: %d, full length: %s, used space: %s/%s (%.1f%%)"_s, $$new($ObjectArray, {
		$($Integer::valueOf(this->buffer->size)),
		$($Integer::valueOf(length())),
		$($Integer::valueOf(this->size$)),
		$($Integer::valueOf(this->maxSize$)),
		$($Double::valueOf(used))
	}));
}

int32_t SimpleHeaderTable::checkIndex(int32_t index) {
	$useLocalObjectStack();
	int32_t len = length();
	if (index < 1 || index > len) {
		$throwNew($IndexOutOfBoundsException, $($String::format("1 <= index <= length(): index=%s, length()=%s"_s, $$new($ObjectArray, {
			$($Integer::valueOf(index)),
			$($Integer::valueOf(len))
		}))));
	}
	return index;
}

int32_t SimpleHeaderTable::sizeOf($SimpleHeaderTable$HeaderField* f) {
	int32_t var$0 = $nc($nc(f)->name)->length();
	return var$0 + $nc(f->value)->length() + SimpleHeaderTable::ENTRY_SIZE;
}

$String* SimpleHeaderTable::getStateString() {
	$useLocalObjectStack();
	if (this->size$ == 0) {
		return "empty."_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	for (int32_t i = 1, size = this->buffer->size; i <= size; ++i) {
		$var($SimpleHeaderTable$HeaderField, e, $cast($SimpleHeaderTable$HeaderField, this->buffer->get(i - 1)));
		b->append($($String::format("[%3d] (s = %3d) %s: %s\n"_s, $$new($ObjectArray, {
			$($Integer::valueOf(i)),
			$($Integer::valueOf(sizeOf(e))),
			$nc(e)->name,
			$nc(e)->value
		}))));
	}
	b->append($($String::format("      Table size:%4s"_s, $$new($ObjectArray, {$($Integer::valueOf(this->size$))}))));
	return b->toString();
}

void SimpleHeaderTable::add($SimpleHeaderTable$HeaderField* f) {
	this->buffer->add(f);
}

$SimpleHeaderTable$HeaderField* SimpleHeaderTable::remove() {
	return $cast($SimpleHeaderTable$HeaderField, this->buffer->remove());
}

$String* SimpleHeaderTable::lambda$evictEntry$5($SimpleHeaderTable$HeaderField* f, int32_t s) {
	$init(SimpleHeaderTable);
	$useLocalObjectStack();
	return $String::format("evicted entry (\'%s\', \'%s\') of size %s"_s, $$new($ObjectArray, {
		$nc(f)->name,
		$nc(f)->value,
		$($Integer::valueOf(s))
	}));
}

$String* SimpleHeaderTable::lambda$put$4($SimpleHeaderTable$HeaderField* h) {
	$init(SimpleHeaderTable);
	return $String::format("(\'%s, \'%s\') added"_s, $$new($ObjectArray, {
		$nc(h)->name,
		$nc(h)->value
	}));
}

$String* SimpleHeaderTable::lambda$put$3($SimpleHeaderTable$HeaderField* h) {
	$init(SimpleHeaderTable);
	return $String::format("not adding (\'%s, \'%s\'), too big"_s, $$new($ObjectArray, {
		$nc(h)->name,
		$nc(h)->value
	}));
}

$String* SimpleHeaderTable::lambda$put$2() {
	$useLocalObjectStack();
	return $String::format("insufficient space %s, must evict entry"_s, $$new($ObjectArray, {$($Integer::valueOf((this->maxSize$ - this->size$)))}));
}

$String* SimpleHeaderTable::lambda$put$1($SimpleHeaderTable$HeaderField* h, int32_t entrySize) {
	$init(SimpleHeaderTable);
	$useLocalObjectStack();
	return $String::format("size of (\'%s\', \'%s\') is %s"_s, $$new($ObjectArray, {
		$nc(h)->name,
		$nc(h)->value,
		$($Integer::valueOf(entrySize))
	}));
}

$String* SimpleHeaderTable::lambda$put$0($SimpleHeaderTable$HeaderField* h) {
	$init(SimpleHeaderTable);
	return $String::format("adding (\'%s\', \'%s\')"_s, $$new($ObjectArray, {
		$nc(h)->name,
		$nc(h)->value
	}));
}

void SimpleHeaderTable::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(SimpleHeaderTable::staticTable, $List::of($$new($SimpleHeaderTable$HeaderFieldArray, {
		$$new($SimpleHeaderTable$HeaderField, ""_s),
		$$new($SimpleHeaderTable$HeaderField, ":authority"_s),
		$$new($SimpleHeaderTable$HeaderField, ":method"_s, "GET"_s),
		$$new($SimpleHeaderTable$HeaderField, ":method"_s, "POST"_s),
		$$new($SimpleHeaderTable$HeaderField, ":path"_s, "/"_s),
		$$new($SimpleHeaderTable$HeaderField, ":path"_s, "/index.html"_s),
		$$new($SimpleHeaderTable$HeaderField, ":scheme"_s, "http"_s),
		$$new($SimpleHeaderTable$HeaderField, ":scheme"_s, "https"_s),
		$$new($SimpleHeaderTable$HeaderField, ":status"_s, "200"_s),
		$$new($SimpleHeaderTable$HeaderField, ":status"_s, "204"_s),
		$$new($SimpleHeaderTable$HeaderField, ":status"_s, "206"_s),
		$$new($SimpleHeaderTable$HeaderField, ":status"_s, "304"_s),
		$$new($SimpleHeaderTable$HeaderField, ":status"_s, "400"_s),
		$$new($SimpleHeaderTable$HeaderField, ":status"_s, "404"_s),
		$$new($SimpleHeaderTable$HeaderField, ":status"_s, "500"_s),
		$$new($SimpleHeaderTable$HeaderField, "accept-charset"_s),
		$$new($SimpleHeaderTable$HeaderField, "accept-encoding"_s, "gzip, deflate"_s),
		$$new($SimpleHeaderTable$HeaderField, "accept-language"_s),
		$$new($SimpleHeaderTable$HeaderField, "accept-ranges"_s),
		$$new($SimpleHeaderTable$HeaderField, "accept"_s),
		$$new($SimpleHeaderTable$HeaderField, "access-control-allow-origin"_s),
		$$new($SimpleHeaderTable$HeaderField, "age"_s),
		$$new($SimpleHeaderTable$HeaderField, "allow"_s),
		$$new($SimpleHeaderTable$HeaderField, "authorization"_s),
		$$new($SimpleHeaderTable$HeaderField, "cache-control"_s),
		$$new($SimpleHeaderTable$HeaderField, "content-disposition"_s),
		$$new($SimpleHeaderTable$HeaderField, "content-encoding"_s),
		$$new($SimpleHeaderTable$HeaderField, "content-language"_s),
		$$new($SimpleHeaderTable$HeaderField, "content-length"_s),
		$$new($SimpleHeaderTable$HeaderField, "content-location"_s),
		$$new($SimpleHeaderTable$HeaderField, "content-range"_s),
		$$new($SimpleHeaderTable$HeaderField, "content-type"_s),
		$$new($SimpleHeaderTable$HeaderField, "cookie"_s),
		$$new($SimpleHeaderTable$HeaderField, "date"_s),
		$$new($SimpleHeaderTable$HeaderField, "etag"_s),
		$$new($SimpleHeaderTable$HeaderField, "expect"_s),
		$$new($SimpleHeaderTable$HeaderField, "expires"_s),
		$$new($SimpleHeaderTable$HeaderField, "from"_s),
		$$new($SimpleHeaderTable$HeaderField, "host"_s),
		$$new($SimpleHeaderTable$HeaderField, "if-match"_s),
		$$new($SimpleHeaderTable$HeaderField, "if-modified-since"_s),
		$$new($SimpleHeaderTable$HeaderField, "if-none-match"_s),
		$$new($SimpleHeaderTable$HeaderField, "if-range"_s),
		$$new($SimpleHeaderTable$HeaderField, "if-unmodified-since"_s),
		$$new($SimpleHeaderTable$HeaderField, "last-modified"_s),
		$$new($SimpleHeaderTable$HeaderField, "link"_s),
		$$new($SimpleHeaderTable$HeaderField, "location"_s),
		$$new($SimpleHeaderTable$HeaderField, "max-forwards"_s),
		$$new($SimpleHeaderTable$HeaderField, "proxy-authenticate"_s),
		$$new($SimpleHeaderTable$HeaderField, "proxy-authorization"_s),
		$$new($SimpleHeaderTable$HeaderField, "range"_s),
		$$new($SimpleHeaderTable$HeaderField, "referer"_s),
		$$new($SimpleHeaderTable$HeaderField, "refresh"_s),
		$$new($SimpleHeaderTable$HeaderField, "retry-after"_s),
		$$new($SimpleHeaderTable$HeaderField, "server"_s),
		$$new($SimpleHeaderTable$HeaderField, "set-cookie"_s),
		$$new($SimpleHeaderTable$HeaderField, "strict-transport-security"_s),
		$$new($SimpleHeaderTable$HeaderField, "transfer-encoding"_s),
		$$new($SimpleHeaderTable$HeaderField, "user-agent"_s),
		$$new($SimpleHeaderTable$HeaderField, "vary"_s),
		$$new($SimpleHeaderTable$HeaderField, "via"_s),
		$$new($SimpleHeaderTable$HeaderField, "www-authenticate"_s)
	})));
	SimpleHeaderTable::STATIC_TABLE_LENGTH = $nc(SimpleHeaderTable::staticTable)->size() - 1;
}

SimpleHeaderTable::SimpleHeaderTable() {
}

$Class* SimpleHeaderTable::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$put$0")) {
			return SimpleHeaderTable$$Lambda$lambda$put$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$put$1$1")) {
			return SimpleHeaderTable$$Lambda$lambda$put$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$put$2$2")) {
			return SimpleHeaderTable$$Lambda$lambda$put$2$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$put$3$3")) {
			return SimpleHeaderTable$$Lambda$lambda$put$3$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$put$4$4")) {
			return SimpleHeaderTable$$Lambda$lambda$put$4$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$toString$5")) {
			return SimpleHeaderTable$$Lambda$toString$5::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6")) {
			return SimpleHeaderTable$$Lambda$lambda$evictEntry$5$6::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"staticTable", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;>;", $PROTECTED | $STATIC | $FINAL, $staticField(SimpleHeaderTable, staticTable)},
		{"STATIC_TABLE_LENGTH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SimpleHeaderTable, STATIC_TABLE_LENGTH)},
		{"ENTRY_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SimpleHeaderTable, ENTRY_SIZE)},
		{"logger", "Ljdk/internal/net/http/hpack/HPACK$Logger;", nullptr, $PRIVATE | $FINAL, $field(SimpleHeaderTable, logger)},
		{"maxSize", "I", nullptr, $PRIVATE, $field(SimpleHeaderTable, maxSize$)},
		{"size", "I", nullptr, $PRIVATE, $field(SimpleHeaderTable, size$)},
		{"buffer", "Ljdk/internal/net/http/hpack/SimpleHeaderTable$CircularBuffer;", "Ljdk/internal/net/http/hpack/SimpleHeaderTable$CircularBuffer<Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;>;", $PRIVATE | $FINAL, $field(SimpleHeaderTable, buffer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjdk/internal/net/http/hpack/HPACK$Logger;)V", nullptr, $PUBLIC, $method(SimpleHeaderTable, init$, void, int32_t, $HPACK$Logger*)},
		{"add", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;)V", nullptr, $PROTECTED, $virtualMethod(SimpleHeaderTable, add, void, $SimpleHeaderTable$HeaderField*)},
		{"checkIndex", "(I)I", nullptr, $PRIVATE, $method(SimpleHeaderTable, checkIndex, int32_t, int32_t)},
		{"evictEntry", "()Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;", nullptr, 0, $virtualMethod(SimpleHeaderTable, evictEntry, $SimpleHeaderTable$HeaderField*)},
		{"get", "(I)Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;", nullptr, 0, $virtualMethod(SimpleHeaderTable, get, $SimpleHeaderTable$HeaderField*, int32_t)},
		{"getStateString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(SimpleHeaderTable, getStateString, $String*)},
		{"lambda$evictEntry$5", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SimpleHeaderTable, lambda$evictEntry$5, $String*, $SimpleHeaderTable$HeaderField*, int32_t)},
		{"lambda$put$0", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SimpleHeaderTable, lambda$put$0, $String*, $SimpleHeaderTable$HeaderField*)},
		{"lambda$put$1", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SimpleHeaderTable, lambda$put$1, $String*, $SimpleHeaderTable$HeaderField*, int32_t)},
		{"lambda$put$2", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(SimpleHeaderTable, lambda$put$2, $String*)},
		{"lambda$put$3", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SimpleHeaderTable, lambda$put$3, $String*, $SimpleHeaderTable$HeaderField*)},
		{"lambda$put$4", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SimpleHeaderTable, lambda$put$4, $String*, $SimpleHeaderTable$HeaderField*)},
		{"length", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleHeaderTable, length, int32_t)},
		{"maxSize", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleHeaderTable, maxSize, int32_t)},
		{"put", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V", nullptr, 0, $virtualMethod(SimpleHeaderTable, put, void, $CharSequence*, $CharSequence*)},
		{"put", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;)V", nullptr, $PRIVATE, $method(SimpleHeaderTable, put, void, $SimpleHeaderTable$HeaderField*)},
		{"remove", "()Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;", nullptr, $PROTECTED, $virtualMethod(SimpleHeaderTable, remove, $SimpleHeaderTable$HeaderField*)},
		{"setMaxSize", "(I)V", nullptr, 0, $virtualMethod(SimpleHeaderTable, setMaxSize, void, int32_t)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleHeaderTable, size, int32_t)},
		{"sizeOf", "(Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;)I", nullptr, 0, $virtualMethod(SimpleHeaderTable, sizeOf, int32_t, $SimpleHeaderTable$HeaderField*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleHeaderTable, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.SimpleHeaderTable$CircularBuffer", "jdk.internal.net.http.hpack.SimpleHeaderTable", "CircularBuffer", $STATIC | $FINAL},
		{"jdk.internal.net.http.hpack.SimpleHeaderTable$HeaderField", "jdk.internal.net.http.hpack.SimpleHeaderTable", "HeaderField", $PROTECTED | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.hpack.SimpleHeaderTable",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.SimpleHeaderTable$CircularBuffer,jdk.internal.net.http.hpack.SimpleHeaderTable$HeaderField"
	};
	$loadClass(SimpleHeaderTable, name, initialize, &classInfo$$, SimpleHeaderTable::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleHeaderTable);
	});
	return class$;
}

$Class* SimpleHeaderTable::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk