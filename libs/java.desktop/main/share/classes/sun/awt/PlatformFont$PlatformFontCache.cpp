#include <sun/awt/PlatformFont$PlatformFontCache.h>
#include <java/nio/ByteBuffer.h>
#include <sun/awt/FontDescriptor.h>
#include <sun/awt/PlatformFont.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $PlatformFont = ::sun::awt::PlatformFont;

namespace sun {
	namespace awt {

void PlatformFont$PlatformFontCache::init$($PlatformFont* this$0) {
	$set(this, this$0, this$0);
	$set(this, bb, $ByteBuffer::allocate(4));
}

PlatformFont$PlatformFontCache::PlatformFont$PlatformFontCache() {
}

$Class* PlatformFont$PlatformFontCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/PlatformFont;", nullptr, $FINAL | $SYNTHETIC, $field(PlatformFont$PlatformFontCache, this$0)},
		{"uniChar", "C", nullptr, 0, $field(PlatformFont$PlatformFontCache, uniChar)},
		{"fontDescriptor", "Lsun/awt/FontDescriptor;", nullptr, 0, $field(PlatformFont$PlatformFontCache, fontDescriptor)},
		{"bb", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(PlatformFont$PlatformFontCache, bb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/PlatformFont;)V", nullptr, 0, $method(PlatformFont$PlatformFontCache, init$, void, $PlatformFont*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.PlatformFont$PlatformFontCache", "sun.awt.PlatformFont", "PlatformFontCache", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.PlatformFont$PlatformFontCache",
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
		"sun.awt.PlatformFont"
	};
	$loadClass(PlatformFont$PlatformFontCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformFont$PlatformFontCache);
	});
	return class$;
}

$Class* PlatformFont$PlatformFontCache::class$ = nullptr;

	} // awt
} // sun