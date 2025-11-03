#include <sun/nio/cs/ext/AbstractCharsetProvider.h>

#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ref/SoftReference.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/spi/CharsetProvider.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <sun/nio/cs/ext/AbstractCharsetProvider$1.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE_ORDER

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Charset = ::java::nio::charset::Charset;
using $CharsetProvider = ::java::nio::charset::spi::CharsetProvider;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $AbstractCharsetProvider$1 = ::sun::nio::cs::ext::AbstractCharsetProvider$1;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _AbstractCharsetProvider_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractCharsetProvider, $assertionsDisabled)},
	{"classMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(AbstractCharsetProvider, classMap)},
	{"aliasMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(AbstractCharsetProvider, aliasMap)},
	{"aliasNameMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;", $PRIVATE, $field(AbstractCharsetProvider, aliasNameMap)},
	{"cache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/ref/SoftReference<Ljava/nio/charset/Charset;>;>;", $PRIVATE, $field(AbstractCharsetProvider, cache)},
	{"packagePrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AbstractCharsetProvider, packagePrefix)},
	{}
};

$MethodInfo _AbstractCharsetProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractCharsetProvider::*)()>(&AbstractCharsetProvider::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractCharsetProvider::*)($String*)>(&AbstractCharsetProvider::init$))},
	{"aliases", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$StringArray*(AbstractCharsetProvider::*)($String*)>(&AbstractCharsetProvider::aliases))},
	{"canonicalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(AbstractCharsetProvider::*)($String*)>(&AbstractCharsetProvider::canonicalize))},
	{"charset", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"charsetForName", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PUBLIC | $FINAL},
	{"charsets", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/charset/Charset;>;", $PUBLIC | $FINAL},
	{"deleteCharset", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"hasCharset", "(Ljava/lang/String;)Z", nullptr, $PROTECTED},
	{"init", "()V", nullptr, $PROTECTED},
	{"lookup", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PRIVATE, $method(static_cast<$Charset*(AbstractCharsetProvider::*)($String*)>(&AbstractCharsetProvider::lookup))},
	{"put", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/Map<TK;TV;>;TK;TV;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Map*,Object$*,Object$*)>(&AbstractCharsetProvider::put))},
	{"remove", "(Ljava/util/Map;Ljava/lang/Object;)V", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/Map<TK;TV;>;TK;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Map*,Object$*)>(&AbstractCharsetProvider::remove))},
	{}
};

$InnerClassInfo _AbstractCharsetProvider_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.AbstractCharsetProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractCharsetProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.AbstractCharsetProvider",
	"java.nio.charset.spi.CharsetProvider",
	nullptr,
	_AbstractCharsetProvider_FieldInfo_,
	_AbstractCharsetProvider_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractCharsetProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.AbstractCharsetProvider$1"
};

$Object* allocate$AbstractCharsetProvider($Class* clazz) {
	return $of($alloc(AbstractCharsetProvider));
}

bool AbstractCharsetProvider::$assertionsDisabled = false;

void AbstractCharsetProvider::init$() {
	$CharsetProvider::init$();
	$set(this, classMap, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap, $String::CASE_INSENSITIVE_ORDER))));
	$set(this, aliasMap, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap, $String::CASE_INSENSITIVE_ORDER))));
	$set(this, aliasNameMap, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap, $String::CASE_INSENSITIVE_ORDER))));
	$set(this, cache, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap, $String::CASE_INSENSITIVE_ORDER))));
	$set(this, packagePrefix, "sun.nio.cs."_s);
}

void AbstractCharsetProvider::init$($String* pkgPrefixName) {
	$CharsetProvider::init$();
	$set(this, classMap, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap, $String::CASE_INSENSITIVE_ORDER))));
	$set(this, aliasMap, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap, $String::CASE_INSENSITIVE_ORDER))));
	$set(this, aliasNameMap, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap, $String::CASE_INSENSITIVE_ORDER))));
	$set(this, cache, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap, $String::CASE_INSENSITIVE_ORDER))));
	$set(this, packagePrefix, $nc(pkgPrefixName)->concat("."_s));
}

