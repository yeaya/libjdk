#include <sun/awt/X11/XDropTargetProtocol$EmbedderRegistryEntry.h>
#include <sun/awt/X11/XDropTargetProtocol.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

void XDropTargetProtocol$EmbedderRegistryEntry::init$(bool overriden, int32_t version, int64_t proxy) {
	this->overriden = overriden;
	this->version = version;
	this->proxy = proxy;
}

bool XDropTargetProtocol$EmbedderRegistryEntry::isOverriden() {
	return this->overriden;
}

int32_t XDropTargetProtocol$EmbedderRegistryEntry::getVersion() {
	return this->version;
}

int64_t XDropTargetProtocol$EmbedderRegistryEntry::getProxy() {
	return this->proxy;
}

XDropTargetProtocol$EmbedderRegistryEntry::XDropTargetProtocol$EmbedderRegistryEntry() {
}

$Class* XDropTargetProtocol$EmbedderRegistryEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"overriden", "Z", nullptr, $PRIVATE | $FINAL, $field(XDropTargetProtocol$EmbedderRegistryEntry, overriden)},
		{"version", "I", nullptr, $PRIVATE | $FINAL, $field(XDropTargetProtocol$EmbedderRegistryEntry, version)},
		{"proxy", "J", nullptr, $PRIVATE | $FINAL, $field(XDropTargetProtocol$EmbedderRegistryEntry, proxy)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZIJ)V", nullptr, 0, $method(XDropTargetProtocol$EmbedderRegistryEntry, init$, void, bool, int32_t, int64_t)},
		{"getProxy", "()J", nullptr, $PUBLIC, $method(XDropTargetProtocol$EmbedderRegistryEntry, getProxy, int64_t)},
		{"getVersion", "()I", nullptr, $PUBLIC, $method(XDropTargetProtocol$EmbedderRegistryEntry, getVersion, int32_t)},
		{"isOverriden", "()Z", nullptr, $PUBLIC, $method(XDropTargetProtocol$EmbedderRegistryEntry, isOverriden, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XDropTargetProtocol$EmbedderRegistryEntry", "sun.awt.X11.XDropTargetProtocol", "EmbedderRegistryEntry", $PROTECTED | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.X11.XDropTargetProtocol$EmbedderRegistryEntry",
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
		"sun.awt.X11.XDropTargetProtocol"
	};
	$loadClass(XDropTargetProtocol$EmbedderRegistryEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XDropTargetProtocol$EmbedderRegistryEntry);
	});
	return class$;
}

$Class* XDropTargetProtocol$EmbedderRegistryEntry::class$ = nullptr;

		} // X11
	} // awt
} // sun