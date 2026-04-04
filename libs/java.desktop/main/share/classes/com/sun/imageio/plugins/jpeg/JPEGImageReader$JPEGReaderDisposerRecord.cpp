#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$JPEGReaderDisposerRecord.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <jcpp.h>

using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void JPEGImageReader$JPEGReaderDisposerRecord::init$(int64_t pData) {
	this->pData = pData;
}

void JPEGImageReader$JPEGReaderDisposerRecord::dispose() {
	$synchronized(this) {
		if (this->pData != 0) {
			$JPEGImageReader::disposeReader(this->pData);
			this->pData = 0;
		}
	}
}

JPEGImageReader$JPEGReaderDisposerRecord::JPEGImageReader$JPEGReaderDisposerRecord() {
}

$Class* JPEGImageReader$JPEGReaderDisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pData", "J", nullptr, $PRIVATE, $field(JPEGImageReader$JPEGReaderDisposerRecord, pData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(JPEGImageReader$JPEGReaderDisposerRecord, init$, void, int64_t)},
		{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JPEGImageReader$JPEGReaderDisposerRecord, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.JPEGImageReader$JPEGReaderDisposerRecord", "com.sun.imageio.plugins.jpeg.JPEGImageReader", "JPEGReaderDisposerRecord", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.JPEGImageReader$JPEGReaderDisposerRecord",
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
		"com.sun.imageio.plugins.jpeg.JPEGImageReader"
	};
	$loadClass(JPEGImageReader$JPEGReaderDisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGImageReader$JPEGReaderDisposerRecord);
	});
	return class$;
}

$Class* JPEGImageReader$JPEGReaderDisposerRecord::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com