void AbstractCharsetProvider::put($Map* m, Object$* name, Object$* value) {
	$init(AbstractCharsetProvider);
	if (!$nc(m)->containsKey(name)) {
		m->put(name, value);
	}
}

void AbstractCharsetProvider::remove($Map* m, Object$* name) {
	$init(AbstractCharsetProvider);
	$var($Object, x, $nc(m)->remove(name));
	if (!AbstractCharsetProvider::$assertionsDisabled && !(x != nullptr)) {
		$throwNew($AssertionError);
	}
}

void AbstractCharsetProvider::charset($String* name, $String* className, $StringArray* aliases) {
	$synchronized(this) {
		put(this->classMap, name, className);
		for (int32_t i = 0; i < $nc(aliases)->length; ++i) {
			put(this->aliasMap, aliases->get(i), name);
		}
		put(this->aliasNameMap, name, aliases);
		$nc(this->cache)->clear();
	}
}

void AbstractCharsetProvider::deleteCharset($String* name, $StringArray* aliases) {
	$synchronized(this) {
		remove(this->classMap, name);
		for (int32_t i = 0; i < $nc(aliases)->length; ++i) {
			remove(this->aliasMap, aliases->get(i));
		}
		remove(this->aliasNameMap, name);
		$nc(this->cache)->clear();
	}
}

bool AbstractCharsetProvider::hasCharset($String* name) {
	$synchronized(this) {
		return $nc(this->classMap)->containsKey(name);
	}
}

void AbstractCharsetProvider::init() {
}

$String* AbstractCharsetProvider::canonicalize($String* charsetName) {
	$var($String, acn, $cast($String, $nc(this->aliasMap)->get(charsetName)));
	return (acn != nullptr) ? acn : charsetName;
}

$Charset* AbstractCharsetProvider::lookup($String* csn) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($SoftReference, sr, $cast($SoftReference, $nc(this->cache)->get(csn)));
	if (sr != nullptr) {
		$var($Charset, cs, $cast($Charset, sr->get()));
		if (cs != nullptr) {
			return cs;
		}
	}
	$var($String, cln, $cast($String, $nc(this->classMap)->get(csn)));
	if (cln == nullptr) {
		return nullptr;
	}
	try {
		$var($String, var$0, $nc(this->packagePrefix)->concat(cln));
		$Class* c = $Class::forName(var$0, true, $($of(this)->getClass()->getClassLoader()));
		$var($Charset, cs, $cast($Charset, $nc(c)->newInstance()));
		$nc(this->cache)->put(csn, $$new($SoftReference, cs));
		return cs;
	} catch ($ClassNotFoundException& x) {
		return nullptr;
	} catch ($IllegalAccessException& x) {
		return nullptr;
	} catch ($InstantiationException& x) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Charset* AbstractCharsetProvider::charsetForName($String* charsetName) {
	$synchronized(this) {
		init();
		return lookup($(canonicalize(charsetName)));
	}
}

$Iterator* AbstractCharsetProvider::charsets() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, ks, nullptr);
	$synchronized(this) {
		init();
		$assign(ks, $new($ArrayList, $(static_cast<$Collection*>($nc(this->classMap)->keySet()))));
	}
	return $new($AbstractCharsetProvider$1, this, ks);
}

$StringArray* AbstractCharsetProvider::aliases($String* charsetName) {
	$synchronized(this) {
		init();
		return $cast($StringArray, $nc(this->aliasNameMap)->get(charsetName));
	}
}

void clinit$AbstractCharsetProvider($Class* class$) {
	AbstractCharsetProvider::$assertionsDisabled = !AbstractCharsetProvider::class$->desiredAssertionStatus();
}

AbstractCharsetProvider::AbstractCharsetProvider() {
}

$Class* AbstractCharsetProvider::load$($String* name, bool initialize) {
	$loadClass(AbstractCharsetProvider, name, initialize, &_AbstractCharsetProvider_ClassInfo_, clinit$AbstractCharsetProvider, allocate$AbstractCharsetProvider);
	return class$;
}

$Class* AbstractCharsetProvider::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun