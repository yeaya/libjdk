#include <java/net/http/HttpHeaders.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/OptionalLong.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/TreeSet.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiPredicate.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/ToLongFunction.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE_ORDER
#undef NO_HEADERS
#undef ROOT

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $OptionalLong = ::java::util::OptionalLong;
using $TreeMap = ::java::util::TreeMap;
using $TreeSet = ::java::util::TreeSet;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiPredicate = ::java::util::function::BiPredicate;
using $Consumer = ::java::util::function::Consumer;
using $ToLongFunction = ::java::util::function::ToLongFunction;

namespace java {
	namespace net {
		namespace http {

class HttpHeaders$$Lambda$valueOf : public $ToLongFunction {
	$class(HttpHeaders$$Lambda$valueOf, $NO_CLASS_INIT, $ToLongFunction)
public:
	void init$() {
	}
	virtual int64_t applyAsLong(Object$* arg0) override {
		return $longValue($Long::valueOf($cast($String, arg0)));
	}
};
$Class* HttpHeaders$$Lambda$valueOf::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpHeaders$$Lambda$valueOf, init$, void)},
		{"applyAsLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(HttpHeaders$$Lambda$valueOf, applyAsLong, int64_t, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpHeaders$$Lambda$valueOf",
		"java.lang.Object",
		"java.util.function.ToLongFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpHeaders$$Lambda$valueOf, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpHeaders$$Lambda$valueOf);
	});
	return class$;
}
$Class* HttpHeaders$$Lambda$valueOf::class$ = nullptr;

class HttpHeaders$$Lambda$lambda$headersOf$1$1 : public $BiConsumer {
	$class(HttpHeaders$$Lambda$lambda$headersOf$1$1, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($BiPredicate* filter, $ArrayList* tempList, $TreeMap* other, $TreeSet* notAdded) {
		$set(this, filter, filter);
		$set(this, tempList, tempList);
		$set(this, other, other);
		$set(this, notAdded, notAdded);
	}
	virtual void accept(Object$* key, Object$* value) override {
		HttpHeaders::lambda$headersOf$1(filter, tempList, other, notAdded, $cast($String, key), $cast($List, value));
	}
	$BiPredicate* filter = nullptr;
	$ArrayList* tempList = nullptr;
	$TreeMap* other = nullptr;
	$TreeSet* notAdded = nullptr;
};
$Class* HttpHeaders$$Lambda$lambda$headersOf$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filter", "Ljava/util/function/BiPredicate;", nullptr, $PUBLIC, $field(HttpHeaders$$Lambda$lambda$headersOf$1$1, filter)},
		{"tempList", "Ljava/util/ArrayList;", nullptr, $PUBLIC, $field(HttpHeaders$$Lambda$lambda$headersOf$1$1, tempList)},
		{"other", "Ljava/util/TreeMap;", nullptr, $PUBLIC, $field(HttpHeaders$$Lambda$lambda$headersOf$1$1, other)},
		{"notAdded", "Ljava/util/TreeSet;", nullptr, $PUBLIC, $field(HttpHeaders$$Lambda$lambda$headersOf$1$1, notAdded)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BiPredicate;Ljava/util/ArrayList;Ljava/util/TreeMap;Ljava/util/TreeSet;)V", nullptr, $PUBLIC, $method(HttpHeaders$$Lambda$lambda$headersOf$1$1, init$, void, $BiPredicate*, $ArrayList*, $TreeMap*, $TreeSet*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(HttpHeaders$$Lambda$lambda$headersOf$1$1, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpHeaders$$Lambda$lambda$headersOf$1$1",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpHeaders$$Lambda$lambda$headersOf$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpHeaders$$Lambda$lambda$headersOf$1$1);
	});
	return class$;
}
$Class* HttpHeaders$$Lambda$lambda$headersOf$1$1::class$ = nullptr;

