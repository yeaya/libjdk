#include <com/sun/jmx/mbeanserver/DescriptorCache.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/WeakHashMap.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/JMX.h>
#include <jcpp.h>

using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $WeakHashMap = ::java::util::WeakHashMap;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $JMX = ::javax::management::JMX;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

DescriptorCache* DescriptorCache::instance = nullptr;

void DescriptorCache::init$() {
	$set(this, map, $new($WeakHashMap));
}

DescriptorCache* DescriptorCache::getInstance() {
	$init(DescriptorCache);
	return DescriptorCache::instance;
}

DescriptorCache* DescriptorCache::getInstance($JMX* proof) {
	$init(DescriptorCache);
	if (proof != nullptr) {
		return DescriptorCache::instance;
	} else {
		return nullptr;
	}
}

$ImmutableDescriptor* DescriptorCache::get($ImmutableDescriptor* descriptor) {
	$useLocalObjectStack();
	$var($WeakReference, wr, $cast($WeakReference, this->map->get(descriptor)));
	$var($ImmutableDescriptor, got, (wr == nullptr) ? ($ImmutableDescriptor*)nullptr : $cast($ImmutableDescriptor, wr->get()));
	if (got != nullptr) {
		return got;
	}
	this->map->put(descriptor, $$new($WeakReference, descriptor));
	return descriptor;
}

$ImmutableDescriptor* DescriptorCache::union$($DescriptorArray* descriptors) {
	return get($($ImmutableDescriptor::union$(descriptors)));
}

void DescriptorCache::clinit$($Class* clazz) {
	$assignStatic(DescriptorCache::instance, $new(DescriptorCache));
}

DescriptorCache::DescriptorCache() {
}

$Class* DescriptorCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lcom/sun/jmx/mbeanserver/DescriptorCache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DescriptorCache, instance)},
		{"map", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljavax/management/ImmutableDescriptor;Ljava/lang/ref/WeakReference<Ljavax/management/ImmutableDescriptor;>;>;", $PRIVATE | $FINAL, $field(DescriptorCache, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DescriptorCache, init$, void)},
		{"get", "(Ljavax/management/ImmutableDescriptor;)Ljavax/management/ImmutableDescriptor;", nullptr, $PUBLIC, $virtualMethod(DescriptorCache, get, $ImmutableDescriptor*, $ImmutableDescriptor*)},
		{"getInstance", "()Lcom/sun/jmx/mbeanserver/DescriptorCache;", nullptr, $STATIC, $staticMethod(DescriptorCache, getInstance, DescriptorCache*)},
		{"getInstance", "(Ljavax/management/JMX;)Lcom/sun/jmx/mbeanserver/DescriptorCache;", nullptr, $PUBLIC | $STATIC, $staticMethod(DescriptorCache, getInstance, DescriptorCache*, $JMX*)},
		{"union", "([Ljavax/management/Descriptor;)Ljavax/management/ImmutableDescriptor;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(DescriptorCache, union$, $ImmutableDescriptor*, $DescriptorArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.DescriptorCache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DescriptorCache, name, initialize, &classInfo$$, DescriptorCache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DescriptorCache);
	});
	return class$;
}

$Class* DescriptorCache::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com