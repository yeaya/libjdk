#include <sun/rmi/server/LoaderHandler$LoaderKey.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <sun/rmi/server/LoaderHandler.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace rmi {
		namespace server {

void LoaderHandler$LoaderKey::init$($URLArray* urls, $ClassLoader* parent) {
	$set(this, urls, urls);
	$set(this, parent, parent);
	if (parent != nullptr) {
		this->hashValue = $of(parent)->hashCode();
	}
	for (int32_t i = 0; i < $nc(urls)->length; ++i) {
		this->hashValue ^= $nc(urls->get(i))->hashCode();
	}
}

int32_t LoaderHandler$LoaderKey::hashCode() {
	return this->hashValue;
}

bool LoaderHandler$LoaderKey::equals(Object$* obj) {
	if ($instanceOf(LoaderHandler$LoaderKey, obj)) {
		$var(LoaderHandler$LoaderKey, other, $cast(LoaderHandler$LoaderKey, obj));
		if (this->parent != other->parent) {
			return false;
		}
		if (this->urls == other->urls) {
			return true;
		}
		if ($nc(this->urls)->length != $nc(other->urls)->length) {
			return false;
		}
		for (int32_t i = 0; i < this->urls->length; ++i) {
			if (!$nc(this->urls->get(i))->equals(other->urls->get(i))) {
				return false;
			}
		}
		return true;
	} else {
		return false;
	}
}

LoaderHandler$LoaderKey::LoaderHandler$LoaderKey() {
}

$Class* LoaderHandler$LoaderKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"urls", "[Ljava/net/URL;", nullptr, $PRIVATE, $field(LoaderHandler$LoaderKey, urls)},
		{"parent", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(LoaderHandler$LoaderKey, parent)},
		{"hashValue", "I", nullptr, $PRIVATE, $field(LoaderHandler$LoaderKey, hashValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(LoaderHandler$LoaderKey, init$, void, $URLArray*, $ClassLoader*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(LoaderHandler$LoaderKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(LoaderHandler$LoaderKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.server.LoaderHandler$LoaderKey", "sun.rmi.server.LoaderHandler", "LoaderKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.server.LoaderHandler$LoaderKey",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.server.LoaderHandler"
	};
	$loadClass(LoaderHandler$LoaderKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoaderHandler$LoaderKey);
	});
	return class$;
}

$Class* LoaderHandler$LoaderKey::class$ = nullptr;

		} // server
	} // rmi
} // sun