class HttpHeaders$$Lambda$lambda$headersOf$0$2 : public $Consumer {
	$class(HttpHeaders$$Lambda$lambda$headersOf$0$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$($BiPredicate* filter, $String* headerName, $ArrayList* tempList) {
		$set(this, filter, filter);
		$set(this, headerName, headerName);
		$set(this, tempList, tempList);
	}
	virtual void accept(Object$* headerValue) override {
		HttpHeaders::lambda$headersOf$0(filter, headerName, tempList, $cast($String, headerValue));
	}
	$BiPredicate* filter = nullptr;
	$String* headerName = nullptr;
	$ArrayList* tempList = nullptr;
};
$Class* HttpHeaders$$Lambda$lambda$headersOf$0$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filter", "Ljava/util/function/BiPredicate;", nullptr, $PUBLIC, $field(HttpHeaders$$Lambda$lambda$headersOf$0$2, filter)},
		{"headerName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(HttpHeaders$$Lambda$lambda$headersOf$0$2, headerName)},
		{"tempList", "Ljava/util/ArrayList;", nullptr, $PUBLIC, $field(HttpHeaders$$Lambda$lambda$headersOf$0$2, tempList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BiPredicate;Ljava/lang/String;Ljava/util/ArrayList;)V", nullptr, $PUBLIC, $method(HttpHeaders$$Lambda$lambda$headersOf$0$2, init$, void, $BiPredicate*, $String*, $ArrayList*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(HttpHeaders$$Lambda$lambda$headersOf$0$2, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.net.http.HttpHeaders$$Lambda$lambda$headersOf$0$2",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpHeaders$$Lambda$lambda$headersOf$0$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpHeaders$$Lambda$lambda$headersOf$0$2);
	});
	return class$;
}
$Class* HttpHeaders$$Lambda$lambda$headersOf$0$2::class$ = nullptr;

HttpHeaders* HttpHeaders::NO_HEADERS = nullptr;

$Optional* HttpHeaders::firstValue($String* name) {
	$useLocalObjectStack();
	return $$nc($$nc(allValues(name))->stream())->findFirst();
}

$OptionalLong* HttpHeaders::firstValueAsLong($String* name) {
	$useLocalObjectStack();
	return $$nc($$nc($$nc(allValues(name))->stream())->mapToLong($$new(HttpHeaders$$Lambda$valueOf)))->findFirst();
}

$List* HttpHeaders::allValues($String* name) {
	$useLocalObjectStack();
	$Objects::requireNonNull(name);
	$var($List, values, $cast($List, $$nc(map())->get(name)));
	return values != nullptr ? values : $List::of();
}

$Map* HttpHeaders::map() {
	return this->headers;
}

bool HttpHeaders::equals(Object$* obj) {
	$useLocalObjectStack();
	if (!($instanceOf(HttpHeaders, obj))) {
		return false;
	}
	$var(HttpHeaders, that, $cast(HttpHeaders, obj));
	return $$nc(this->map())->equals($($nc(that)->map()));
}

int32_t HttpHeaders::hashCode() {
	$useLocalObjectStack();
	int32_t h = 0;
	{
		$var($Iterator, i$, $$nc($$nc(map())->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				h += entryHash(e);
			}
		}
	}
	return h;
}

$String* HttpHeaders::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Object::toString()))->append(" { "_s);
	sb->append($(map()));
	sb->append(" }"_s);
	return sb->toString();
}

HttpHeaders* HttpHeaders::of($Map* headerMap, $BiPredicate* filter) {
	$init(HttpHeaders);
	$Objects::requireNonNull(headerMap);
	$Objects::requireNonNull(filter);
	return headersOf(headerMap, filter);
}

void HttpHeaders::init$($Map* headers) {
	$set(this, headers, headers);
}

int32_t HttpHeaders::entryHash($Map$Entry* e) {
	$init(HttpHeaders);
	$useLocalObjectStack();
	$var($String, key, $cast($String, $nc(e)->getKey()));
	$var($List, value, $cast($List, e->getValue()));
	$init($Locale);
	int32_t keyHash = $($nc(key)->toLowerCase($Locale::ROOT))->hashCode();
	int32_t valueHash = $nc(value)->hashCode();
	return keyHash ^ valueHash;
}

HttpHeaders* HttpHeaders::headersOf($Map* map, $BiPredicate* filter) {
	$init(HttpHeaders);
	$useLocalObjectStack();
	$var($TreeMap, other, $new($TreeMap, $String::CASE_INSENSITIVE_ORDER));
	$var($TreeSet, notAdded, $new($TreeSet, $String::CASE_INSENSITIVE_ORDER));
	$var($ArrayList, tempList, $new($ArrayList));
	$nc(map)->forEach($$new(HttpHeaders$$Lambda$lambda$headersOf$1$1, filter, tempList, other, notAdded));
	return other->isEmpty() ? HttpHeaders::NO_HEADERS : $new(HttpHeaders, $($Collections::unmodifiableMap($cast($AbstractMap, other))));
}

