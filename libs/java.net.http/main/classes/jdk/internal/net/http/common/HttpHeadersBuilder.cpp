#include <jdk/internal/net/http/common/HttpHeadersBuilder.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/http/HttpHeaders.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/function/BiPredicate.h>
#include <java/util/function/Function.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef ACCEPT_ALL
#undef CASE_INSENSITIVE_ORDER

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $TreeMap = ::java::util::TreeMap;
using $Function = ::java::util::function::Function;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

class HttpHeadersBuilder$$Lambda$lambda$addHeader$0 : public $Function {
	$class(HttpHeadersBuilder$$Lambda$lambda$addHeader$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* k) override {
		 return HttpHeadersBuilder::lambda$addHeader$0($cast($String, k));
	}
};
$Class* HttpHeadersBuilder$$Lambda$lambda$addHeader$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpHeadersBuilder$$Lambda$lambda$addHeader$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpHeadersBuilder$$Lambda$lambda$addHeader$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.common.HttpHeadersBuilder$$Lambda$lambda$addHeader$0",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(HttpHeadersBuilder$$Lambda$lambda$addHeader$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpHeadersBuilder$$Lambda$lambda$addHeader$0);
	});
	return class$;
}
$Class* HttpHeadersBuilder$$Lambda$lambda$addHeader$0::class$ = nullptr;

void HttpHeadersBuilder::init$() {
	$set(this, headersMap, $new($TreeMap, $String::CASE_INSENSITIVE_ORDER));
}

HttpHeadersBuilder* HttpHeadersBuilder::structuralCopy() {
	$useLocalObjectStack();
	$var(HttpHeadersBuilder, builder, $new(HttpHeadersBuilder));
	{
		$var($Iterator, i$, $$nc(this->headersMap->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($List, valuesCopy, $new($ArrayList, $$cast($Collection, $nc(entry)->getValue())));
				$nc(builder->headersMap)->put($$cast($String, entry->getKey()), valuesCopy);
			}
		}
	}
	return builder;
}

void HttpHeadersBuilder::addHeader($String* name, $String* value) {
	$useLocalObjectStack();
	$$sure($List, this->headersMap->computeIfAbsent(name, $$new(HttpHeadersBuilder$$Lambda$lambda$addHeader$0)))->add(value);
}

void HttpHeadersBuilder::setHeader($String* name, $String* value) {
	$var($List, values, $new($ArrayList, 1));
	values->add(value);
	this->headersMap->put(name, values);
}

void HttpHeadersBuilder::clear() {
	this->headersMap->clear();
}

$Map* HttpHeadersBuilder::map() {
	return $cast($AbstractMap, this->headersMap);
}

$HttpHeaders* HttpHeadersBuilder::build() {
	$init($Utils);
	return $HttpHeaders::of($cast($AbstractMap, this->headersMap), $Utils::ACCEPT_ALL);
}

$String* HttpHeadersBuilder::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Object::toString()))->append(" { "_s);
	sb->append($(map()));
	sb->append(" }"_s);
	return sb->toString();
}

$List* HttpHeadersBuilder::lambda$addHeader$0($String* k) {
	return $new($ArrayList, 1);
}

HttpHeadersBuilder::HttpHeadersBuilder() {
}

$Class* HttpHeadersBuilder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.common.HttpHeadersBuilder$$Lambda$lambda$addHeader$0")) {
			return HttpHeadersBuilder$$Lambda$lambda$addHeader$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"headersMap", "Ljava/util/TreeMap;", "Ljava/util/TreeMap<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PRIVATE | $FINAL, $field(HttpHeadersBuilder, headersMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HttpHeadersBuilder, init$, void)},
		{"addHeader", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpHeadersBuilder, addHeader, void, $String*, $String*)},
		{"build", "()Ljava/net/http/HttpHeaders;", nullptr, $PUBLIC, $virtualMethod(HttpHeadersBuilder, build, $HttpHeaders*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(HttpHeadersBuilder, clear, void)},
		{"lambda$addHeader$0", "(Ljava/lang/String;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpHeadersBuilder, lambda$addHeader$0, $List*, $String*)},
		{"map", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC, $virtualMethod(HttpHeadersBuilder, map, $Map*)},
		{"setHeader", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpHeadersBuilder, setHeader, void, $String*, $String*)},
		{"structuralCopy", "()Ljdk/internal/net/http/common/HttpHeadersBuilder;", nullptr, $PUBLIC, $virtualMethod(HttpHeadersBuilder, structuralCopy, HttpHeadersBuilder*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpHeadersBuilder, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.common.HttpHeadersBuilder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpHeadersBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpHeadersBuilder);
	});
	return class$;
}

$Class* HttpHeadersBuilder::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk