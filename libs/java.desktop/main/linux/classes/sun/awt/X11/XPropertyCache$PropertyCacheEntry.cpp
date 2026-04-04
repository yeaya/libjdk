#include <sun/awt/X11/XPropertyCache$PropertyCacheEntry.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/XPropertyCache.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

void XPropertyCache$PropertyCacheEntry::init$(int32_t format, int32_t numberOfItems, int64_t bytesAfter, int64_t data, int32_t dataLength) {
	this->format = format;
	this->numberOfItems = numberOfItems;
	this->bytesAfter = bytesAfter;
	$init($XlibWrapper);
	this->data = $nc($XlibWrapper::unsafe)->allocateMemory(dataLength);
	this->dataLength = dataLength;
	$XlibWrapper::memcpy(this->data, data, dataLength);
}

int32_t XPropertyCache$PropertyCacheEntry::getFormat() {
	return this->format;
}

int32_t XPropertyCache$PropertyCacheEntry::getNumberOfItems() {
	return this->numberOfItems;
}

int64_t XPropertyCache$PropertyCacheEntry::getBytesAfter() {
	return this->bytesAfter;
}

int64_t XPropertyCache$PropertyCacheEntry::getData() {
	return this->data;
}

int32_t XPropertyCache$PropertyCacheEntry::getDataLength() {
	return this->dataLength;
}

XPropertyCache$PropertyCacheEntry::XPropertyCache$PropertyCacheEntry() {
}

$Class* XPropertyCache$PropertyCacheEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"format", "I", nullptr, $PRIVATE | $FINAL, $field(XPropertyCache$PropertyCacheEntry, format)},
		{"numberOfItems", "I", nullptr, $PRIVATE | $FINAL, $field(XPropertyCache$PropertyCacheEntry, numberOfItems)},
		{"bytesAfter", "J", nullptr, $PRIVATE | $FINAL, $field(XPropertyCache$PropertyCacheEntry, bytesAfter)},
		{"data", "J", nullptr, $PRIVATE | $FINAL, $field(XPropertyCache$PropertyCacheEntry, data)},
		{"dataLength", "I", nullptr, $PRIVATE | $FINAL, $field(XPropertyCache$PropertyCacheEntry, dataLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IIJJI)V", nullptr, $PUBLIC, $method(XPropertyCache$PropertyCacheEntry, init$, void, int32_t, int32_t, int64_t, int64_t, int32_t)},
		{"getBytesAfter", "()J", nullptr, $PUBLIC, $virtualMethod(XPropertyCache$PropertyCacheEntry, getBytesAfter, int64_t)},
		{"getData", "()J", nullptr, $PUBLIC, $virtualMethod(XPropertyCache$PropertyCacheEntry, getData, int64_t)},
		{"getDataLength", "()I", nullptr, $PUBLIC, $virtualMethod(XPropertyCache$PropertyCacheEntry, getDataLength, int32_t)},
		{"getFormat", "()I", nullptr, $PUBLIC, $virtualMethod(XPropertyCache$PropertyCacheEntry, getFormat, int32_t)},
		{"getNumberOfItems", "()I", nullptr, $PUBLIC, $virtualMethod(XPropertyCache$PropertyCacheEntry, getNumberOfItems, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XPropertyCache$PropertyCacheEntry", "sun.awt.X11.XPropertyCache", "PropertyCacheEntry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XPropertyCache$PropertyCacheEntry",
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
		"sun.awt.X11.XPropertyCache"
	};
	$loadClass(XPropertyCache$PropertyCacheEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPropertyCache$PropertyCacheEntry);
	});
	return class$;
}

$Class* XPropertyCache$PropertyCacheEntry::class$ = nullptr;

		} // X11
	} // awt
} // sun