void HttpHeaders::lambda$headersOf$1($BiPredicate* filter, $ArrayList* tempList, $TreeMap* other, $TreeSet* notAdded, $String* key, $List* value) {
	$init(HttpHeaders);
	$useLocalObjectStack();
	$var($String, headerName, $sure($String, $Objects::requireNonNull(key))->trim());
	if (headerName->isEmpty()) {
		$throwNew($IllegalArgumentException, "empty key"_s);
	}
	$var($List, headerValues, $cast($List, $Objects::requireNonNull(value)));
	$nc(headerValues)->forEach($$new(HttpHeaders$$Lambda$lambda$headersOf$0$2, filter, headerName, tempList));
	if ($nc(tempList)->isEmpty()) {
		bool var$0 = $nc(other)->containsKey(headerName);
		$init($Locale);
		if (var$0 || $nc(notAdded)->contains($(headerName->toLowerCase($Locale::ROOT)))) {
			$throwNew($IllegalArgumentException, $$str({"duplicate key: "_s, headerName}));
		}
		$nc(notAdded)->add($(headerName->toLowerCase($Locale::ROOT)));
	} else if ($nc(other)->put(headerName, $($List::copyOf($cast($AbstractCollection, tempList)))) != nullptr) {
		$throwNew($IllegalArgumentException, $$str({"duplicate key: "_s, headerName}));
	}
	tempList->clear();
}

void HttpHeaders::lambda$headersOf$0($BiPredicate* filter, $String* headerName, $ArrayList* tempList, $String* headerValue$renamed) {
	$init(HttpHeaders);
	$var($String, headerValue, headerValue$renamed);
	$assign(headerValue, $sure($String, $Objects::requireNonNull(headerValue))->trim());
	if ($nc(filter)->test(headerName, headerValue)) {
		$nc(tempList)->add(headerValue);
	}
}

void HttpHeaders::clinit$($Class* clazz) {
	$assignStatic(HttpHeaders::NO_HEADERS, $new(HttpHeaders, $($Map::of())));
}

HttpHeaders::HttpHeaders() {
}

$Class* HttpHeaders::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.net.http.HttpHeaders$$Lambda$valueOf")) {
			return HttpHeaders$$Lambda$valueOf::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpHeaders$$Lambda$lambda$headersOf$1$1")) {
			return HttpHeaders$$Lambda$lambda$headersOf$1$1::load$(name, initialize);
		}
		if (name->equals("java.net.http.HttpHeaders$$Lambda$lambda$headersOf$0$2")) {
			return HttpHeaders$$Lambda$lambda$headersOf$0$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"NO_HEADERS", "Ljava/net/http/HttpHeaders;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HttpHeaders, NO_HEADERS)},
		{"headers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PRIVATE | $FINAL, $field(HttpHeaders, headers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(HttpHeaders, init$, void, $Map*)},
		{"allValues", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $method(HttpHeaders, allValues, $List*, $String*)},
		{"entryHash", "(Ljava/util/Map$Entry;)I", "(Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)I", $PRIVATE | $STATIC | $FINAL, $staticMethod(HttpHeaders, entryHash, int32_t, $Map$Entry*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(HttpHeaders, equals, bool, Object$*)},
		{"firstValue", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC, $method(HttpHeaders, firstValue, $Optional*, $String*)},
		{"firstValueAsLong", "(Ljava/lang/String;)Ljava/util/OptionalLong;", nullptr, $PUBLIC, $method(HttpHeaders, firstValueAsLong, $OptionalLong*, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(HttpHeaders, hashCode, int32_t)},
		{"headersOf", "(Ljava/util/Map;Ljava/util/function/BiPredicate;)Ljava/net/http/HttpHeaders;", "(Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;Ljava/util/function/BiPredicate<Ljava/lang/String;Ljava/lang/String;>;)Ljava/net/http/HttpHeaders;", $PRIVATE | $STATIC, $staticMethod(HttpHeaders, headersOf, HttpHeaders*, $Map*, $BiPredicate*)},
		{"lambda$headersOf$0", "(Ljava/util/function/BiPredicate;Ljava/lang/String;Ljava/util/ArrayList;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpHeaders, lambda$headersOf$0, void, $BiPredicate*, $String*, $ArrayList*, $String*)},
		{"lambda$headersOf$1", "(Ljava/util/function/BiPredicate;Ljava/util/ArrayList;Ljava/util/TreeMap;Ljava/util/TreeSet;Ljava/lang/String;Ljava/util/List;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpHeaders, lambda$headersOf$1, void, $BiPredicate*, $ArrayList*, $TreeMap*, $TreeSet*, $String*, $List*)},
		{"map", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC, $method(HttpHeaders, map, $Map*)},
		{"of", "(Ljava/util/Map;Ljava/util/function/BiPredicate;)Ljava/net/http/HttpHeaders;", "(Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;Ljava/util/function/BiPredicate<Ljava/lang/String;Ljava/lang/String;>;)Ljava/net/http/HttpHeaders;", $PUBLIC | $STATIC, $staticMethod(HttpHeaders, of, HttpHeaders*, $Map*, $BiPredicate*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpHeaders, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.net.http.HttpHeaders",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpHeaders, name, initialize, &classInfo$$, HttpHeaders::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HttpHeaders);
	});
	return class$;
}

$Class* HttpHeaders::class$ = nullptr;

		} // http
	} // net
} // java