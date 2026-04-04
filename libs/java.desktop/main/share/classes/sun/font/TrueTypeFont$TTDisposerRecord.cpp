#include <sun/font/TrueTypeFont$TTDisposerRecord.h>
#include <java/io/IOException.h>
#include <java/nio/channels/FileChannel.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void TrueTypeFont$TTDisposerRecord::init$() {
	$set(this, channel, nullptr);
}

void TrueTypeFont$TTDisposerRecord::dispose() {
	$synchronized(this) {
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (this->channel != nullptr) {
					this->channel->close();
				}
			} catch ($IOException& e) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, channel, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

TrueTypeFont$TTDisposerRecord::TrueTypeFont$TTDisposerRecord() {
}

$Class* TrueTypeFont$TTDisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"channel", "Ljava/nio/channels/FileChannel;", nullptr, 0, $field(TrueTypeFont$TTDisposerRecord, channel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TrueTypeFont$TTDisposerRecord, init$, void)},
		{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TrueTypeFont$TTDisposerRecord, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.TrueTypeFont$TTDisposerRecord", "sun.font.TrueTypeFont", "TTDisposerRecord", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.TrueTypeFont$TTDisposerRecord",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.TrueTypeFont"
	};
	$loadClass(TrueTypeFont$TTDisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TrueTypeFont$TTDisposerRecord);
	});
	return class$;
}

$Class* TrueTypeFont$TTDisposerRecord::class$ = nullptr;

	} // font
} // sun