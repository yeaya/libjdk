#include <com/sun/net/httpserver/Headers.h>

#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {

$FieldInfo _Headers_FieldInfo_[] = {
	{"map", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", 0, $field(Headers, map)},
	{}
};

$MethodInfo _Headers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Headers::*)()>(&Headers::init$))},
	{"add", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"checkValue", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Headers::checkValue))},
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
	{"normalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Headers::*)($String*)>(&Headers::normalize))},
	{"put", "(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<+Ljava/lang/String;+Ljava/util/List<Ljava/lang/String;>;>;)V", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Ljava/util/List;", "(Ljava/lang/Object;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC},
	{}
};

$ClassInfo _Headers_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.net.httpserver.Headers",
	"java.lang.Object",
	"java.util.Map",
	_Headers_FieldInfo_,
	_Headers_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;"
};

$Object* allocate$Headers($Class* clazz) {
	return $of($alloc(Headers));
}

void Headers::init$() {
	$set(this, map, $new($HashMap, 32));
}

$String* Headers::normalize($String* key) {
	if (key == nullptr) {
		return nullptr;
	}
	int32_t len = $nc(key)->length();
	if (len == 0) {
		return key;
	}
	$var($chars, b, key->toCharArray());
	if (b->get(0) >= u'a' && b->get(0) <= u'z') {
		b->set(0, (char16_t)(b->get(0) - (u'a' - u'A')));
	} else if (b->get(0) == u'\r' || b->get(0) == u'\n') {
		$throwNew($IllegalArgumentException, "illegal character in key"_s);
	}
	for (int32_t i = 1; i < len; ++i) {
		if (b->get(i) >= u'A' && b->get(i) <= u'Z') {
			b->set(i, (char16_t)(b->get(i) + (u'a' - u'A')));
		} else if (b->get(i) == u'\r' || b->get(i) == u'\n') {
			$throwNew($IllegalArgumentException, "illegal character in key"_s);
		}
	}
	return $new($String, b);
}

int32_t Headers::size() {
	return $nc(this->map)->size();
}

bool Headers::isEmpty() {
	return $nc(this->map)->isEmpty();
}

bool Headers::containsKey(Object$* key) {
	if (key == nullptr) {
		return false;
	}
	if (!($instanceOf($String, key))) {
		return false;
	}
	return $nc(this->map)->containsKey($(normalize($cast($String, key))));
}

bool Headers::containsValue(Object$* value) {
	return $nc(this->map)->containsValue(value);
}

$Object* Headers::get(Object$* key) {
	return $of($cast($List, $nc(this->map)->get($(normalize($cast($String, key))))));
}

$String* Headers::getFirst($String* key) {
	$useLocalCurrentObjectStackCache();
	$var($List, l, $cast($List, $nc(this->map)->get($(normalize(key)))));
	if (l == nullptr) {
		return nullptr;
	}
	return $cast($String, $nc(l)->get(0));
}

$List* Headers::put($String* key, $List* value) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(value)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, v, $cast($String, i$->next()));
			checkValue(v);
		}
	}
	return $cast($List, $nc(this->map)->put($(normalize(key)), value));
}

void Headers::add($String* key, $String* value) {
	$useLocalCurrentObjectStackCache();
	checkValue(value);
	$var($String, k, normalize(key));
	$var($List, l, $cast($List, $nc(this->map)->get(k)));
	if (l == nullptr) {
		$assign(l, $new($LinkedList));
		$nc(this->map)->put(k, l);
	}
	$nc(l)->add(value);
}

void Headers::checkValue($String* value) {
	$init(Headers);
	int32_t len = $nc(value)->length();
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = value->charAt(i);
		if (c == u'\r') {
			if (i >= len - 2) {
				$throwNew($IllegalArgumentException, "Illegal CR found in header"_s);
			}
			char16_t c1 = value->charAt(i + 1);
			char16_t c2 = value->charAt(i + 2);
			if (c1 != u'\n') {
				$throwNew($IllegalArgumentException, "Illegal char found after CR in header"_s);
			}
			if (c2 != u' ' && c2 != u'\t') {
				$throwNew($IllegalArgumentException, "No whitespace found after CRLF in header"_s);
			}
			i += 2;
		} else if (c == u'\n') {
			$throwNew($IllegalArgumentException, "Illegal LF found in header"_s);
		}
	}
}

void Headers::set($String* key, $String* value) {
	$var($LinkedList, l, $new($LinkedList));
	l->add(value);
	put(key, static_cast<$List*>(l));
}

$Object* Headers::remove(Object$* key) {
	return $of($cast($List, $nc(this->map)->remove($(normalize($cast($String, key))))));
}

void Headers::putAll($Map* t) {
	$nc(this->map)->putAll(t);
}

void Headers::clear() {
	$nc(this->map)->clear();
}

$Set* Headers::keySet() {
	return $nc(this->map)->keySet();
}

$Collection* Headers::values() {
	return $nc(this->map)->values();
}

$Set* Headers::entrySet() {
	return $nc(this->map)->entrySet();
}

bool Headers::equals(Object$* o) {
	return $nc(this->map)->equals(o);
}

int32_t Headers::hashCode() {
	return $nc(this->map)->hashCode();
}

$Object* Headers::put(Object$* key, Object$* value) {
	return $of(this->put($cast($String, key), $cast($List, value)));
}

Headers::Headers() {
}

$Class* Headers::load$($String* name, bool initialize) {
	$loadClass(Headers, name, initialize, &_Headers_ClassInfo_, allocate$Headers);
	return class$;
}

$Class* Headers::class$ = nullptr;

			} // httpserver
		} // net
	} // sun
} // com