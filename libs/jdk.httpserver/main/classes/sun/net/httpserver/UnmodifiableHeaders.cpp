#include <sun/net/httpserver/UnmodifiableHeaders.h>

#include <com/sun/net/httpserver/Headers.h>
#include <java/io/Serializable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

using $Headers = ::com::sun::net::httpserver::Headers;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;

namespace sun {
	namespace net {
		namespace httpserver {

class UnmodifiableHeaders$$Lambda$lambda$new$0 : public $BiConsumer {
	$class(UnmodifiableHeaders$$Lambda$lambda$new$0, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($Headers* unmodHeaders) {
		$set(this, unmodHeaders, unmodHeaders);
	}
	virtual void accept(Object$* k, Object$* v) override {
		UnmodifiableHeaders::lambda$new$0(unmodHeaders, $cast($String, k), $cast($List, v));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<UnmodifiableHeaders$$Lambda$lambda$new$0>());
	}
	$Headers* unmodHeaders = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo UnmodifiableHeaders$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"unmodHeaders", "Lcom/sun/net/httpserver/Headers;", nullptr, $PUBLIC, $field(UnmodifiableHeaders$$Lambda$lambda$new$0, unmodHeaders)},
	{}
};
$MethodInfo UnmodifiableHeaders$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/net/httpserver/Headers;)V", nullptr, $PUBLIC, $method(static_cast<void(UnmodifiableHeaders$$Lambda$lambda$new$0::*)($Headers*)>(&UnmodifiableHeaders$$Lambda$lambda$new$0::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo UnmodifiableHeaders$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.net.httpserver.UnmodifiableHeaders$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* UnmodifiableHeaders$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(UnmodifiableHeaders$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* UnmodifiableHeaders$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _UnmodifiableHeaders_FieldInfo_[] = {
	{"headers", "Lcom/sun/net/httpserver/Headers;", nullptr, $PRIVATE | $FINAL, $field(UnmodifiableHeaders, headers)},
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PRIVATE | $FINAL, $field(UnmodifiableHeaders, map)},
	{}
};

$MethodInfo _UnmodifiableHeaders_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/net/httpserver/Headers;)V", nullptr, $PUBLIC, $method(static_cast<void(UnmodifiableHeaders::*)($Headers*)>(&UnmodifiableHeaders::init$))},
	{"add", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;>;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/util/List;", "(Ljava/lang/Object;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getFirst", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"lambda$new$0", "(Lcom/sun/net/httpserver/Headers;Ljava/lang/String;Ljava/util/List;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Headers*,$String*,$List*)>(&UnmodifiableHeaders::lambda$new$0))},
	{"put", "(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<+Ljava/lang/String;+Ljava/util/List<Ljava/lang/String;>;>;)V", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Ljava/util/List;", "(Ljava/lang/Object;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"replace", "(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"replace", "(Ljava/lang/String;Ljava/util/List;Ljava/util/List;)Z", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;)Z", $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"replaceAll", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<-Ljava/lang/String;-Ljava/util/List<Ljava/lang/String;>;+Ljava/util/List<Ljava/lang/String;>;>;)V", $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC},
	{}
};

$ClassInfo _UnmodifiableHeaders_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.httpserver.UnmodifiableHeaders",
	"com.sun.net.httpserver.Headers",
	nullptr,
	_UnmodifiableHeaders_FieldInfo_,
	_UnmodifiableHeaders_MethodInfo_
};

$Object* allocate$UnmodifiableHeaders($Class* clazz) {
	return $of($alloc(UnmodifiableHeaders));
}

void UnmodifiableHeaders::init$($Headers* headers) {
	$useLocalCurrentObjectStackCache();
	$Headers::init$();
	$var($Headers, h, headers);
	$var($Headers, unmodHeaders, $new($Headers));
	$nc(h)->forEach(static_cast<$BiConsumer*>($$new(UnmodifiableHeaders$$Lambda$lambda$new$0, unmodHeaders)));
	$set(this, map, $Collections::unmodifiableMap(unmodHeaders));
	$set(this, headers, unmodHeaders);
}

