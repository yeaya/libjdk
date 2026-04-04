#include <com/sun/imageio/stream/CloseableDisposerRecord.h>
#include <java/io/Closeable.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace stream {

void CloseableDisposerRecord::init$($Closeable* closeable) {
	$set(this, closeable, closeable);
}

void CloseableDisposerRecord::dispose() {
	$synchronized(this) {
		if (this->closeable != nullptr) {
			$var($Throwable, var$0, nullptr);
			try {
				try {
					this->closeable->close();
				} catch ($IOException& e) {
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$set(this, closeable, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

CloseableDisposerRecord::CloseableDisposerRecord() {
}

$Class* CloseableDisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"closeable", "Ljava/io/Closeable;", nullptr, $PRIVATE, $field(CloseableDisposerRecord, closeable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/Closeable;)V", nullptr, $PUBLIC, $method(CloseableDisposerRecord, init$, void, $Closeable*)},
		{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(CloseableDisposerRecord, dispose, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.stream.CloseableDisposerRecord",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CloseableDisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseableDisposerRecord);
	});
	return class$;
}

$Class* CloseableDisposerRecord::class$ = nullptr;

			} // stream
		} // imageio
	} // sun
} // com