int32_t UnmodifiableHeaders::size() {
	return $nc(this->headers)->size();
}

bool UnmodifiableHeaders::isEmpty() {
	return $nc(this->headers)->isEmpty();
}

bool UnmodifiableHeaders::containsKey(Object$* key) {
	return $nc(this->headers)->containsKey(key);
}

bool UnmodifiableHeaders::containsValue(Object$* value) {
	return $nc(this->headers)->containsValue(value);
}

$Object* UnmodifiableHeaders::get(Object$* key) {
	return $of($nc(this->headers)->get(key));
}

$String* UnmodifiableHeaders::getFirst($String* key) {
	return $nc(this->headers)->getFirst(key);
}

$List* UnmodifiableHeaders::put($String* key, $List* value) {
	$throwNew($UnsupportedOperationException, "unsupported operation"_s);
	$shouldNotReachHere();
}

void UnmodifiableHeaders::add($String* key, $String* value) {
	$throwNew($UnsupportedOperationException, "unsupported operation"_s);
}

void UnmodifiableHeaders::set($String* key, $String* value) {
	$throwNew($UnsupportedOperationException, "unsupported operation"_s);
}

$Object* UnmodifiableHeaders::remove(Object$* key) {
	$throwNew($UnsupportedOperationException, "unsupported operation"_s);
	$shouldNotReachHere();
}

void UnmodifiableHeaders::putAll($Map* t) {
	$throwNew($UnsupportedOperationException, "unsupported operation"_s);
}

void UnmodifiableHeaders::clear() {
	$throwNew($UnsupportedOperationException, "unsupported operation"_s);
}

$Set* UnmodifiableHeaders::keySet() {
	return $nc(this->map)->keySet();
}

$Collection* UnmodifiableHeaders::values() {
	return $nc(this->map)->values();
}

$Set* UnmodifiableHeaders::entrySet() {
	return $nc(this->map)->entrySet();
}

$List* UnmodifiableHeaders::replace($String* key, $List* value) {
	$throwNew($UnsupportedOperationException, "unsupported operation"_s);
	$shouldNotReachHere();
}

bool UnmodifiableHeaders::replace($String* key, $List* oldValue, $List* newValue) {
	$throwNew($UnsupportedOperationException, "unsupported operation"_s);
	$shouldNotReachHere();
}

void UnmodifiableHeaders::replaceAll($BiFunction* function) {
	$throwNew($UnsupportedOperationException, "unsupported operation"_s);
}

bool UnmodifiableHeaders::equals(Object$* o) {
	return $nc(this->headers)->equals(o);
}

int32_t UnmodifiableHeaders::hashCode() {
	return $nc(this->headers)->hashCode();
}

$Object* UnmodifiableHeaders::replace(Object$* key, Object$* value) {
	return $of(this->replace($cast($String, key), $cast($List, value)));
}

bool UnmodifiableHeaders::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	return this->replace($cast($String, key), $cast($List, oldValue), $cast($List, newValue));
}

$Object* UnmodifiableHeaders::put(Object$* key, Object$* value) {
	return $of(this->put($cast($String, key), $cast($List, value)));
}

void UnmodifiableHeaders::lambda$new$0($Headers* unmodHeaders, $String* k, $List* v) {
	$init(UnmodifiableHeaders);
	$nc(unmodHeaders)->put(k, $($Collections::unmodifiableList(v)));
}

UnmodifiableHeaders::UnmodifiableHeaders() {
}

$Class* UnmodifiableHeaders::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(UnmodifiableHeaders$$Lambda$lambda$new$0::classInfo$.name)) {
			return UnmodifiableHeaders$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(UnmodifiableHeaders, name, initialize, &_UnmodifiableHeaders_ClassInfo_, allocate$UnmodifiableHeaders);
	return class$;
}

$Class* UnmodifiableHeaders::class$ = nullptr;

		} // httpserver
	} // net
} // sun